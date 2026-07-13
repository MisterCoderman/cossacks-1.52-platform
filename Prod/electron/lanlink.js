// lanlink.js — the desktop app's built-in socket SERVICE. One service, identical on every OS.
//
// WHY: the game's wasm lockstep busy-waits on the renderer thread, and every in-renderer transport
// we tried (dgram, worker+SAB, TCP tunnels) stalled or hung between two PCs. The ONE data path that
// is proven smooth — in the browser AND in Electron — is the game's own WebSocket relay mode
// against an external server. So the desktop app now ships that server INSIDE itself:
//
//   game (renderer) ──ws://127.0.0.1:<gamePort>/cossacks──> local service (main process)
//   local service A ──TCP link (LAN / direct IP)──────────> local service B ──ws──> game B
//
// The renderer speaks the stock relay wire protocol (cos_net.js mode 1 — the same bytes as against
// the public server), the service owns all real sockets in the main process (its event loop is
// never blocked by the game), and everything between machines rides reliable TCP streams. No UDP in
// the game-data path at all; UDP is used ONLY for tiny discovery beacons between services.
//
// Peer ids are 24-bit: [servicePrefix:8][localClient:16]. Broadcasts (the engine's LAN discovery)
// fan out to local clients and every linked service, so the stock LAN browser just works. A unicast
// to an id no service owns is treated as a REAL typed IPv4 (the engine's direct-IP join truncates
// the ip to 24 bits): the service reconstructs the address by prepending each local interface's
// first octet (exact for peers in the same private range) and dials that machine's service
// directly — this is how direct-IP join works across subnets, where beacons cannot reach.
//
// Relay wire protocol (binary, little-endian; must match cos_net.js):
//   game->svc: [0x02][to:u32][dstPort:u16][srcPort:u16][data]   unicast
//              [0x03][dstPort:u16][srcPort:u16][data]           broadcast
//   svc->game: [0x81][yourId:u32]                               hello
//              [0x82][from:u32][dstPort:u16][srcPort:u16][data] datagram
//
// Service<->service link frames (TCP): [len:u32][type:u8][payload]
//   1 HELLO json {m:'c152link', p:prefix, tok}
//   2 BCAST [from:u32][dstPort:u16][srcPort:u16][data]
//   3 UNI   [from:u32][to:u32][dstPort:u16][srcPort:u16][data]   (to=0 -> the peer's first client)

'use strict';
const crypto = require('crypto');
const net = require('net');
const dgram = require('dgram');
const os = require('os');

const WS_GUID = '258EAFA5-E914-47DA-95CA-C5AB0DC85B11';

class LanLink {
  constructor(opts) {
    opts = opts || {};
    this.linkPort = opts.linkPort || 34013;
    this.beaconPort = opts.beaconPort || 34012;
    this.beaconMs = opts.beaconMs || 2500;
    // Prefix range 100..229 dodges the common private second octets (168 of 192.168.*, 0..31 of
    // 10.0-31.* / 172.16-31.*), so a random service prefix almost never shadows a typed real IP.
    this.prefix = opts.prefix || (100 + Math.floor(Math.random() * 130));
    this.token = crypto.randomBytes(4).readUInt32LE(0);
    this.nextLocal = 1;
    this.clients = new Map();      // id -> {id, sock, buf}
    this.links = new Map();        // prefix -> link
    this.alias = new Map();        // typed-ip 24-bit id -> prefix
    this.dials = new Map();        // ip -> {to, frames:[...]} while an alias dial is in flight
    this.linkServer = null;
    this.beacon = null;
    this.beaconTimer = 0;
  }

  // ---- lifecycle -----------------------------------------------------------------------------
  attach(httpServer) {
    httpServer.on('upgrade', (req, sock) => { try { this._upgrade(req, sock); } catch (e) { try { sock.destroy(); } catch (_) {} } });
  }
  start() {
    try { this._startLinkServer(); } catch (e) {}
    try { this._startBeacon(); } catch (e) {}
  }

  // ---- local game clients (WebSocket relay endpoint) ------------------------------------------
  _upgrade(req, sock) {
    if (String(req.url || '').split('?')[0] !== '/cossacks') { sock.destroy(); return; }
    const key = req.headers['sec-websocket-key'];
    if (!key) { sock.destroy(); return; }
    const acc = crypto.createHash('sha1').update(key + WS_GUID).digest('base64');
    sock.write('HTTP/1.1 101 Switching Protocols\r\nUpgrade: websocket\r\nConnection: Upgrade\r\nSec-WebSocket-Accept: ' + acc + '\r\n\r\n');
    sock.setNoDelay(true);
    const id = ((this.prefix << 16) | (this.nextLocal++ & 0xFFFF)) >>> 0;
    const client = { id, sock, buf: null };
    this.clients.set(id, client);
    const hello = Buffer.alloc(5);
    hello[0] = 0x81; hello.writeUInt32LE(id, 1);
    this._wsSend(client, hello);
    sock.on('data', (c) => { try { this._wsData(client, c); } catch (e) { try { sock.destroy(); } catch (_) {} } });
    const bye = () => { this.clients.delete(id); try { sock.destroy(); } catch (e) {} };
    sock.on('close', bye);
    sock.on('error', bye);
  }

  _wsData(client, chunk) {
    client.buf = client.buf ? Buffer.concat([client.buf, chunk]) : chunk;
    for (;;) {
      const b = client.buf;
      if (!b || b.length < 2) return;
      const op = b[0] & 0x0F;
      let len = b[1] & 0x7F, off = 2;
      const masked = !!(b[1] & 0x80);
      if (len === 126) { if (b.length < 4) return; len = b.readUInt16BE(2); off = 4; }
      else if (len === 127) { if (b.length < 10) return; if (b.readUInt32BE(2)) { client.sock.destroy(); return; } len = b.readUInt32BE(6); off = 10; }
      let mk = null;
      if (masked) { if (b.length < off + 4) return; mk = b.subarray(off, off + 4); off += 4; }
      if (b.length < off + len) return;
      const payload = Buffer.from(b.subarray(off, off + len));
      client.buf = b.subarray(off + len);
      if (mk) for (let i = 0; i < payload.length; i++) payload[i] ^= mk[i & 3];
      if (op === 8) { try { client.sock.end(); } catch (e) {} return; }
      if (op === 9) { this._wsRaw(client, 10, payload); continue; }         // ping -> pong
      if (op === 2 && payload.length) this._onGameFrame(client, payload);   // binary = relay frame
      // op 1 (text) = master-server JSON (internet lobby); the LAN service has no lobby - ignored.
    }
  }

  _wsRaw(client, op, payload) {
    const len = payload.length;
    let hdr;
    if (len < 126) { hdr = Buffer.from([0x80 | op, len]); }
    else if (len < 65536) { hdr = Buffer.alloc(4); hdr[0] = 0x80 | op; hdr[1] = 126; hdr.writeUInt16BE(len, 2); }
    else { hdr = Buffer.alloc(10); hdr[0] = 0x80 | op; hdr[1] = 127; hdr.writeUInt32BE(0, 2); hdr.writeUInt32BE(len, 6); }
    try { client.sock.write(Buffer.concat([hdr, payload])); } catch (e) {}
  }
  _wsSend(client, buf) { this._wsRaw(client, 2, buf); }

  _deliver(client, fromId, dstPort, srcPort, data) {
    const f = Buffer.alloc(9 + data.length);
    f[0] = 0x82; f.writeUInt32LE(fromId >>> 0, 1);
    f.writeUInt16LE(dstPort, 5); f.writeUInt16LE(srcPort, 7);
    data.copy(f, 9);
    this._wsSend(client, f);
  }

  _onGameFrame(client, buf) {
    const t = buf[0];
    if (t === 0x02 && buf.length >= 9) {
      const to = buf.readUInt32LE(1) & 0xFFFFFF;
      const dstPort = buf.readUInt16LE(5), srcPort = buf.readUInt16LE(7);
      this._unicast(client.id, to, dstPort, srcPort, buf.subarray(9));
    } else if (t === 0x03 && buf.length >= 5) {
      const dstPort = buf.readUInt16LE(1), srcPort = buf.readUInt16LE(3);
      const data = buf.subarray(5);
      for (const c of this.clients.values()) if (c.id !== client.id) this._deliver(c, client.id, dstPort, srcPort, data);
      const lf = this._linkFrame(2, client.id, 0, dstPort, srcPort, data);
      for (const l of this.links.values()) this._linkWrite(l, lf);
    }
  }

  _unicast(fromId, to, dstPort, srcPort, data) {
    const pfx = (to >> 16) & 0xFF;
    if (pfx === this.prefix) {
      const c = this.clients.get(to);
      if (c) this._deliver(c, fromId, dstPort, srcPort, data);
      return;
    }
    const l = this.links.get(pfx);
    if (l) { this._linkWrite(l, this._linkFrame(3, fromId, to, dstPort, srcPort, data)); return; }
    const ap = this.alias.get(to);
    if (ap !== undefined) {
      const al = this.links.get(ap);
      if (al) { this._linkWrite(al, this._linkFrame(3, fromId, 0, dstPort, srcPort, data)); return; }
      this.alias.delete(to);
    }
    // Unknown id = the engine's direct-IP join, truncated to 24 bits. Rebuild the real address by
    // prepending each local interface's first octet (exact within the same private range) and dial
    // that machine's service. Frames queue (bounded) until the link's HELLO arrives.
    this._aliasDial(to, fromId, dstPort, srcPort, data);
  }

  _aliasDial(to, fromId, dstPort, srcPort, data) {
    const frame = this._linkFrame(3, fromId, 0, dstPort, srcPort, data);
    const tail = ((to >> 16) & 255) + '.' + ((to >> 8) & 255) + '.' + (to & 255);
    for (const o of this._firstOctets()) {
      const ip = o + '.' + tail;
      const d = this.dials.get(ip);
      if (d) { if (d.frames.length < 64) d.frames.push(frame); return; }
      this.dials.set(ip, { to, frames: [frame] });
      const sock = net.connect({ host: ip, port: this.linkPort });
      sock.setNoDelay(true);
      this._wireLink(sock, ip);
      sock.on('error', () => { this.dials.delete(ip); });
      // only dial the first candidate octet per send burst; more octets would spray SYNs
      return;
    }
  }

  _firstOctets() {
    const set = [];
    try {
      const ifs = os.networkInterfaces();
      for (const name in ifs) for (const a of ifs[name]) {
        if (a.family !== 'IPv4' || a.internal) continue;
        const o = a.address.split('.')[0];
        if (set.indexOf(o) < 0) set.push(o);
      }
    } catch (e) {}
    return set;
  }

  // ---- service <-> service links ---------------------------------------------------------------
  _linkFrame(type, fromId, toId, dstPort, srcPort, data) {
    const body = 1 + (type === 3 ? 12 : 8) + data.length;
    const f = Buffer.alloc(4 + body);
    f.writeUInt32LE(body, 0);
    f[4] = type;
    let o = 5;
    f.writeUInt32LE(fromId >>> 0, o); o += 4;
    if (type === 3) { f.writeUInt32LE(toId >>> 0, o); o += 4; }
    f.writeUInt16LE(dstPort, o); o += 2;
    f.writeUInt16LE(srcPort, o); o += 2;
    data.copy(f, o);
    return f;
  }
  _linkWrite(link, frame) { try { link.sock.write(frame); } catch (e) {} }

  _startLinkServer() {
    this.linkServer = net.createServer((sock) => {
      let ip = String(sock.remoteAddress || '');
      if (ip.indexOf('::ffff:') === 0) ip = ip.slice(7);
      sock.setNoDelay(true);
      this._wireLink(sock, ip);
    });
    this.linkServer.on('error', () => {});
    this.linkServer.listen(this.linkPort, '0.0.0.0');
  }

  _wireLink(sock, ip) {
    const link = { sock, ip, prefix: -1, buf: null };
    try { sock.setKeepAlive(true, 5000); } catch (e) {}
    // both sides introduce themselves immediately
    const hello = Buffer.from(JSON.stringify({ m: 'c152link', p: this.prefix, tok: this.token }));
    this._linkWrite(link, this._helloFrame(hello));
    sock.on('data', (c) => { try { this._linkData(link, c); } catch (e) { try { sock.destroy(); } catch (_) {} } });
    const bye = () => {
      if (link.prefix >= 0 && this.links.get(link.prefix) === link) this.links.delete(link.prefix);
      for (const [id, p] of this.alias) if (p === link.prefix) this.alias.delete(id);
      try { sock.destroy(); } catch (e) {}
    };
    sock.on('close', bye);
    sock.on('error', () => {});
  }
  _helloFrame(json) {
    const f = Buffer.alloc(4 + 1 + json.length);
    f.writeUInt32LE(1 + json.length, 0); f[4] = 1; json.copy(f, 5);
    return f;
  }

  _linkData(link, chunk) {
    link.buf = link.buf ? Buffer.concat([link.buf, chunk]) : chunk;
    for (;;) {
      const b = link.buf;
      if (!b || b.length < 5) return;
      const len = b.readUInt32LE(0);
      if (len > 1048576) { link.sock.destroy(); return; }
      if (b.length < 4 + len) return;
      const type = b[4];
      const body = b.subarray(5, 4 + len);
      link.buf = b.subarray(4 + len);
      if (type === 1) this._onLinkHello(link, body);
      else if (type === 2 && body.length >= 8) {
        const from = body.readUInt32LE(0), dstPort = body.readUInt16LE(4), srcPort = body.readUInt16LE(6);
        const data = body.subarray(8);
        for (const c of this.clients.values()) this._deliver(c, from, dstPort, srcPort, data);
      } else if (type === 3 && body.length >= 12) {
        const from = body.readUInt32LE(0), to = body.readUInt32LE(4) & 0xFFFFFF;
        const dstPort = body.readUInt16LE(8), srcPort = body.readUInt16LE(10);
        const data = body.subarray(12);
        if (to === 0) { const c = this.clients.values().next().value; if (c) this._deliver(c, from, dstPort, srcPort, data); }
        else { const c = this.clients.get(to); if (c) this._deliver(c, from, dstPort, srcPort, data); }
      }
    }
  }

  _onLinkHello(link, body) {
    let msg = null;
    try { msg = JSON.parse(body.toString('utf8')); } catch (e) { return; }
    if (!msg || msg.m !== 'c152link') return;
    if (msg.p === this.prefix && msg.tok === this.token) { try { link.sock.destroy(); } catch (e) {} return; }  // self
    link.prefix = msg.p & 0xFF;
    const old = this.links.get(link.prefix);
    if (old && old !== link) { try { old.sock.destroy(); } catch (e) {} }
    this.links.set(link.prefix, link);
    // flush any direct-IP frames queued for this machine
    const d = this.dials.get(link.ip);
    if (d) {
      this.dials.delete(link.ip);
      this.alias.set(d.to, link.prefix);
      for (const f of d.frames) this._linkWrite(link, f);
    }
  }

  // ---- LAN discovery beacons -------------------------------------------------------------------
  _startBeacon() {
    const b = dgram.createSocket({ type: 'udp4', reuseAddr: true });
    this.beacon = b;
    b.on('error', () => {});
    b.on('message', (msg, ri) => {
      let m = null;
      try { m = JSON.parse(msg.toString('utf8')); } catch (e) { return; }
      if (!m || m.m !== 'c152' || typeof m.p !== 'number') return;
      if (m.p === this.prefix) {
        if (m.tok !== this.token && this.clients.size === 0) {
          this.prefix = 100 + Math.floor(Math.random() * 130);            // collision, no clients yet
        }
        return;
      }
      if (this.links.has(m.p & 0xFF)) return;
      if (this.prefix < (m.p & 0xFF)) {                                    // lower prefix dials
        const sock = net.connect({ host: ri.address, port: (m.t | 0) || this.linkPort });
        sock.setNoDelay(true);
        this._wireLink(sock, ri.address);
        sock.on('error', () => {});
      }
    });
    b.bind(this.beaconPort, '0.0.0.0', () => {
      try { b.setBroadcast(true); } catch (e) {}
      const send = () => {
        const payload = Buffer.from(JSON.stringify({ m: 'c152', p: this.prefix, t: this.linkPort, tok: this.token }));
        for (const t of this._bcastTargets()) { try { b.send(payload, this.beaconPort, t); } catch (e) {} }
      };
      send();
      this.beaconTimer = setInterval(send, this.beaconMs);
    });
  }

  _bcastTargets() {
    const out = [];
    try {
      const ifs = os.networkInterfaces();
      for (const name in ifs) for (const a of ifs[name]) {
        if (a.family !== 'IPv4' || a.internal) continue;
        const ip = a.address.split('.').map(Number);
        const mk = String(a.netmask || '255.255.255.0').split('.').map(Number);
        out.push(ip.map((o, i) => ((o & mk[i]) | (255 & ~mk[i]))).join('.'));
      }
    } catch (e) {}
    out.push('255.255.255.255');
    return out;
  }
}

module.exports = { LanLink };
