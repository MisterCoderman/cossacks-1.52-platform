#!/usr/bin/env node
// gsc_ghost_smoke.cjs — verify ghost cleanup: when a host disconnects, its room and online
// presence are removed. Client A creates a room; B confirms it's listed; A drops; B confirms it's
// gone. Proves the server's _close (clean disconnect) + leave_room path clears ghosts.
'use strict';
const path = require('path');
const WebSocket = require(path.join('C:', 'cossacks_wasm', 'server', 'node_modules', 'ws'));
const URL = 'ws://127.0.0.1:8790/cossacks-gsc';

function compact(cmds) {
  const bufs = []; const cnt = Buffer.alloc(2); cnt.writeUInt16LE(cmds.length, 0); bufs.push(cnt);
  for (const c of cmds) {
    const nb = Buffer.from(c.name, 'latin1'); const h = Buffer.alloc(1); h.writeUInt8(nb.length, 0); bufs.push(h, nb);
    const np = Buffer.alloc(2); np.writeUInt16LE(c.args.length, 0); bufs.push(np);
    for (const a of c.args) { const ab = Buffer.from(String(a), 'latin1'); const sz = Buffer.alloc(4); sz.writeUInt32LE(ab.length, 0); bufs.push(sz, ab); }
  }
  return Buffer.concat(bufs);
}
function extract(buf) {
  let pos = 0; const n = buf.readUInt16LE(pos); pos += 2; const cmds = [];
  for (let i = 0; i < n; i++) {
    const nl = buf.readUInt8(pos); pos += 1; const name = buf.subarray(pos, pos + nl).toString('latin1'); pos += nl;
    const np = buf.readUInt16LE(pos); pos += 2; const args = [];
    for (let j = 0; j < np; j++) { const sz = buf.readUInt32LE(pos); pos += 4; args.push(buf.subarray(pos, pos + sz).toString('latin1')); pos += sz; }
    cmds.push({ name, args });
  }
  return cmds;
}
function mkClient() {
  const ws = new WebSocket(URL); ws.binaryType = 'arraybuffer';
  let num = 0; const waiters = {};
  ws.on('message', (data, isBinary) => { if (!isBinary) return; const u8 = Buffer.from(data); const rn = u8.readUInt16LE(0); const cmds = extract(u8.subarray(4)); if (waiters[rn]) { waiters[rn](cmds); delete waiters[rn]; } });
  const api = {
    ws,
    open: () => new Promise((r) => ws.on('open', r)),
    req: (cmd, ...args) => new Promise((res) => { num++; const p = compact([{ name: cmd, args: [...args, '0', ''] }]); const f = Buffer.alloc(4 + p.length); f.writeUInt16LE(num, 0); f.writeUInt8(2, 2); f.writeUInt8(0, 3); p.copy(f, 4); waiters[num] = res; ws.send(f); }),
  };
  return api;
}
const results = [];
function check(name, ok, extra) { results.push(ok); console.log((ok ? 'PASS' : 'FAIL') + '  ' + name + (extra ? '  ' + extra : '')); }
function roomsHaving(cmds, needle) { const t = cmds.find((c) => c.name === 'LW_tbl'); return t ? t.args.some((a) => a.replace(/\0/g, '') === needle) : false; }

(async () => {
  setTimeout(() => { console.log('TIMEOUT'); process.exit(2); }, 20000);
  const A = mkClient(); await A.open();
  A.ws.send(JSON.stringify({ peerId: 0x0B0C0D }));
  await new Promise((r) => setTimeout(r, 250));
  await A.req('login', 'GhostHost');
  await A.req('open', 'enter.dcml', '');
  await A.req('go', 'try_enter', 'NICK=GhostHost', 'TYPE=', 'PASSWORD=', 'LOGGED_IN=', 'HEIGHT=400');
  await A.req('open', 'reg_new_room.dcml', 'VE_TITLE=GhostRoom^VE_MAX_PL=5^VE_LEVEL=0^VE_PASSWD=^VE_TYPE=^ASTATE=1');

  // B observes the room present
  const B = mkClient(); await B.open();
  await B.req('login', 'Watcher');
  await B.req('open', 'enter.dcml', '');
  await B.req('go', 'try_enter', 'NICK=Watcher', 'TYPE=', 'PASSWORD=', 'LOGGED_IN=', 'HEIGHT=400');
  const before = await B.req('GETTBL', 'ROOMS_V2', '0', '');
  check('GhostRoom listed while host connected', roomsHaving(before, 'GhostRoom'));

  // A disconnects cleanly -> server _close must remove the room
  A.ws.close();
  await new Promise((r) => setTimeout(r, 800));
  const after = await B.req('GETTBL', 'ROOMS_V2', '0', '');
  check('GhostRoom GONE after host disconnect (no ghost)', !roomsHaving(after, 'GhostRoom'));

  const fails = results.filter((x) => !x).length;
  console.log(`---- ${results.length - fails}/${results.length} passed`);
  process.exit(fails ? 1 : 0);
})();
