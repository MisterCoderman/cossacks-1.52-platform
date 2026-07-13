#!/usr/bin/env node
// cos_master.js вЂ” Cossacks: Back to War 1.52 (WASM) master server.
//
// Replaces the dead original stack (GameSpy PeerChat IRC lobby + GSC-Game.Net HTML login +
// GSC's own UDP hole-punch rendezvous) with ONE modern service that:
//   1) is the SAME WebSocket virtual-LAN relay as cos_relay.js (peer id <-> virtual 10.hi.mid.lo
//      IP, 24-bit id space, broadcast/unicast datagram forwarding) вЂ” same wire format, so LAN
//      discovery still works verbatim for peers on this relay;
//   2) additionally tracks REAL ROOMS (host name, map slot count, current players) server-side,
//      exactly like the original wanted from "GSC-Game.Net": the room list the client shows is
//      OUR data, not a manual IP/link вЂ” the user picks from a list and does nothing else;
//   3) runs a UDP rendezvous listener for REAL NAT hole-punching (Electron native-UDP peers only вЂ”
//      browsers cannot open raw UDP sockets). A room where every peer is Electron gets a genuine
//      P2P path (CommCore data flows directly host<->client, punched through both NATs, exactly
//      like the original's UdpHolePuncher intended but the original never actually got a live
//      master for). Any room with a browser peer вЂ” or a punch that doesn't complete in time вЂ”
//      transparently uses the WS relay as the data path, so play ALWAYS works, unlike the original
//      (which had no fallback at all if hole punching failed).
//
// Control channel (JSON, one per WS connection, distinct from the binary game-data frames):
//   client->server: {t:'hello', nick, caps:['udp'|'relay']}
//                    {t:'host',  name, maxPlayers}
//                    {t:'list'}
//                    {t:'join',  room}
//                    {t:'leave'}
//                    {t:'punch_ready'}                    // Electron: UDP keepalive reached the server
//   server->client: {t:'hello_ok', playerId, udpServer, udpPort, udpInterval, accessKey}
//                    {t:'rooms', rooms:[{id,name,host,players,maxPlayers}]}
//                    {t:'hosted', room:{id,...}}
//                    {t:'joined', room, hostPeerId, transport:'udp'|'relay', hostAddr, hostPort}
//                    {t:'peer_addr', peerId, ip, port}    // rendezvous: tell one side the other's punched addr
//                    {t:'error', msg}
//
// Binary game-data frames are UNCHANGED from cos_relay.js (0x02/0x03 client->server,
// 0x81/0x82 server->client) so CommCore's virtual-UDP transport keeps working as-is.
//
// UDP rendezvous wire (Electron only), 25 bytes, matches the original UdpHolePuncher packet so a
// native build could reuse it verbatim: "CSHP"(4) + version(1) + playerId:u32be(4) + accessKey(16).
//
// Also serves the static game build (web/) on the SAME origin/port as the WS control+relay
// channel, so the client never needs any relay address configured вЂ” no ?relay= URL param, no
// localStorage step, nothing to type in. cos_net.js's same-origin fallback (ws(s)://<origin>/вЂ¦)
// just works because "the origin" IS this process. One process, one port, one plain URL: drop
// this folder (+ a `public/` with the built web/ files, or point STATIC_DIR at it) on ANY host вЂ”
// Windows, macOS, Linux, Raspberry Pi, whatever runs Node вЂ” and open http://<host>:<port>/.
// A production deployment MAY instead split this across a reverse proxy (see docker-compose.yml:
// static files on one backend, wss://<host>/cossacks routed to this process on another) вЂ” the
// client can't tell the difference either way, since both resolve same-origin.
//
// Run:      node cos_master.js [wsPort] [udpPort]     (default 8790 / 8792)
//           STATIC_DIR=/path/to/web node cos_master.js   (default: ./public next to this file)
// UDP punch is enabled for Electron/native-UDP clients by default. Set ENABLE_UDP_PUNCH=0 to
// disable it. If the server is behind a domain/proxy, set PUBLIC_UDP_HOST=x.x.x.x because the
// restored native client stores the rendezvous host in an IPv4-sized field.
// Browser clients still use the WebSocket relay: browsers have no raw UDP socket.
// Status:   GET /status -> JSON {peers, rooms, uptime}
// Deps:     npm i ws

'use strict';
const http = require('http');
const net = require('net');
const zlib = require('zlib');
const dgram = require('dgram');
const crypto = require('crypto');
const fs = require('fs');
const path = require('path');
const { WebSocketServer } = require('ws');

// ---- GSC game-server bridge (native rloger SimpleCossacksServer over TCP) ----
// The GSC internet lobby (login / rooms / room list) is served by the ORIGINAL rloger Perl server
// (GSC::Server + SimpleCossacksServer, unmodified) speaking the game's native binary GSC-Stream
// protocol on a TCP port. Browsers have no raw TCP, so this bridge is the GSC-Stream codec that the
// original gw_server.dll was: the WASM GW device sends/receives just the raw command payload
// (ParsedRQ::Compact bytes = exactly GSC::CommandSet wire form) plus num/ver/lang; the bridge wraps
// it into the 12-byte header + zlib body the Perl server expects, and re-frames + inflates replies.
// Direct-IP / LAN multiplayer (CommCore relay + electron UDP) is entirely separate and untouched.
//
// WS frame (browser <-> bridge), one request/reply per binary frame, little-endian:
//   [num:u16][ver:u8][lang:u8][payload...]   payload = GSC::CommandSet bin (Compact)
// TCP frame (bridge <-> Perl), GSC::Stream::bin:
//   [num:u16][lang:u8][ver:u8][size:u32][len:u32][ zlib(payload) ]   size = zlen+12, len = payload len
const GSC_HOST = process.env.GSC_HOST || '127.0.0.1';
const GSC_PORT = parseInt(process.env.GSC_PORT || '34001', 10);
const GSC_MAX_STREAM = 4 * 1024 * 1024;

const WS_PORT = parseInt(process.argv[2] || process.env.PORT || '8790', 10);
const UDP_PORT = parseInt(process.argv[3] || process.env.UDP_PORT || '8792', 10);
// Zero-config default: a `public/` folder next to this script (production layout, e.g. behind a
// reverse proxy per docker-compose.yml) wins if it exists; otherwise fall back to the sibling
// `../web` directory (this repo's own build output), so `node cos_master.js` just works out of the
// box without anyone having to remember to set STATIC_DIR.
const STATIC_DIR = path.resolve(process.env.STATIC_DIR ||
  (fs.existsSync(path.join(__dirname, 'public')) ? path.join(__dirname, 'public')
                                                  : path.join(__dirname, '..', 'web')));
const MIME = {
  '.html': 'text/html; charset=utf-8', '.js': 'text/javascript', '.mjs': 'text/javascript',
  '.wasm': 'application/wasm', '.data': 'application/octet-stream', '.json': 'application/json',
  '.css': 'text/css', '.png': 'image/png', '.jpg': 'image/jpeg', '.gif': 'image/gif',
  '.ico': 'image/x-icon', '.svg': 'image/svg+xml', '.bmp': 'image/bmp', '.txt': 'text/plain'
};
const MAX_FRAME = 2048;
// Sized for up to ~100k concurrent connections. Override with the MAX_PEERS env var if the box
// has more/less headroom (each connection is a WS socket + a small JS object - budget a few KB
// each, so 100k is roughly a few hundred MB of RAM; also raise the OS file-descriptor limit
// (Linux: ulimit -n) to comfortably clear 100k, since every WS connection is one fd).
const MAX_PEERS = parseInt(process.env.MAX_PEERS || '100000', 10);
const MAX_PER_IP = 8;
const RATE_FRAMES = 300;
const RATE_BYTES = 256 * 1024;
const IDLE_MS = 60000;
const PUNCH_INTERVAL_MS = 2000;
const PUNCH_FANOUT_MS = 12000;
const ROOM_STALE_MS = parseInt(process.env.ROOM_STALE_MS || String(15 * 60000), 10);
const MAX_ROOMS_PER_LIST = Math.max(1, Math.min(500, parseInt(process.env.MAX_ROOMS_PER_LIST || '200', 10)));
const ENABLE_UDP_PUNCH = !/^(0|false|no)$/i.test(process.env.ENABLE_UDP_PUNCH || '1');
const PUBLIC_UDP_HOST = process.env.PUBLIC_UDP_HOST || process.env.PUBLIC_HOST || '';
const PUBLIC_UDP_HOST_OK = isIpv4Literal(PUBLIC_UDP_HOST);

// Peer id space: 24 bits (whole 10.0.0.0/8 minus the .0.0 network id), matching cos_net.js's
// virtual-IP scheme 10.hi.mid.lo. Comfortably covers 100k concurrent (16.7M addresses) with huge
// headroom, and ids are RECYCLED (allocRelayId skips any id still in peers) so a long-running,
// high-churn server never runs out even after the counter wraps.
const RELAY_ID_MASK = 0xFFFFFF;

const peers = new Map();          // relayId -> {ws, ip, alive, frames, bytes, nick, playerId, room, punchAddr, caps}
const rooms = new Map();          // roomId -> {id, name, hostPeerId, maxPlayers, createdAt, lastSeen}
// Indexes kept in sync incrementally so hot paths never scan all peers at 100k scale:
const roomMembers = new Map();    // roomKey (roomId, or '' for "no room") -> Set<relayId>
const ipCounts = new Map();       // ip -> connection count (MAX_PER_IP, O(1) instead of a full scan)
const byPlayerId = new Map();     // playerId -> relayId (O(1) UDP punch-packet lookup)
// A GSC peer's first CSHP can arrive (UDP) before its {t:'gsc_room'} re-key (TCP) has run, so the
// punchId isn't in byPlayerId yet. Buffer the observed address by punchId briefly; gsc_room applies
// it on arrival. Keyed by punchId(%PROF) -> {ip, port, ts, key}. Pruned on use / by the sweep.
const pendingPunch = new Map();
let nextRelayId = 1;
let nextPlayerId = 1;
let rx = 0, tx = 0;
const started = Date.now();

function newRoomId() { return crypto.randomBytes(4).toString('hex'); }
function newAccessKey() { return crypto.randomBytes(8).toString('hex').slice(0, 15); }

// ---- persistent match stats (client 'report' messages -> GET /stats) ----
const STATS_FILE = path.join(__dirname, 'cos_stats.json');
const STATS = { matches: [], wins: {} };
try {
  const loaded = JSON.parse(fs.readFileSync(STATS_FILE, 'utf8'));
  if (loaded && Array.isArray(loaded.matches)) STATS.matches = loaded.matches;
  if (loaded && loaded.wins && typeof loaded.wins === 'object') STATS.wins = loaded.wins;
} catch (e) {}
let statsSaveTimer = 0;
function saveStatsSoon() {
  if (statsSaveTimer) return;
  statsSaveTimer = setTimeout(() => {
    statsSaveTimer = 0;
    fs.writeFile(STATS_FILE, JSON.stringify(STATS), () => {});
  }, 1000);
}
function hexToBuf(hex) {
  if (typeof hex !== 'string' || hex.length > 4096 || hex.length % 2 || /[^0-9a-fA-F]/.test(hex)) return null;
  return Buffer.from(hex, 'hex');
}
// OnePlayerReport (GSC_ChatWindow.cpp): Profile u32, State u8, Score u16, Population u16,
// ReachRes[6] u32, NBornP u16, NBornUnits u16. 37 bytes packed(1), 40 bytes packed(4)
// (3 pad bytes: after State and after Population). Detect by blob length.
function parsePlayerReport(b) {
  try {
    if (b.length === 37) {
      return { profile: b.readUInt32LE(0), state: b[4], score: b.readUInt16LE(5), population: b.readUInt16LE(7) };
    }
    if (b.length === 40) {
      return { profile: b.readUInt32LE(0), state: b[4], score: b.readUInt16LE(6), population: b.readUInt16LE(8) };
    }
  } catch (e) {}
  return null;
}
function recordReport(peer, msg) {
  const kind = String(msg.kind || '');
  const game = cleanText(msg.game, '', 63);
  const buf = hexToBuf(msg.data);
  if (!buf) return;
  if (kind === 'endgame' && buf.length >= 8) {
    const playerId = buf.readInt32LE(0);
    const state = buf.readInt32LE(4);
    STATS.matches.push({ ts: Date.now(), game, nick: peer.nick, playerId, state });
    if (state) STATS.wins[peer.nick] = (STATS.wins[peer.nick] || 0) + 1;
    if (STATS.matches.length > 1000) STATS.matches.splice(0, STATS.matches.length - 1000);
    console.log(`[stats] endgame game=${game} player=${playerId} state=${state} by ${peer.nick}`);
    saveStatsSoon();
  } else if (kind === 'stats' && buf.length >= 5) {
    const rep = parsePlayerReport(buf.subarray(5));
    STATS.matches.push({
      ts: Date.now(), game, nick: peer.nick, kind: 'stats',
      time: buf.readUInt32LE(0), players: buf[4], report: rep || buf.subarray(5).toString('hex')
    });
    if (STATS.matches.length > 1000) STATS.matches.splice(0, STATS.matches.length - 1000);
    saveStatsSoon();
  }
  // 'alive' keepalive-reports refresh liveness only - no history value, deliberately not stored
}
function isIpv4Literal(value) {
  const parts = String(value || '').split('.');
  return parts.length === 4 && parts.every((part) => /^\d{1,3}$/.test(part) && Number(part) <= 255);
}
function cleanText(value, fallback, maxLen) {
  const s = String(value || fallback || '').replace(/[\x00-\x1F\x7F]/g, ' ').replace(/\s+/g, ' ').trim();
  return (s || fallback || '').slice(0, maxLen);
}
function normalizeCaps(caps) {
  const out = new Set();
  if (Array.isArray(caps)) {
    for (const cap of caps) if (cap === 'udp' || cap === 'relay') out.add(cap);
  }
  if (!out.size) out.add('relay');
  return [...out];
}
function punchEnabledFor(peer) {
  return ENABLE_UDP_PUNCH && peer.udpHost && peer.caps.includes('udp');
}
function udpHostForRequest(req) {
  if (PUBLIC_UDP_HOST_OK) return PUBLIC_UDP_HOST;
  if (PUBLIC_UDP_HOST) return '';
  const xf = req.headers['x-forwarded-host'];
  const raw = (xf ? String(xf).split(',')[0].trim() : req.headers.host) || '';
  const host = raw.replace(/^\[/, '').replace(/\]$/, '').replace(/:\d+$/, '');
  return isIpv4Literal(host) ? host : '';
}
function packetAccessKey(msg) {
  return msg.toString('ascii', 9, 25).replace(/\0.*$/, '');
}
function accessKeyMatches(peer, msg) {
  const got = Buffer.from(packetAccessKey(msg));
  const expected = Buffer.from(peer.accessKey || '');
  return got.length === expected.length && got.length > 0 && crypto.timingSafeEqual(got, expected);
}

function allocRelayId() {
  for (let tries = 0; tries <= RELAY_ID_MASK; tries++) {
    let id = nextRelayId;
    nextRelayId = (nextRelayId + 1) & RELAY_ID_MASK;
    if (nextRelayId === 0) nextRelayId = 1;   // 0 reserved (would map to bare "10.0.0.0")
    if (!peers.has(id)) return id;
  }
  return -1;   // unreachable while peers.size < RELAY_ID_MASK (MAX_PEERS is far below that)
}

function roomKeyOf(peer) { return peer.room || ''; }
function indexJoinRoom(relayId, peer) {
  const k = roomKeyOf(peer);
  let set = roomMembers.get(k);
  if (!set) { set = new Set(); roomMembers.set(k, set); }
  set.add(relayId);
}
function indexLeaveRoom(relayId, peer) {
  const k = roomKeyOf(peer);
  const set = roomMembers.get(k);
  if (set) { set.delete(relayId); if (!set.size) roomMembers.delete(k); }
}
function setPeerRoom(relayId, peer, newRoom) {
  indexLeaveRoom(relayId, peer);
  peer.room = newRoom;
  indexJoinRoom(relayId, peer);
}
function roomPlayerCount(roomId) { const s = roomMembers.get(roomId); return s ? s.size : 0; }
function roomPeerIds(roomId) { const s = roomMembers.get(roomId); return s ? [...s] : []; }

function canExchangeUdp(a, b) {
  return punchEnabledFor(a) && punchEnabledFor(b) && a.punchAddr && b.punchAddr;
}

function notifyPeerAddr(dstPeer, srcPeer, srcRelayId) {
  if (!dstPeer || !srcPeer || dstPeer === srcPeer) return;
  if (!canExchangeUdp(dstPeer, srcPeer)) return;
  sendJson(dstPeer, {
    t: 'peer_addr',
    // relayId is the source peer's VIRTUAL relay id (10.<relayId> is exactly what the engine
    // addresses game data to). The client keys its virtual->real punch map on it so cosn_sendto can
    // rewrite the virtual 10.<relayId> destination to the real punched ip:port. peerId (the punch
    // playerId) is kept for logging/back-compat with the old COS_MASTER path.
    relayId: srcRelayId,
    peerId: srcPeer.playerId,
    ip: srcPeer.punchAddr.ip,
    port: srcPeer.punchAddr.port,
    until: Date.now() + PUNCH_FANOUT_MS
  });
}

function fanoutRoomPeerAddrs(roomId) {
  for (const dstId of roomPeerIds(roomId)) {
    const dst = peers.get(dstId);
    if (!dst) continue;
    for (const srcId of roomPeerIds(roomId)) {
      if (srcId === dstId) continue;
      const src = peers.get(srcId);
      if (src) notifyPeerAddr(dst, src, srcId);
    }
  }
}

// Relay-fallback for a GSC game keyed by 'gsc:<hostRelayId>' (no rooms-Map object exists for GSC
// games - they live in the rloger Perl server, we only track their relay/punch grouping here).
// Tells every peer in the group to move its CommCore data socket onto the WS relay (client handles
// {t:'relay_required'} in web/cos_master.js). Used when the group can't be fully hole-punched.
function forceGscRelay(roomKey, reason) {
  for (const pid of roomPeerIds(roomKey)) {
    const p = peers.get(pid);
    if (p) sendJson(p, { t: 'relay_required', reason: reason || 'nat-fallback' });
  }
}

function relayHostAddr(hostPeerId) {
  return `10.${(hostPeerId >> 16) & 255}.${(hostPeerId >> 8) & 255}.${hostPeerId & 255}`;
}

function forceRoomRelay(room, reason) {
  if (!room) return;
  room.transport = 'relay';
  for (const pid of roomPeerIds(room.id)) {
    const p = peers.get(pid);
    if (p) sendJson(p, { t: 'relay_required', room: room.id, reason: reason || 'nat-fallback' });
  }
}

function removeRoom(roomId) {
  const members = roomMembers.get(roomId);
  if (members) {
    for (const relayId of [...members]) {
      const peer = peers.get(relayId);
      if (peer && peer.room === roomId) setPeerRoom(relayId, peer, null);
    }
  }
  rooms.delete(roomId);
}

function leaveCurrentRoom(relayId, peer) {
  if (!peer.room) return;
  const roomId = peer.room;
  const room = rooms.get(roomId);
  if (room && room.hostPeerId === relayId) removeRoom(roomId);
  else setPeerRoom(relayId, peer, null);
}

// Single teardown path for a peer, used both by the normal 'close' event and by the periodic
// sweep's dead-socket branch вЂ” keeps roomMembers/ipCounts/byPlayerId/peers in lockstep no matter
// which path notices the disconnect first (a stale index entry here would misdirect broadcasts
// or, worse, wedge ipCounts so a departed IP can never reconnect).
function dropPeer(relayId, peer) {
  if (!peers.has(relayId)) return;
  for (const [id, r] of [...rooms]) if (r.hostPeerId === relayId) removeRoom(id);
  indexLeaveRoom(relayId, peer);
  byPlayerId.delete(peer.playerId);
  const c = (ipCounts.get(peer.ip) || 1) - 1;
  if (c <= 0) ipCounts.delete(peer.ip); else ipCounts.set(peer.ip, c);
  peers.delete(relayId);
}

function pruneRooms() {
  const now = Date.now();
  for (const [id, r] of [...rooms]) {
    if (now - r.lastSeen > ROOM_STALE_MS || !peers.has(r.hostPeerId)) removeRoom(id);
  }
}

function roomList(offset, limit, search) {
  pruneRooms();
  const q = cleanText(search || '', '', 63).toLowerCase();
  const all = [];
  for (const [id, r] of rooms) {
    if (r.inGame) continue;   // match already running - not joinable, keep it out of the list
    if (q && !r.name.toLowerCase().includes(q) && !r.hostNick.toLowerCase().includes(q)) continue;
    all.push({ id, name: r.name, host: r.hostNick, players: roomPlayerCount(id), maxPlayers: r.maxPlayers, transport: r.transport });
  }
  all.sort((a, b) => a.name.localeCompare(b.name) || a.id.localeCompare(b.id));
  return { total: all.length, rooms: all.slice(offset, offset + limit) };
}

function sendJson(peer, obj) { try { peer.ws.send(JSON.stringify(obj)); } catch (e) {} }

// ---- static file serving (the build output, e.g. web/) ----
const haveStatic = fs.existsSync(STATIC_DIR) && fs.statSync(STATIC_DIR).isDirectory();
function serveStatic(req, res) {
  let urlPath;
  try {
    urlPath = decodeURIComponent((req.url || '/').split('?')[0].split('#')[0]);
  } catch (e) {
    res.writeHead(400); res.end('bad request'); return;
  }
  if (urlPath.endsWith('/')) urlPath += 'index.html';
  // Resolve and reject any path that escapes STATIC_DIR (../, absolute overrides, etc.)
  const filePath = path.normalize(path.join(STATIC_DIR, urlPath));
  if (!filePath.startsWith(STATIC_DIR + path.sep) && filePath !== STATIC_DIR) {
    res.writeHead(403); res.end('forbidden'); return;
  }
  fs.stat(filePath, (err, st) => {
    if (err || !st.isFile()) { res.writeHead(404); res.end('not found'); return; }
    const ext = path.extname(filePath).toLowerCase();
    const headers = { 'content-type': MIME[ext] || 'application/octet-stream', 'content-length': st.size };
    // Bulk unpacked game data can cache hard, but manifests are live indexes. If a manifest is
    // cached as immutable, the browser can keep a stale file list and the engine sees files as
    // missing even when they exist on disk.
    const lowerUrl = urlPath.toLowerCase();
    const isManifest = lowerUrl.endsWith('/manifest.txt') || lowerUrl.endsWith('/manifest_local.txt');
    headers['cache-control'] = urlPath.startsWith('/data/') && !isManifest
      ? 'public, max-age=31536000, immutable' : 'no-cache';
    res.writeHead(200, headers);
    fs.createReadStream(filePath).pipe(res);
  });
}

// ---- HTTP (status + static files + WS upgrade host, all one origin/port) ----
const server = http.createServer((req, res) => {
  if (req.url === '/status') {
    res.writeHead(200, { 'content-type': 'application/json' });
    res.end(JSON.stringify({
      peers: peers.size, rooms: rooms.size, static: haveStatic,
      uptimeSec: Math.floor((Date.now() - started) / 1000), rxFrames: rx, txFrames: tx
    }));
    return;
  }
  if (req.url === '/stats') {
    res.writeHead(200, { 'content-type': 'application/json' });
    res.end(JSON.stringify({ wins: STATS.wins, matches: STATS.matches.slice(-200) }));
    return;
  }
  if (haveStatic) { serveStatic(req, res); return; }
  res.writeHead(200, { 'content-type': 'text/plain' });
  res.end(`cossacks master: ${peers.size} peer(s), ${rooms.size} room(s)\n` +
    `(no static build found at ${STATIC_DIR} - set STATIC_DIR or drop the web/ build in ./public)\n`);
});

// Two logical WS services on the SAME port (still one process, no docker, no second port to open):
// the relay/room protocol (unchanged path) and the IRC-emulator tunnel at /cossacks-irc for the
// restored GameSpy Chat SDK (chatSocket.c, tunneled by src/IChat/WebChat.cpp + web/cos_chat.js).
const wss = new WebSocketServer({ noServer: true, maxPayload: MAX_FRAME + 4096 });
const wssIrc = new WebSocketServer({ noServer: true, maxPayload: 8192 });
const wssGsc = new WebSocketServer({ noServer: true, maxPayload: 4 * 1024 * 1024 });
server.on('upgrade', (req, socket, head) => {
  const pathname = (req.url || '').split('?')[0];
  const target = pathname === '/cossacks-irc' ? wssIrc
    : pathname === '/cossacks-gsc' ? wssGsc
    : wss;
  target.handleUpgrade(req, socket, head, (ws) => target.emit('connection', ws, req));
});

// Each browser GSC session gets its own TCP connection to the native rloger server. The Perl server
// keeps all per-connection state (player id, nick, current room), exactly as for a native client.
// Encode one GSC-Stream (header + zlib) from a raw command payload and write it to the TCP socket.
function gscWriteStream(tcp, num, ver, lang, payload) {
  const comp = zlib.deflateSync(payload);
  const hdr = Buffer.alloc(12);
  hdr.writeUInt16LE(num & 0xFFFF, 0);
  hdr.writeUInt8(lang & 0xFF, 2);
  hdr.writeUInt8(ver & 0xFF, 3);
  hdr.writeUInt32LE(comp.length + 12, 4);
  hdr.writeUInt32LE(payload.length, 8);
  try { tcp.write(Buffer.concat([hdr, comp])); } catch (e) {}
}
// Build a GSC::CommandSet payload for one command with string args (matches ParsedRQ::Compact wire).
function gscCommandPayload(name, args) {
  const bufs = [];
  const cnt = Buffer.alloc(2); cnt.writeUInt16LE(1, 0); bufs.push(cnt);
  const nb = Buffer.from(name, 'latin1');
  const h = Buffer.alloc(1); h.writeUInt8(nb.length, 0); bufs.push(h, nb);
  const np = Buffer.alloc(2); np.writeUInt16LE(args.length, 0); bufs.push(np);
  for (const a of args) {
    const ab = Buffer.from(String(a), 'latin1');
    const sz = Buffer.alloc(4); sz.writeUInt32LE(ab.length, 0); bufs.push(sz, ab);
  }
  return Buffer.concat(bufs);
}
// The game server's CommandController expects win + key as the last two args of every command.
const GSC_PROXY_KEY = process.env.GSC_PROXY_KEY || 'coswasmproxy';
function gscSendProxy(tcp, virtIp) {
  // proxy(ip, port, key) - args order [ip, port, proxy_key, win='', conn_key=''] (server pops last 2)
  const payload = gscCommandPayload('proxy', [virtIp, '34000', GSC_PROXY_KEY, '', '']);
  gscWriteStream(tcp, 1, 2, 0, payload);
}

wssGsc.on('connection', (ws, req) => {
  const ip = ipOf(req);
  const tcp = net.connect(GSC_PORT, GSC_HOST);
  let acc = Buffer.alloc(0);   // TCP receive accumulator, split into GSC-Stream frames by header
  let proxied = false;         // has the 'proxy' (real connect address) command been sent yet?
  const preQ = [];             // GSC frames received before the peer id / proxy

  function flushPre() {
    for (const f of preQ) {
      gscWriteStream(tcp, f.num, f.ver, f.lang, f.payload);
    }
    preQ.length = 0;
  }
  // Fallback: if the client never sends a peer id (old client / no relay), proceed without proxy
  // after a short delay so the lobby is never wedged (server then uses the TCP ip, old behaviour).
  const proxyTimer = setTimeout(() => { if (!proxied) { proxied = true; flushPre(); } }, 4000);

  tcp.on('connect', () => { try { ws.send(JSON.stringify({ gsc: 'open' })); } catch (e) {} });

  // browser -> Perl
  ws.on('message', (data, isBinary) => {
    if (!isBinary) {
      // control frame: {peerId} - the client's relay peer id. Register it as the real connect
      // address (10.<peer_id>) via the server's 'proxy' command, BEFORE any login/host request.
      if (proxied) return;
      let m; try { m = JSON.parse(data.toString('utf8')); } catch (e) { return; }
      if (m && typeof m.peerId === 'number') {
        const id = m.peerId & 0xFFFFFF;
        if (id > 0) {
          const virtIp = '10.' + ((id >> 16) & 255) + '.' + ((id >> 8) & 255) + '.' + (id & 255);
          gscSendProxy(tcp, virtIp);
          console.log(`[gsc] ${ip} peer ${id} -> proxy ${virtIp}`);
        }
        proxied = true;
        clearTimeout(proxyTimer);
        flushPre();
      }
      return;
    }
    if (data.length < 4) return;
    const frame = { num: data.readUInt16LE(0), ver: data.readUInt8(2), lang: data.readUInt8(3), payload: data.subarray(4) };
    if (!proxied) { if (preQ.length < 64) preQ.push(frame); return; }   // hold until proxied
    gscWriteStream(tcp, frame.num, frame.ver, frame.lang, frame.payload);
  });

  // Perl -> browser : re-frame by the stream header, inflate, forward the raw payload back
  tcp.on('data', (buf) => {
    acc = acc.length ? Buffer.concat([acc, buf]) : buf;
    while (acc.length >= 12) {
      const num = acc.readUInt16LE(0);
      const lang = acc.readUInt8(2);
      const ver = acc.readUInt8(3);
      const size = acc.readUInt32LE(4);
      if (size < 12 || size > GSC_MAX_STREAM) { try { ws.close(1011, 'gsc framing'); } catch (e) {} return; }
      if (acc.length < size) break;                       // wait for the rest of this stream
      const comp = acc.subarray(12, size);
      acc = acc.subarray(size);
      let payload;
      try { payload = zlib.inflateSync(comp); } catch (e) { continue; }
      const out = Buffer.alloc(4 + payload.length);
      out.writeUInt16LE(num & 0xFFFF, 0);
      out.writeUInt8(ver & 0xFF, 2);
      out.writeUInt8(lang & 0xFF, 3);
      payload.copy(out, 4);
      if (ws.readyState === 1) ws.send(out);
    }
  });

  tcp.on('error', () => { try { ws.close(1011, 'gsc backend error'); } catch (x) {} });
  tcp.on('close', () => { try { ws.close(1000, 'gsc backend closed'); } catch (x) {} });

  // Keepalive: detect a browser whose WS silently died (tab frozen/killed, network dropped, laptop
  // slept) without sending a close frame. Without this the bridge->server TCP stays ESTABLISHED and
  // the player lingers as a ghost in the lobby (rooms + online) until the server's 150s alive timer.
  // Ping every 30s; a missed pong terminates the WS -> ws.close -> tcp.destroy -> the Perl server's
  // _close removes the player and closes their room immediately. Mirrors the IRC bridge keepalive.
  ws._gscAlive = true;
  ws.on('pong', () => { ws._gscAlive = true; });
  const kaTimer = setInterval(() => {
    if (ws._gscAlive === false) { try { ws.terminate(); } catch (e) {} return; }
    ws._gscAlive = false;
    try { ws.ping(); } catch (e) {}
  }, 30000);
  ws.on('close', () => { clearInterval(kaTimer); try { tcp.destroy(); } catch (e) {} });
  ws.on('error', () => { clearInterval(kaTimer); try { tcp.destroy(); } catch (e) {} });
  console.log(`[gsc] bridge ${ip} -> ${GSC_HOST}:${GSC_PORT}`);
});

function ipOf(req) {
  const xf = req.headers['x-forwarded-for'];
  return (xf ? String(xf).split(',')[0].trim() : req.socket.remoteAddress) || '?';
}

wss.on('connection', (ws, req) => {
  const ip = ipOf(req);
  if (peers.size >= MAX_PEERS || (ipCounts.get(ip) || 0) >= MAX_PER_IP) { ws.close(1013, 'full'); return; }

  const relayId = allocRelayId();
  if (relayId < 0) { ws.close(1013, 'full'); return; }   // id space exhausted (practically impossible)
  const playerId = nextPlayerId++;
  const peer = {
    ws, ip, alive: Date.now(), frames: 0, bytes: 0,
    nick: 'player' + playerId, playerId, room: null, punchAddr: null, caps: ['relay'],
    accessKey: newAccessKey(), udpHost: udpHostForRequest(req)
  };
  peers.set(relayId, peer);
  indexJoinRoom(relayId, peer);
  byPlayerId.set(playerId, relayId);
  ipCounts.set(ip, (ipCounts.get(ip) || 0) + 1);
  console.log(`[+] peer ${relayId} (${ip}) playerId=${playerId} вЂ” ${peers.size} online`);

  const hello = Buffer.alloc(5);
  hello.writeUInt8(0x81, 0);
  hello.writeUInt32LE(relayId, 1);
  ws.send(hello);

  ws.on('message', (buf, isBinary) => {
    const now = Date.now();
    if (now - peer.alive >= 1000) { peer.alive = now; peer.frames = 0; peer.bytes = 0; }
    if (++peer.frames > RATE_FRAMES || (peer.bytes += buf.length) > RATE_BYTES) return;

    if (!isBinary) { handleControl(relayId, peer, buf); return; }
    if (buf.length < 5 || buf.length > MAX_FRAME) return;
    rx++;
    const t = buf.readUInt8(0);
    if (t === 0x02 && buf.length >= 9) {                  // unicast game-data frame
      const to = buf.readUInt32LE(1);
      const dst = peers.get(to & RELAY_ID_MASK);
      if (!dst || dst.ws.readyState !== 1) return;
      const out = Buffer.alloc(buf.length);
      out.writeUInt8(0x82, 0);
      out.writeUInt32LE(relayId, 1);
      buf.copy(out, 5, 5);
      dst.ws.send(out); tx++;
    } else if (t === 0x03 && buf.length >= 5) {           // broadcast (LAN discovery inside a room's virtual LAN)
      const out = Buffer.alloc(buf.length + 4);
      out.writeUInt8(0x82, 0);
      out.writeUInt32LE(relayId, 1);
      buf.copy(out, 5, 1);
      // Broadcast scope = same room (or, if not in a room, everyone else with no room вЂ” legacy
      // virtual-LAN behaviour). Indexed by roomMembers so this touches only that room's peers, not
      // every connection on the server (matters once there are 100k of them).
      const members = roomMembers.get(roomKeyOf(peer));
      if (members) {
        for (const pid of members) {
          if (pid === relayId) continue;
          const p = peers.get(pid);
          if (p && p.ws.readyState === 1) { p.ws.send(out); tx++; }
        }
      }
    }
  });

  ws.on('close', () => {
    dropPeer(relayId, peer);
    console.log(`[-] peer ${relayId} вЂ” ${peers.size} online`);
  });
  ws.on('error', () => {});
  ws.on('pong', () => { peer.alive = Date.now(); });
});

function handleControl(relayId, peer, raw) {
  let msg;
  try { msg = JSON.parse(raw.toString('utf8')); } catch (e) { return; }
  if (!msg || typeof msg.t !== 'string') return;

  switch (msg.t) {
    case 'hello': {
      peer.nick = cleanText(msg.nick, peer.nick, 31);
      peer.caps = normalizeCaps(msg.caps);
      const punch = punchEnabledFor(peer);
      sendJson(peer, {
        t: 'hello_ok', playerId: peer.playerId,
        udpServer: punch ? peer.udpHost : '', udpPort: punch ? UDP_PORT : 0,
        udpInterval: punch ? PUNCH_INTERVAL_MS : 0, accessKey: peer.accessKey
      });
      break;
    }
    case 'host': {
      leaveCurrentRoom(relayId, peer);
      const id = newRoomId();
      const name = cleanText(msg.name, peer.nick + "'s game", 63);
      const maxPlayers = Math.max(2, Math.min(7, msg.maxPlayers | 0 || 7));
      const transport = punchEnabledFor(peer) ? 'udp' : 'relay';
      rooms.set(id, { id, name, hostPeerId: relayId, hostNick: peer.nick, maxPlayers, transport, createdAt: Date.now(), lastSeen: Date.now() });
      setPeerRoom(relayId, peer, id);
      sendJson(peer, { t: 'hosted', room: { id, name, host: peer.nick, players: 1, maxPlayers, transport } });
      fanoutRoomPeerAddrs(id);
      console.log(`[room] ${peer.nick} hosted "${name}" (${id}) transport=${transport}`);
      break;
    }
    case 'list': {
      const offset = Math.max(0, msg.offset | 0);
      const requested = msg.limit | 0;
      const limit = Math.max(1, Math.min(MAX_ROOMS_PER_LIST, requested || MAX_ROOMS_PER_LIST));
      const list = roomList(offset, limit, msg.search);
      sendJson(peer, { t: 'rooms', rooms: list.rooms, total: list.total, offset, limit });
      break;
    }
    case 'join': {
      const room = rooms.get(String(msg.room || ''));
      if (!room) { sendJson(peer, { t: 'error', msg: 'room not found' }); break; }
      const host = peers.get(room.hostPeerId);
      if (!host) { rooms.delete(room.id); sendJson(peer, { t: 'error', msg: 'host gone' }); break; }
      if (room.inGame) { sendJson(peer, { t: 'error', msg: 'game in progress' }); break; }
      if (roomPlayerCount(room.id) >= room.maxPlayers) { sendJson(peer, { t: 'error', msg: 'room full' }); break; }
      setPeerRoom(relayId, peer, room.id);
      room.lastSeen = Date.now();

      const sendJoinedUdp = (h) => {
        sendJson(peer, {
          t: 'joined', room: room.id, hostPeerId: room.hostPeerId,
          transport: 'udp', hostAddr: h.punchAddr.ip, hostPort: h.punchAddr.port
        });
        fanoutRoomPeerAddrs(room.id);
        console.log(`[room] ${peer.nick} joined "${room.name}" (${room.id}) via udp`);
      };
      const sendJoinedRelay = (reason) => {
        forceRoomRelay(room, reason);
        sendJson(peer, {
          t: 'joined', room: room.id, hostPeerId: room.hostPeerId,
          transport: 'relay',
          hostAddr: relayHostAddr(room.hostPeerId),
          hostPort: 34000
        });
        console.log(`[room] ${peer.nick} joined "${room.name}" (${room.id}) via relay (${reason})`);
      };

      // UDP rooms are native-only. Browser clients have no raw UDP; silently giving them a relay
      // address for a native host would create a broken half-connection, so fail explicitly.
      const bothUdp = punchEnabledFor(host) && punchEnabledFor(peer);
      if (room.transport !== 'udp') { sendJoinedRelay('room-relay'); break; }
      if (!bothUdp) { sendJoinedRelay('peer-without-udp'); break; }
      if (host.punchAddr) { sendJoinedUdp(host); break; }
      // Host is native-UDP but its first CSHP keepalive (every PUNCH_INTERVAL_MS) hasn't landed
      // yet - a joiner arriving within the first couple of seconds would otherwise IRREVERSIBLY
      // downgrade the whole room to relay. Hold the 'joined' reply briefly instead of downgrading.
      const joinDeadline = Date.now() + 2 * PUNCH_INTERVAL_MS;
      const joinPoll = setInterval(() => {
        const h = peers.get(room.hostPeerId);
        if (!h || !rooms.has(room.id)) {
          clearInterval(joinPoll);
          if (peers.has(relayId)) sendJson(peer, { t: 'error', msg: 'host gone' });
          return;
        }
        if (!peers.has(relayId)) { clearInterval(joinPoll); return; }   // joiner disconnected
        if (h.punchAddr) { clearInterval(joinPoll); sendJoinedUdp(h); return; }
        if (Date.now() > joinDeadline) { clearInterval(joinPoll); sendJoinedRelay('host-punch-not-ready'); }
      }, 250);
      break;
    }
    case 'punch_ready': {
      // Native client reports its CSHP keepalive reached the rendezvous: refresh liveness and
      // re-fan out punched addresses so both sides can start opening their NATs immediately.
      peer.alive = Date.now();
      if (peer.room) fanoutRoomPeerAddrs(peer.room);
      break;
    }
    case 'gsc_room': {
      // A native-UDP (Electron) client that just entered a GSC lobby room announces the game by the
      // HOST's relay peer id (host = its own id; joiner = idFromIp of %CG_IP=10.<hostRelayId>). This
      // re-keys the SAME rendezvous machinery onto the GSC game: peers of one game share the room key
      // 'gsc:<hostId>', and the punch identity (punchId=%PROF, punchKey=login access key) that the
      // C++ CSHP packet actually carries replaces the auto-assigned playerId/accessKey so CSHP
      // packets correlate. Browsers never send this (they can't punch) and stay on the %CG_IP relay.
      const hostId = (msg.hostId >>> 0) & RELAY_ID_MASK;
      if (!hostId) break;
      const punchId = msg.punchId >>> 0;
      const punchKey = cleanText(msg.punchKey, '', 15);
      if (punchId) {
        // Re-key the punch identity, unless another LIVE peer already owns this punchId (anti-hijack).
        const owner = byPlayerId.get(punchId);
        if (owner === undefined || owner === relayId || !peers.has(owner)) {
          if (peer.playerId !== punchId) { byPlayerId.delete(peer.playerId); peer.playerId = punchId; }
          byPlayerId.set(punchId, relayId);
          if (punchKey) peer.accessKey = punchKey;
          peer.caps = ['udp'];   // only native-UDP clients send gsc_room
          // Adopt a CSHP address that arrived before this re-key (UDP raced ahead of the TCP frame).
          const pend = pendingPunch.get(punchId);
          if (pend && (!punchKey || pend.key === punchKey)) { peer.punchAddr = { ip: pend.ip, port: pend.port }; }
          pendingPunch.delete(punchId);
        }
      }
      const roomKey = 'gsc:' + hostId;
      setPeerRoom(relayId, peer, roomKey);
      if (punchEnabledFor(peer)) {
        if (peer.punchAddr) console.log(`[gsc-punch] peer ${relayId} punchId=${punchId} in ${roomKey} at ${peer.punchAddr.ip}:${peer.punchAddr.port}`);
        fanoutRoomPeerAddrs(roomKey);
      } else {
        // This peer can't be hole-punched (no IPv4 rendezvous host / not udp-capable): keep it on the
        // relay for this game. Punch-capable peers are NOT forced; their per-destination send picks
        // direct vs relay once a peer_addr confirms.
        forceGscRelay(roomKey, 'peer-without-udp');
      }
      break;
    }
    case 'game_start': {
      // Sent by StartGSCGame when the match launches. Only the host flips the room state; the
      // room disappears from 'list' and rejects joiners until the host leaves or re-hosts.
      if (peer.room) {
        const room = rooms.get(peer.room);
        if (room && room.hostPeerId === relayId) {
          room.inGame = true;
          room.lastSeen = Date.now();
          console.log(`[room] "${room.name}" (${room.id}) match started - hidden from list`);
        }
      }
      break;
    }
    case 'report': {
      peer.alive = Date.now();
      recordReport(peer, msg);
      break;
    }
    case 'leave': {
      leaveCurrentRoom(relayId, peer);
      break;
    }
    case 'heartbeat': {
      peer.alive = Date.now();
      if (peer.room) {
        const room = rooms.get(peer.room);
        if (room && room.hostPeerId === relayId) room.lastSeen = Date.now();
      }
      sendJson(peer, { t: 'pong' });
      break;
    }
  }
}

// ---- IRC server emulator (GameSpy PeerChat replacement) ----
// Speaks the RFC1459 subset src/IChat/Chat/chatMain.c + chatHandlers.c actually exercise (verified
// against the original SDK source, not guessed): NICK/USER -> 001 welcome; JOIN -> broadcast JOIN
// + 353/366 NAMES (params[2]=channel, params[3]=names вЂ” chatHandlers.c asserts numParams==4/3, this
// wire form is the only one that parses to those counts); PART (always send a trailing reason, even
// empty вЂ” ciPartHandler reads params[1] unconditionally); PRIVMSG/NOTICE/UTM/ATM relay; WHOIS;
// 433 on a taken nick (params[0]="*" params[1]=nick вЂ” matches ciErrNickInUseHandler's asserted
// numParams==3). This is the restored ORIGINAL client's exact protocol, not a custom scheme вЂ” the
// room/matchmaking data flow (GSC's own dead website, never part of GameSpy's protocol) is handled
// separately by the 'host'/'list'/'join' control messages above, unchanged.
const IRC_SERVER_NAME = 'cossacks.local';
const ircClients = new Map();   // ws -> {nick, user, registered, channels:Set<string>}
const ircChannels = new Map();  // lowercased channel name -> Set<ws>
const ircTopics = new Map();    // lowercased channel name -> topic string

function ircSend(ws, line) { try { ws.send(line + '\r\n'); } catch (e) {} }
function ircPrefix(c) { return `${c.nick}!${c.user || 'user'}@cossacks`; }
function ircNumeric(ws, code, params) {
  const c = ircClients.get(ws);
  const nick = (c && c.nick) || '*';
  ircSend(ws, `:${IRC_SERVER_NAME} ${code} ${nick} ${params}`);
}

function ircParseLine(line) {
  let trailing = null;
  let head = line;
  const colonIdx = line.indexOf(' :');
  if (colonIdx >= 0) { trailing = line.slice(colonIdx + 2); head = line.slice(0, colonIdx); }
  const parts = head.split(' ').filter(Boolean);
  const command = (parts.shift() || '').toUpperCase();
  if (trailing !== null) parts.push(trailing);
  return { command, params: parts };
}

function ircNickTaken(nick) {
  for (const c of ircClients.values()) if (c.nick === nick) return true;
  return false;
}

function ircMaybeRegister(ws, c) {
  if (c.registered || !c.nick || !c.user) return;
  c.registered = true;
  ircNumeric(ws, '001', `:Welcome to Cossacks IRC, ${c.nick}!${c.user}@cossacks`);
}

function ircJoinChannel(ws, c, chan) {
  const key = chan.toLowerCase();
  let members = ircChannels.get(key);
  if (!members) { members = new Set(); ircChannels.set(key, members); }
  members.add(ws);
  c.channels.add(chan);
  const joinMsg = `:${ircPrefix(c)} JOIN ${chan}`;
  for (const mws of members) ircSend(mws, joinMsg);
  const names = [...members].map((mws) => ircClients.get(mws).nick).join(' ');
  ircNumeric(ws, '353', `= ${chan} :${names}`);
  ircNumeric(ws, '366', `${chan} :End of /NAMES list.`);
}

function ircPartChannel(ws, c, chan, reason) {
  const key = chan.toLowerCase();
  const members = ircChannels.get(key);
  if (members && members.has(ws)) {
    const partMsg = `:${ircPrefix(c)} PART ${chan} :${reason || ''}`;
    for (const mws of members) ircSend(mws, partMsg);
    members.delete(ws);
    if (!members.size) ircChannels.delete(key);
  }
  c.channels.delete(chan);
}

function ircRelayMessage(ws, c, command, target, msg) {
  if (!target || !c.registered) return;
  if (target[0] === '#' || target[0] === '&') {
    const members = ircChannels.get(target.toLowerCase());
    if (!members) return;
    const line = `:${ircPrefix(c)} ${command} ${target} :${msg}`;
    for (const mws of members) if (mws !== ws) ircSend(mws, line);
  } else {
    for (const [mws, mc] of ircClients) {
      if (mc.nick === target) { ircSend(mws, `:${ircPrefix(c)} ${command} ${target} :${msg}`); return; }
    }
    ircNumeric(ws, '401', `${target} :No such nick/channel`);
  }
}

function ircWhois(ws, who) {
  for (const [, mc] of ircClients) {
    if (mc.nick === who) {
      ircNumeric(ws, '311', `${who} ${mc.user || 'user'} cossacks * :${who}`);
      const chans = [...mc.channels].join(' ');
      if (chans) ircNumeric(ws, '319', `${who} :${chans}`);
      ircNumeric(ws, '318', `${who} :End of /WHOIS list.`);
      return;
    }
  }
  ircNumeric(ws, '401', `${who} :No such nick/channel`);
  ircNumeric(ws, '318', `${who} :End of /WHOIS list.`);
}

function ircHandleLine(ws, c, line) {
  const { command, params } = ircParseLine(line);
  switch (command) {
    case 'NICK': {
      const nick = params[0];
      if (!nick) break;
      // NOTE: ircNumeric already inserts the current nick (or '*') as the first parameter, so the
      // payload must NOT add another '*' - ciErrNickInUseHandler asserts numParams==3 exactly.
      if (ircNickTaken(nick)) { ircNumeric(ws, '433', `${nick} :Nickname is already in use.`); break; }
      c.nick = nick.slice(0, 31);
      ircMaybeRegister(ws, c);
      break;
    }
    case 'USER': {
      c.user = (params[0] || 'user').slice(0, 31);
      ircMaybeRegister(ws, c);
      break;
    }
    case 'JOIN': {
      if (params[0]) ircJoinChannel(ws, c, params[0]);
      break;
    }
    case 'PART': {
      if (params[0]) ircPartChannel(ws, c, params[0], params[1] || '');
      break;
    }
    case 'PRIVMSG': case 'NOTICE': case 'UTM': case 'ATM': {
      ircRelayMessage(ws, c, command, params[0], params[1] || '');
      break;
    }
    case 'WHOIS': {
      if (params[0]) ircWhois(ws, params[0]);
      break;
    }
    // The restored SDK sends "MODE <chan>" on EVERY channel join (ciJoinHandler, fire-and-forget
    // query). Answer with RPL_CHANNELMODEIS so ciRplChannelModeIsHandler caches the channel mode
    // (numParams>=3: "<chan> <modes>"). Mode SETs (+q/+b/+l ...) get no reply in the real protocol
    // either - the SDK never waits on that path, so accepting them silently is correct.
    case 'MODE': {
      const target = params[0];
      if (target && (target[0] === '#' || target[0] === '&') && params.length === 1) {
        ircNumeric(ws, '324', `${target} +`);
      }
      break;
    }
    case 'NAMES': {
      const chan = params[0];
      if (chan) {
        const members = ircChannels.get(chan.toLowerCase());
        const names = members ? [...members].map((m) => ircClients.get(m).nick).join(' ') : '';
        ircNumeric(ws, '353', `= ${chan} :${names}`);
        ircNumeric(ws, '366', `${chan} :End of /NAMES list.`);
      }
      break;
    }
    case 'TOPIC': {
      const chan = params[0];
      if (!chan) break;
      const key = chan.toLowerCase();
      if (params.length >= 2) {
        ircTopics.set(key, params[1] || '');
        const members = ircChannels.get(key);
        if (members) {
          const line = `:${ircPrefix(c)} TOPIC ${chan} :${params[1] || ''}`;
          for (const mws of members) ircSend(mws, line);
        }
      } else {
        ircNumeric(ws, '332', `${chan} :${ircTopics.get(key) || ''}`);
      }
      break;
    }
    case 'WHO': {
      if (params[0]) ircNumeric(ws, '315', `${params[0]} :End of /WHO list.`);
      break;
    }
    case 'PING': {
      ircSend(ws, `:${IRC_SERVER_NAME} PONG ${IRC_SERVER_NAME} :${params[0] || ''}`);
      break;
    }
    case 'QUIT': {
      try { ws.close(); } catch (e) {}
      break;
    }
    default:
      break;   // anything else (LIST/INVITE/KICK/SETGROUP/key broadcasts) is not exercised by
               // GSC_ChatWindow.cpp/cs_chat.cpp (verified against source); their SDK filters
               // expire via the 30s filter timeout without blocking anything
  }
}

wssIrc.on('connection', (ws) => {
  const c = { nick: null, user: null, registered: false, channels: new Set() };
  ircClients.set(ws, c);
  let buf = '';
  ws._ircAlive = true;

  ws.on('message', (data) => {
    ws._ircAlive = true;
    buf += data.toString('utf8');
    if (buf.length > 16384) { try { ws.close(); } catch (e) {} return; }   // runaway line guard
    let idx;
    while ((idx = buf.indexOf('\n')) >= 0) {
      let line = buf.slice(0, idx);
      buf = buf.slice(idx + 1);
      if (line.endsWith('\r')) line = line.slice(0, -1);
      if (line) ircHandleLine(ws, c, line);
    }
  });

  ws.on('pong', () => { ws._ircAlive = true; });
  ws.on('close', () => {
    for (const chan of [...c.channels]) ircPartChannel(ws, c, chan, 'Connection closed');
    ircClients.delete(ws);
  });
  ws.on('error', () => {});
});

// IRC keepalive: a browser that vanishes (closed tab, backgrounded, dropped network) may never send
// a WS close frame, leaving a GHOST player in the channel that everyone else still sees online. Ping
// every client each interval; a client that misses a full interval (no pong, no message) is dead ->
// terminate it, which fires 'close' and PARTs it out of its channels so the ghost disappears.
setInterval(() => {
  for (const ws of ircClients.keys()) {
    if (ws._ircAlive === false) { try { ws.terminate(); } catch (e) {} continue; }
    ws._ircAlive = false;
    try { ws.ping(); } catch (e) {}
  }
}, 30000);

// ---- UDP rendezvous (Electron real hole-punch) ----
// Wire (25 bytes): "CSHP"(4) + version(1) + playerId:u32be(4) + accessKey(16, NUL-padded)
if (ENABLE_UDP_PUNCH && (!PUBLIC_UDP_HOST || PUBLIC_UDP_HOST_OK)) {
  const udp = dgram.createSocket('udp4');
  udp.on('message', (msg, rinfo) => {
    if (msg.length < 25 || msg.toString('ascii', 0, 4) !== 'CSHP') return;
    const playerId = msg.readUInt32BE(5);
    const addr = { ip: rinfo.address, port: rinfo.port };
    const relayId = byPlayerId.get(playerId);
    const peer = relayId === undefined ? undefined : peers.get(relayId);
    if (!peer || !accessKeyMatches(peer, msg)) {
      // No peer yet (GSC gsc_room re-key hasn't run) or key mismatch: buffer by punchId with the
      // packet's key so a subsequent gsc_room can validate + adopt it. Bounded lifetime.
      pendingPunch.set(playerId, { ip: addr.ip, port: addr.port, ts: Date.now(), key: packetAccessKey(msg) });
      if (pendingPunch.size > MAX_PEERS) pendingPunch.clear();
      return;
    }

    const changed = !peer.punchAddr || peer.punchAddr.ip !== addr.ip || peer.punchAddr.port !== addr.port;
    peer.punchAddr = addr;
    if (changed) {
      console.log(`[punch] player ${playerId} observed at ${addr.ip}:${addr.port}`);
      if (peer.room) fanoutRoomPeerAddrs(peer.room);
    }
  });
  udp.on('error', (e) => console.warn('[udp] error', e.message));
  udp.bind(UDP_PORT, '0.0.0.0', () => console.log(`cossacks master UDP rendezvous listening on :${UDP_PORT}`));
} else {
  const reason = ENABLE_UDP_PUNCH ? 'PUBLIC_UDP_HOST must be an IPv4 literal' : 'set ENABLE_UDP_PUNCH=1 to enable native-UDP punch';
  console.log(`[udp] rendezvous disabled (${reason}); GSC rooms use the WebSocket relay`);
}

setInterval(() => {
  const now = Date.now();
  // dropPeer() is idempotent (checks peers.has() first) - safe even though ws.terminate() below
  // will also fire an async 'close' that calls it again for the same peer.
  for (const [id, p] of peers) {
    if (p.ws.readyState !== 1) { dropPeer(id, p); continue; }
    if (now - p.alive > IDLE_MS) { p.ws.terminate(); dropPeer(id, p); continue; }
    try { p.ws.ping(); } catch (e) {}
  }
  for (const [pid, e] of pendingPunch) if (now - e.ts > PUNCH_FANOUT_MS) pendingPunch.delete(pid);
  pruneRooms();
}, 25000);

server.listen(WS_PORT, '0.0.0.0', () =>
  console.log(`cossacks master listening ws=:${WS_PORT} udp=:${UDP_PORT} (status: /status)`));
