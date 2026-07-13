#!/usr/bin/env node
// cos_relay.js — Cossacks: Back to War 1.52 (WASM) multiplayer relay.
//
// ONE VIRTUAL LAN: no rooms, no game logic — the relay only assigns peer ids and forwards
// datagrams. A broadcast frame reaches every other connected peer, so the game's stock LAN
// discovery (query broadcast -> host replies) and the in-game lobby work over the internet
// exactly as they do on a local network.
//
// Wire format (binary, little-endian):
//   client->relay:  [0x02][to:u32][dstPort:u16][srcPort:u16][data]   unicast to peer id
//                   [0x03][dstPort:u16][srcPort:u16][data]           broadcast
//   relay->client:  [0x81][yourId:u32]                               hello (on connect)
//                   [0x82][from:u32][dstPort:u16][srcPort:u16][data] delivered datagram
//   (0x05/0x85 reserved for a future NAT hole-punch rendezvous for native clients)
//
// Run:      node cos_relay.js [port]            (default 8790, listens on 0.0.0.0)
// Status:   GET /status  -> JSON {peers, uptime, rx, tx}
// Deps:     npm i ws
//
// PUBLIC-FACING LIMITS: max frame 2 KB, 300 frames/s and 256 KB/s per peer, 512 peers,
// 8 connections per IP, idle timeout 60 s (ws ping keeps live ones alive).

'use strict';
const http = require('http');
const { WebSocketServer } = require('ws');

const PORT = parseInt(process.argv[2] || process.env.PORT || '8790', 10);
const MAX_FRAME = 2048;
const MAX_PEERS = 512;
const MAX_PER_IP = 8;
const RATE_FRAMES = 300;          // per second
const RATE_BYTES = 256 * 1024;    // per second
const IDLE_MS = 60000;

const peers = new Map();          // id -> {ws, ip, alive, frames, bytes}
let nextId = 1;
let rx = 0, tx = 0;
const started = Date.now();

const server = http.createServer((req, res) => {
  if (req.url === '/status') {
    res.writeHead(200, { 'content-type': 'application/json' });
    res.end(JSON.stringify({
      peers: peers.size,
      uptimeSec: Math.floor((Date.now() - started) / 1000),
      rxFrames: rx, txFrames: tx
    }));
    return;
  }
  res.writeHead(200, { 'content-type': 'text/plain' });
  res.end('cossacks relay: ' + peers.size + ' peer(s) online\n');
});

const wss = new WebSocketServer({ server, maxPayload: MAX_FRAME });

function ipOf(req) {
  const xf = req.headers['x-forwarded-for'];             // behind the reverse proxy
  return (xf ? String(xf).split(',')[0].trim() : req.socket.remoteAddress) || '?';
}

wss.on('connection', (ws, req) => {
  const ip = ipOf(req);
  let perIp = 0;
  for (const p of peers.values()) if (p.ip === ip) perIp++;
  if (peers.size >= MAX_PEERS || perIp >= MAX_PER_IP) { ws.close(1013, 'full'); return; }

  const id = nextId++ & 0xFFFFFF || (nextId = 2, 1);      // 24-bit ids (virtual 10.hi.mid.lo) — must match cos_net.js/cos_master.js
  const peer = { ws, ip, alive: Date.now(), frames: 0, bytes: 0 };
  peers.set(id, peer);

  const hello = Buffer.alloc(5);
  hello.writeUInt8(0x81, 0);
  hello.writeUInt32LE(id, 1);
  ws.send(hello);
  console.log(`[+] peer ${id} (${ip}) — ${peers.size} online`);

  ws.on('message', (buf, isBinary) => {
    if (!isBinary || buf.length < 5 || buf.length > MAX_FRAME) return;
    const now = Date.now();
    if (now - peer.alive >= 1000) { peer.alive = now; peer.frames = 0; peer.bytes = 0; }
    if (++peer.frames > RATE_FRAMES || (peer.bytes += buf.length) > RATE_BYTES) return;
    rx++;
    const t = buf.readUInt8(0);

    if (t === 0x02 && buf.length >= 9) {                  // unicast
      const to = buf.readUInt32LE(1);
      const dst = peers.get(to & 0xFFFFFF);
      if (!dst || dst.ws.readyState !== 1) return;
      const out = Buffer.alloc(buf.length);               // same layout, swap header type+id
      out.writeUInt8(0x82, 0);
      out.writeUInt32LE(id, 1);
      buf.copy(out, 5, 5);                                // dstPort,srcPort,data unchanged
      dst.ws.send(out); tx++;
    } else if (t === 0x03 && buf.length >= 5) {           // broadcast to everyone else
      const out = Buffer.alloc(buf.length + 4);
      out.writeUInt8(0x82, 0);
      out.writeUInt32LE(id, 1);
      buf.copy(out, 5, 1);                                // dstPort,srcPort,data
      for (const [pid, p] of peers) {
        if (pid !== id && p.ws.readyState === 1) { p.ws.send(out); tx++; }
      }
    }
  });

  ws.on('close', () => { peers.delete(id); console.log(`[-] peer ${id} — ${peers.size} online`); });
  ws.on('error', () => {});
  ws.on('pong', () => { peer.alive = Date.now(); });
});

setInterval(() => {
  const now = Date.now();
  for (const [id, p] of peers) {
    if (p.ws.readyState !== 1) { peers.delete(id); continue; }
    if (now - p.alive > IDLE_MS) { p.ws.terminate(); peers.delete(id); continue; }
    try { p.ws.ping(); } catch (e) {}
  }
}, 25000);

server.listen(PORT, '0.0.0.0', () =>
  console.log(`cossacks relay listening on :${PORT}  (ws path: any; status: /status)`));
