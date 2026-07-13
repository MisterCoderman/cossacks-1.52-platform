#!/usr/bin/env node
// gsc_punch_smoke.cjs — end-to-end test of the Etap 2 UDP hole-punch RENDEZVOUS on the live GSC path.
// Simulates two Electron peers: each opens the relay WS (/cossacks), announces its GSC game with a
// {t:'gsc_room'} control frame keyed on the HOST's relay id, and sends real CSHP UDP keepalives to
// the master's rendezvous (:8792). Verifies the server pairs them and fans out each peer's real
// punched ip:port to the other as {t:'peer_addr', relayId, ip, port}. Also checks the relay-fallback:
// a peer that never punches (browser-like) makes its partner receive relay_required / no peer_addr.
'use strict';
const path = require('path');
const dgram = require('dgram');
const WebSocket = require(path.join('C:', 'cossacks_wasm', 'server', 'node_modules', 'ws'));
const WS_URL = 'ws://127.0.0.1:8790/cossacks';
const UDP_HOST = '127.0.0.1', UDP_PORT = 8792;

function cshp(punchId, key) {
  const b = Buffer.alloc(25);
  b.write('CSHP', 0, 'ascii'); b.writeUInt8(1, 4); b.writeUInt32BE(punchId >>> 0, 5);
  Buffer.from(String(key)).copy(b, 9, 0, Math.min(15, key.length));   // NUL-padded, ≤15
  return b;
}

function peer(name) {
  const ws = new WebSocket(WS_URL); ws.binaryType = 'arraybuffer';
  const p = { name, ws, myId: 0, peerAddrs: [], relayRequired: false, udp: null, timers: [] };
  ws.on('message', (data, isBinary) => {
    if (isBinary) {
      const u8 = Buffer.from(data);
      if (u8.readUInt8(0) === 0x81) p.myId = u8.readUInt32LE(1);   // relay hello
      return;
    }
    let m; try { m = JSON.parse(data.toString('utf8')); } catch (e) { return; }
    if (m.t === 'peer_addr') p.peerAddrs.push(m);
    else if (m.t === 'relay_required') p.relayRequired = true;
  });
  p.ready = new Promise((res) => ws.on('open', () => {
    const t = setInterval(() => { if (p.myId) { clearInterval(t); res(); } }, 20);
  }));
  p.gscRoom = (hostId, punchId, key, isHost) => ws.send(JSON.stringify({ t: 'gsc_room', hostId, punchId, punchKey: key, role: isHost ? 'host' : 'join' }));
  p.startPunch = (punchId, key) => {
    p.udp = dgram.createSocket('udp4');
    const pkt = cshp(punchId, key);
    const send = () => { try { p.udp.send(pkt, UDP_PORT, UDP_HOST); } catch (e) {} };
    send();
    p.timers.push(setInterval(send, 500));
  };
  p.close = () => { p.timers.forEach(clearInterval); try { p.udp && p.udp.close(); } catch (e) {} try { ws.close(); } catch (e) {} };
  return p;
}

const results = [];
function check(n, ok, extra) { results.push(ok); console.log((ok ? 'PASS' : 'FAIL') + '  ' + n + (extra ? '  ' + extra : '')); }

(async () => {
  const to = setTimeout(() => { console.log('TIMEOUT'); process.exit(2); }, 15000);

  // --- Scenario 1: both peers native-UDP -> mutual peer_addr with real punched addrs ---
  const A = peer('host'), B = peer('join');
  await Promise.all([A.ready, B.ready]);
  const KA = 'hostkey12345', KB = 'joinkey12345';
  // announce first (re-keys byPlayerId), then punch
  A.gscRoom(A.myId, 1001, KA, true);
  B.gscRoom(A.myId, 1002, KB, false);           // joiner announces the HOST's id (as from %CG_IP)
  await new Promise((r) => setTimeout(r, 200));
  A.startPunch(1001, KA);
  B.startPunch(1002, KB);
  await new Promise((r) => setTimeout(r, 2500));  // let CSHP land + fanout

  const aGotB = A.peerAddrs.find((m) => (m.relayId >>> 0) === (B.myId >>> 0) && m.ip && m.port);
  const bGotA = B.peerAddrs.find((m) => (m.relayId >>> 0) === (A.myId >>> 0) && m.ip && m.port);
  check('host receives joiner punched addr (peer_addr relayId=joiner)', !!aGotB, aGotB ? `${aGotB.ip}:${aGotB.port}` : '');
  check('joiner receives host punched addr (peer_addr relayId=host)', !!bGotA, bGotA ? `${bGotA.ip}:${bGotA.port}` : '');
  check('both punched addrs are 127.0.0.1 loopback', !!(aGotB && bGotA && aGotB.ip === '127.0.0.1' && bGotA.ip === '127.0.0.1'));
  A.close(); B.close();

  // --- Scenario 2: joiner never punches (browser-like) -> host gets no usable peer_addr for it ---
  const C = peer('host2'), D = peer('join2-browser');
  await Promise.all([C.ready, D.ready]);
  C.gscRoom(C.myId, 2001, 'ckey12345', true);
  D.gscRoom(C.myId, 2002, 'dkey12345', false);   // announces group but sends NO CSHP
  C.startPunch(2001, 'ckey12345');               // only host punches
  await new Promise((r) => setTimeout(r, 2500));
  const cGotD = C.peerAddrs.find((m) => (m.relayId >>> 0) === (D.myId >>> 0));
  check('no direct pairing when one peer never punches (relay fallback)', !cGotD);
  C.close(); D.close();

  clearTimeout(to);
  const fails = results.filter((x) => !x).length;
  console.log(`---- ${results.length - fails}/${results.length} passed`);
  process.exit(fails ? 1 : 0);
})();
