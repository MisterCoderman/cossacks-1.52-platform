#!/usr/bin/env node
// gsc_nat_smoke.cjs — verify NAT Etap 1: the {peerId} control frame makes the rloger server
// record the caller's relay virtual ip (10.a.b.c) as the room host_addr, so a joiner is routed to
// the correct relay peer instead of the bridge's 127.0.0.1. Reuses the Compact codec from
// gsc_bridge_smoke.cjs but sends {peerId} before login and inspects the room-list host column.
'use strict';
const path = require('path');
const WebSocket = require(path.join('C:', 'cossacks_wasm', 'server', 'node_modules', 'ws'));
const URL = 'ws://127.0.0.1:8790/cossacks-gsc';
const PEER_ID = 0x0A0B0C;                       // -> virt ip 10.10.11.12
const EXPECT_IP = '10.' + ((PEER_ID >> 16) & 255) + '.' + ((PEER_ID >> 8) & 255) + '.' + (PEER_ID & 255);

function compact(cmds) {
  const bufs = [];
  const cnt = Buffer.alloc(2); cnt.writeUInt16LE(cmds.length, 0); bufs.push(cnt);
  for (const c of cmds) {
    const nb = Buffer.from(c.name, 'latin1');
    const h = Buffer.alloc(1); h.writeUInt8(nb.length, 0); bufs.push(h, nb);
    const np = Buffer.alloc(2); np.writeUInt16LE(c.args.length, 0); bufs.push(np);
    for (const a of c.args) {
      const ab = Buffer.isBuffer(a) ? a : Buffer.from(String(a), 'latin1');
      const sz = Buffer.alloc(4); sz.writeUInt32LE(ab.length, 0); bufs.push(sz, ab);
    }
  }
  return Buffer.concat(bufs);
}
function extract(buf) {
  let pos = 0; const n = buf.readUInt16LE(pos); pos += 2; const cmds = [];
  for (let i = 0; i < n; i++) {
    const nl = buf.readUInt8(pos); pos += 1;
    const name = buf.subarray(pos, pos + nl).toString('latin1'); pos += nl;
    const np = buf.readUInt16LE(pos); pos += 2; const args = [];
    for (let j = 0; j < np; j++) {
      const sz = buf.readUInt32LE(pos); pos += 4;
      args.push(buf.subarray(pos, pos + sz).toString('latin1')); pos += sz;
    }
    cmds.push({ name, args });
  }
  return cmds;
}
const results = [];
function check(name, ok, extra) { results.push(ok); console.log((ok ? 'PASS' : 'FAIL') + '  ' + name + (extra ? '  ' + extra : '')); }
function done(code) {
  const fails = results.filter((x) => !x).length;
  console.log(`---- ${results.length - fails}/${results.length} passed`);
  process.exit(code !== undefined ? code : (fails ? 1 : 0));
}
setTimeout(() => { console.log('TIMEOUT'); done(2); }, 20000);

const ws = new WebSocket(URL);
ws.binaryType = 'arraybuffer';
let num = 0; const waiters = {};
ws.on('message', (data, isBinary) => {
  if (!isBinary) return;
  const u8 = Buffer.from(data);
  const rnum = u8.readUInt16LE(0);
  const cmds = extract(u8.subarray(4));
  if (waiters[rnum]) { waiters[rnum](cmds); delete waiters[rnum]; }
});
function req(cmd, ...args) {
  return new Promise((res) => {
    num++;
    const payload = compact([{ name: cmd, args: [...args, '0', ''] }]);
    const frame = Buffer.alloc(4 + payload.length);
    frame.writeUInt16LE(num, 0); frame.writeUInt8(2, 2); frame.writeUInt8(0, 3);
    payload.copy(frame, 4);
    waiters[num] = res;
    ws.send(frame);
  });
}
function fmt(cmds) { return cmds.map((c) => c.name + '(' + c.args.map((a) => a.slice(0, 40).replace(/[\x00-\x1F]/g, '.')).join(',') + ')').join(' | '); }

ws.on('open', async () => {
  // 0) NAT control frame — must go out BEFORE any GSC command so the bridge sends 'proxy' first.
  ws.send(JSON.stringify({ peerId: PEER_ID }));
  await new Promise((r) => setTimeout(r, 300));  // let the bridge send the proxy command

  const r1 = await req('login', 'NatPlayer');
  check('login -> enter.dcml', r1.some((c) => c.name === 'LW_show' && c.args[0] && c.args[0].includes('enter.dcml')));
  await req('open', 'enter.dcml', '');
  await req('go', 'try_enter', 'NICK=NatHost', 'TYPE=', 'PASSWORD=', 'LOGGED_IN=', 'HEIGHT=400');

  const r5 = await req('open', 'reg_new_room.dcml', 'VE_TITLE=NatRoom^VE_MAX_PL=5^VE_LEVEL=0^VE_PASSWD=^VE_TYPE=^ASTATE=1');
  check('reg_new_room -> CGAME NatRoom', r5.some((c) => c.name === 'LW_show' && c.args[0] && c.args[0].includes('NatRoom')));

  const r6 = await req('GETTBL', 'ROOMS_V2', '0', '');
  const line = fmt(r6);
  // ROOMS_V2 shows host_addr_int (202050058 == 10.10.11.12 LE); the routing value is the string
  // host_addr, exercised by the join below. Assert the int form matches and 127.0.0.1 is absent.
  // virt ip = 10.A.B.C (A=hi,B=mid,C=lo). int_ip = unpack V (little-endian) = 10 | A<<8 | B<<16 | C<<24
  const A = (PEER_ID >> 16) & 255, B = (PEER_ID >> 8) & 255, C = PEER_ID & 255;
  const expectInt = String(((10 | (A << 8) | (B << 16) | (C << 24)) >>> 0));
  const hasInt = line.includes(expectInt);
  const hasLocal = line.includes('127.0.0.1') || line.includes('16777343') || line.includes('2130706433');
  check(`room host_addr_int == ${expectInt} (${EXPECT_IP}), no 127.0.0.1`, hasInt && !hasLocal, hasLocal ? '(localhost leaked!)' : '');
  // Parse ROOMS_V2: args = [name, rowCount, ...rows], each row = 9 cols
  //   [id, ?, name, host, access, players, ?, host_int, ctlsum]. Find OUR room by host_int.
  const tbl = r6.find((c) => c.name === 'LW_tbl');
  let roomId = null;
  if (tbl) {
    const a = tbl.args.map((s) => s.replace(/\0/g, ''));
    const COLS = 9;
    for (let i = 2; i + COLS <= a.length; i += COLS) {
      if (a[i + 7] === expectInt) { roomId = a[i]; break; }   // host_int column matches our virt ip
    }
  }
  console.log('   room list:', line.slice(0, 160), '\n   my NatRoom id (by host_int) =', roomId);

  // --- second client joins and must receive %CG_IP = 10.10.11.12 (proves joiner routing) ---
  const jw = new WebSocket(URL);
  jw.binaryType = 'arraybuffer';
  let jnum = 0; const jwaiters = {};
  jw.on('message', (data, isBinary) => {
    if (!isBinary) return;
    const u8 = Buffer.from(data); const rn = u8.readUInt16LE(0);
    const cmds = extract(u8.subarray(4));
    if (jwaiters[rn]) { jwaiters[rn](cmds); delete jwaiters[rn]; }
  });
  function jreq(cmd, ...args) {
    return new Promise((res) => {
      jnum++;
      const payload = compact([{ name: cmd, args: [...args, '0', ''] }]);
      const frame = Buffer.alloc(4 + payload.length);
      frame.writeUInt16LE(jnum, 0); frame.writeUInt8(2, 2); frame.writeUInt8(0, 3);
      payload.copy(frame, 4); jwaiters[jnum] = res; jw.send(frame);
    });
  }
  jw.on('open', async () => {
    // joiner is a normal client (no proxy needed — it only reads host_addr)
    await jreq('login', 'JoinPlayer');
    await jreq('open', 'enter.dcml', '');
    await jreq('go', 'try_enter', 'NICK=Joiner', 'TYPE=', 'PASSWORD=', 'LOGGED_IN=', 'HEIGHT=400');
    // real client: GW|open&join_game.dcml&ASTATE=1^VE_RID=<id>  (single ^-joined param arg)
    const jr = await jreq('open', 'join_game.dcml', 'ASTATE=1^VE_RID=' + roomId + '^VE_PASSWD=');
    const raw = jr.map((c) => c.name + ':' + c.args.join('|')).join('\n');
    const gotIp = raw.includes(EXPECT_IP);
    check(`joiner %CG_IP == ${EXPECT_IP} (routes to host relay peer)`, gotIp);
    console.log('   raw join reply:\n' + raw.replace(/[\x00-\x08\x0B\x0C\x0E-\x1F]/g, '.').slice(0, 500));
    done();
  });
  jw.on('error', (e) => { console.log('JOIN WS ERROR', e.message); done(2); });
});
ws.on('error', (e) => { console.log('WS ERROR', e.message); done(2); });
