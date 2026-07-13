#!/usr/bin/env node
// gsc_bridge_smoke.cjs — end-to-end test of the browser GSC path:
//   WS /cossacks-gsc  ->  cos_master.js bridge (GSC-Stream + zlib)  ->  rloger Perl server (34001)
// Builds real ParsedRQ::Compact payloads, runs login -> enter -> try_enter -> create room -> GETTBL,
// decodes replies. Проверяет что родной сервер отвечает через мост как в прямом smoke. Таймаут 20с.
'use strict';
const path = require('path');
const WebSocket = require(path.join('C:', 'cossacks_wasm', 'server', 'node_modules', 'ws'));

const URL = 'ws://127.0.0.1:8790/cossacks-gsc';

// ---- ParsedRQ::Compact codec (matches src/IntExplorer/ParseRQ.cpp) ----
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
  let pos = 0;
  const n = buf.readUInt16LE(pos); pos += 2;
  const cmds = [];
  for (let i = 0; i < n; i++) {
    const nl = buf.readUInt8(pos); pos += 1;
    const name = buf.subarray(pos, pos + nl).toString('latin1'); pos += nl;
    const np = buf.readUInt16LE(pos); pos += 2;
    const args = [];
    for (let j = 0; j < np; j++) {
      const sz = buf.readUInt32LE(pos); pos += 4;
      args.push(buf.subarray(pos, pos + sz).toString('latin1').replace(/[\x00-\x08\x0B\x0C\x0E-\x1F]/g, '.')); pos += sz;
    }
    cmds.push({ name, args });
  }
  return cmds;
}

const results = [];
function check(name, ok) { results.push(ok); console.log((ok ? 'PASS' : 'FAIL') + '  ' + name); }
function done(code) {
  const fails = results.filter((x) => !x).length;
  console.log(`---- ${results.length - fails}/${results.length} passed`);
  process.exit(code !== undefined ? code : (fails ? 1 : 0));
}
setTimeout(() => { console.log('TIMEOUT'); done(2); }, 20000);

const ws = new WebSocket(URL);
ws.binaryType = 'arraybuffer';
let num = 0;
const waiters = {};
ws.on('message', (data, isBinary) => {
  if (!isBinary) return;   // {gsc:'open'}
  const u8 = Buffer.from(data);
  const rnum = u8.readUInt16LE(0);
  const payload = u8.subarray(4);
  const cmds = extract(payload);
  if (waiters[rnum]) { waiters[rnum](cmds); delete waiters[rnum]; }
});
function req(cmd, ...args) {
  return new Promise((res) => {
    num++;
    // append win + key like FilterRQ2Send does (GID, ACCESSKEY)
    const payload = compact([{ name: cmd, args: [...args, '0', ''] }]);
    const frame = Buffer.alloc(4 + payload.length);
    frame.writeUInt16LE(num, 0); frame.writeUInt8(2, 2); frame.writeUInt8(0, 3);
    payload.copy(frame, 4);
    waiters[num] = res;
    ws.send(frame);
  });
}
function fmt(cmds) { return cmds.map((c) => c.name + '(' + c.args.map((a) => a.slice(0, 40)).join(',') + ')').join(' | '); }

ws.on('open', async () => {
  const r1 = await req('login', 'Player');
  console.log('1) login   ->', fmt(r1));
  check('login -> LW_show :GW|open&enter.dcml', r1.some((c) => c.name === 'LW_show' && c.args[0].includes('enter.dcml')));

  const r2 = await req('open', 'enter.dcml', '');
  console.log('2) enter   ->', fmt(r2).slice(0, 80));
  check('enter.dcml -> nick form (LW_show with #edit)', r2.some((c) => c.name === 'LW_show' && c.args[0].includes('#edit')));

  const r3 = await req('go', 'try_enter', 'NICK=WebGuy', 'TYPE=', 'PASSWORD=', 'LOGGED_IN=', 'HEIGHT=400');
  console.log('3) try_ent ->', fmt(r3).slice(0, 90));
  check('try_enter -> ok_enter (LW_key + %PROF)', r3.some((c) => c.name === 'LW_show' && c.args[0].includes('LW_key')));

  const r5 = await req('open', 'reg_new_room.dcml', 'VE_TITLE=WebRoom^VE_MAX_PL=5^VE_LEVEL=0^VE_PASSWD=^VE_TYPE=^ASTATE=1');
  console.log('5) newroom ->', fmt(r5).slice(0, 90));
  check('reg_new_room -> CGAME + %CG_GAMEID', r5.some((c) => c.name === 'LW_show' && c.args[0].includes('CGAME') && c.args[0].includes('WebRoom')));

  const r6 = await req('GETTBL', 'ROOMS_V2', '0', '');
  console.log('6) GETTBL  ->', fmt(r6).slice(0, 120));
  check('GETTBL -> room list with WebRoom', r6.some((c) => c.name === 'LW_tbl' && c.args.some((a) => a.includes('WebRoom'))));

  done();
});
ws.on('error', (e) => { console.log('WS ERROR', e.message); done(2); });
