#!/usr/bin/env node
// cosnet_route_test.cjs — unit test for the Etap 2 data-path routing in web/cos_net.js WITHOUT the
// wasm/native UDP. Loads the real addToLibrary source, injects mock HEAP + window.cosElectron, and
// drives cosn_sendto/cosn_recvfrom to assert the virtual<->real punch translation and relay-vs-direct
// decision table. This is the piece that can't run in a headless wasm (no dgram there), so it is
// verified in isolation against the ACTUAL source.
'use strict';
const fs = require('fs');
const path = require('path');
const src = fs.readFileSync(path.join('C:', 'cossacks_wasm', 'web', 'cos_net.js'), 'utf8');

let LIB;
global.addToLibrary = (o) => { LIB = o; };
global.out = () => {};
const HEAP = new Uint8Array(1 << 16);
global.HEAPU8 = HEAP;
global.HEAPU32 = new Uint32Array(HEAP.buffer);
global.HEAP32 = new Int32Array(HEAP.buffer);
global.UTF8ToString = () => '';
let nativeSent = [];
let relaySent = [];
let nativeInbox = [];
global.window = { cosElectron: {
  udpSocket: () => true, udpBind: () => true, udpClose: () => {},
  udpSend: (id, ip, port, data) => { nativeSent.push({ ip, port, data: Uint8Array.from(data) }); return true; },
  udpPoll: () => nativeInbox.shift() || null,
} };
global.location = { protocol: 'http:', host: 'h' };
global.WebSocket = function () { this.send = () => {}; };
global.COS_MASTER = { textPend: [], startFlushTimer: () => {} };
eval(src);
const COS_NET = LIB.$COS_NET;
global.COS_NET = COS_NET;

// Electron internet-room session with the relay WS "open"
COS_NET.mode = 2;
COS_NET.internetRoom = true;
COS_NET.wsReady = true;
COS_NET.ws = { send: (f) => relaySent.push(new Uint8Array(f)) };
COS_NET.socks[1] = { port: 34000, q: [] };
const S = 1;

const results = [];
function check(n, ok, extra) { results.push(ok); console.log((ok ? 'PASS' : 'FAIL') + '  ' + n + (extra ? '  ' + extra : '')); }
function putData(bytes) { HEAP.set(bytes, 0); return { buf: 0, len: bytes.length }; }
const PEER = 5;
const VIP = COS_NET.vip(PEER) >>> 0;   // 10.0.0.5 as the engine addresses it

// --- sendto: unconfirmed punch -> relay (NOT a native datagram to the unroutable virtual ip) ---
COS_NET.punchMap = { 5: { ip: '203.0.113.9', port: 61000, confirmed: false } };
nativeSent = []; relaySent = [];
let d = putData([1, 2, 3, 4]);
LIB.cosn_sendto(S, d.buf, d.len, VIP, 34000);
check('unconfirmed punch -> relay (no native send)', nativeSent.length === 0 && relaySent.length === 1);
check('relay frame is unicast 0x02 to peer id', relaySent.length === 1 && relaySent[0][0] === 0x02 &&
  (new DataView(relaySent[0].buffer).getUint32(1, true) === PEER));

// --- sendto: confirmed punch -> DIRECT native to the real ip:port ---
COS_NET.punchMap[5].confirmed = true;
nativeSent = []; relaySent = [];
d = putData([9, 9]);
LIB.cosn_sendto(S, d.buf, d.len, VIP, 34000);
check('confirmed punch -> direct native to real addr', nativeSent.length === 1 && relaySent.length === 0 &&
  nativeSent[0].ip === '203.0.113.9' && nativeSent[0].port === 61000);

// --- sendto: broadcast always relay (0x03), never native ---
nativeSent = []; relaySent = [];
d = putData([7]);
LIB.cosn_sendto(S, d.buf, d.len, 0xFFFFFFFF, 34000);
check('broadcast -> relay 0x03 (never native)', nativeSent.length === 0 && relaySent.length === 1 && relaySent[0][0] === 0x03);

// --- sendto: forceRelay overrides even a confirmed punch ---
COS_NET.forceRelay = true;
nativeSent = []; relaySent = [];
d = putData([1]);
LIB.cosn_sendto(S, d.buf, d.len, VIP, 34000);
check('forceRelay -> relay even if confirmed', nativeSent.length === 0 && relaySent.length === 1);
COS_NET.forceRelay = false;

// --- recvfrom: empty native keepalive from mapped peer -> confirms punch, returns no data ---
COS_NET.punchMap = { 5: { ip: '203.0.113.9', port: 61000, confirmed: false } };
COS_NET.socks[1].q = [];
nativeInbox = [{ ip: '203.0.113.9', port: 61000, data: new Uint8Array(0) }];
let ipOut = 100 >> 2 << 2, portOut = 200 >> 2 << 2;   // dword-aligned scratch
let r = LIB.cosn_recvfrom(S, 0, 512, 40, 44);
check('native keepalive confirms punch, yields no game data', r === -1 && COS_NET.punchMap[5].confirmed === true);

// --- recvfrom: native DATA from mapped peer -> reports the VIRTUAL ip, real data ---
nativeInbox = [{ ip: '203.0.113.9', port: 61000, data: new Uint8Array([0xAA, 0xBB, 0xCC]) }];
r = LIB.cosn_recvfrom(S, 0, 512, 40, 44);
const gotIp = HEAPU32[40 >> 2] >>> 0;
check('native data -> engine sees virtual 10.<id>, not raw ip', r === 3 && gotIp === VIP && HEAP[0] === 0xAA);

// --- recvfrom: native from UNKNOWN source is ignored (anti-spoof), then relay queue drains ---
nativeInbox = [{ ip: '9.9.9.9', port: 1, data: new Uint8Array([0xEE]) }];
COS_NET.socks[1].q = [{ ip: (COS_NET.vip(6) >>> 0), port: 34000, data: new Uint8Array([0x55]) }];
r = LIB.cosn_recvfrom(S, 0, 512, 40, 44);
check('unknown native ignored; relay queue delivered', r === 1 && HEAP[0] === 0x55);

const fails = results.filter((x) => !x).length;
console.log(`---- ${results.length - fails}/${results.length} passed`);
process.exit(fails ? 1 : 0);
