#!/usr/bin/env node
// rooms_smoke.cjs — смоук комнатного протокола мастера: hello → host → list → game_start →
// list (скрыта) → join (отказ 'game in progress') → leave → list. Отдельный сервер на :8797.
'use strict';
const { spawn } = require('child_process');
const path = require('path');

const NODE = process.execPath;
const SRV = path.join(__dirname, '..', 'server', 'cos_master.js');
const PORT = 8797;
const srv = spawn(NODE, [SRV, String(PORT), '8798'], { stdio: 'ignore' });
const results = [];
function check(name, ok) { results.push(ok); console.log((ok ? 'PASS' : 'FAIL') + '  ' + name); }
function finish(code) {
  try { srv.kill(); } catch (e) {}
  const fails = results.filter((x) => !x).length;
  console.log(`---- ${results.length - fails}/${results.length} passed`);
  process.exit(code !== undefined ? code : (fails ? 1 : 0));
}
setTimeout(() => { console.log('TIMEOUT'); finish(2); }, 30000);

setTimeout(() => {
  const WebSocket = require(path.join(__dirname, '..', 'server', 'node_modules', 'ws'));
  function client(nick) {
    const ws = new WebSocket(`ws://127.0.0.1:${PORT}/cossacks`);
    const inbox = [];
    const waiters = [];
    ws.on('message', (d, isBinary) => {
      if (isBinary) return;
      let m; try { m = JSON.parse(d.toString()); } catch (e) { return; }
      inbox.push(m);
      for (let i = waiters.length - 1; i >= 0; i--) {
        if (waiters[i].pred(m)) { const w = waiters.splice(i, 1)[0]; clearTimeout(w.t); w.res(m); }
      }
    });
    return {
      ws,
      send: (o) => ws.send(JSON.stringify(o)),
      wait: (pred, ms) => new Promise((res) => {
        const hit = inbox.find(pred);
        if (hit) { res(hit); return; }
        const t = setTimeout(() => res(null), ms || 3000);
        waiters.push({ pred, t, res });
      }),
      open: () => new Promise((res) => ws.on('open', res)),
    };
  }
  (async () => {
    const host = client('host');
    await host.open();
    host.send({ t: 'hello', nick: 'hoster', caps: ['relay'] });
    check('hello_ok хосту', !!(await host.wait((m) => m.t === 'hello_ok')));
    host.send({ t: 'host', name: 'TestRoom', maxPlayers: 4 });
    const hosted = await host.wait((m) => m.t === 'hosted');
    check('hosted', !!hosted);
    const roomId = hosted && hosted.room && hosted.room.id;

    const j = client('joiner');
    await j.open();
    j.send({ t: 'hello', nick: 'joiner', caps: ['relay'] });
    await j.wait((m) => m.t === 'hello_ok');
    j.send({ t: 'list' });
    const l1 = await j.wait((m) => m.t === 'rooms');
    check('комната видна в list до старта', !!(l1 && l1.rooms.some((r) => r.id === roomId)));

    host.send({ t: 'game_start' });
    await new Promise((r) => setTimeout(r, 300));
    j.send({ t: 'list' });
    const l2 = await j.wait((m) => m.t === 'rooms' && m !== l1);
    check('комната СКРЫТА из list после game_start', !!(l2 && !l2.rooms.some((r) => r.id === roomId)));

    j.send({ t: 'join', room: roomId });
    const jr = await j.wait((m) => m.t === 'error' || m.t === 'joined');
    check("поздний join отклонён 'game in progress'", !!(jr && jr.t === 'error' && /progress/.test(jr.msg)));

    host.send({ t: 'leave' });
    await new Promise((r) => setTimeout(r, 300));
    j.send({ t: 'list' });
    const l3 = await j.wait((m) => m.t === 'rooms' && m !== l2 && m !== l1);
    check('после leave хоста комната удалена', !!(l3 && !l3.rooms.some((r) => r.id === roomId)));

    // relay-датаграмма: joiner -> host unicast через 0x02
    const hostHello = await host.wait((m) => false, 1).catch(() => null); // no-op
    finish();
  })().catch((e) => { console.log('ERR', e.message); finish(2); });
}, 1200);
