#!/usr/bin/env node
// stats_smoke.cjs — смоук репортинга матчей: hello → report endgame/stats → GET /stats.
// Отдельный сервер на :8799, файл статистики удаляется до/после прогона.
'use strict';
const { spawn } = require('child_process');
const path = require('path');
const fs = require('fs');
const http = require('http');

const NODE = process.execPath;
const SRV = path.join(__dirname, '..', 'server', 'cos_master.js');
const STATS_FILE = path.join(__dirname, '..', 'server', 'cos_stats.json');
const PORT = 8799;

try { fs.unlinkSync(STATS_FILE); } catch (e) {}
const srv = spawn(NODE, [SRV, String(PORT), '8800'], { stdio: 'ignore' });
const results = [];
function check(name, ok) { results.push(ok); console.log((ok ? 'PASS' : 'FAIL') + '  ' + name); }
function finish(code) {
  try { srv.kill(); } catch (e) {}
  setTimeout(() => { try { fs.unlinkSync(STATS_FILE); } catch (e) {} }, 200);
  const fails = results.filter((x) => !x).length;
  console.log(`---- ${results.length - fails}/${results.length} passed`);
  setTimeout(() => process.exit(code !== undefined ? code : (fails ? 1 : 0)), 400);
}
setTimeout(() => { console.log('TIMEOUT'); finish(2); }, 30000);

function getJson(pathname) {
  return new Promise((res) => {
    http.get({ host: '127.0.0.1', port: PORT, path: pathname }, (r) => {
      let b = '';
      r.on('data', (c) => (b += c));
      r.on('end', () => { try { res(JSON.parse(b)); } catch (e) { res(null); } });
    }).on('error', () => res(null));
  });
}

setTimeout(() => {
  const WebSocket = require(path.join(__dirname, '..', 'server', 'node_modules', 'ws'));
  const ws = new WebSocket(`ws://127.0.0.1:${PORT}/cossacks`);
  ws.on('open', async () => {
    ws.send(JSON.stringify({ t: 'hello', nick: 'reporter', caps: ['relay'] }));
    await new Promise((r) => setTimeout(r, 300));

    // endgame: playerId=7, state=1 (LE i32 ×2) -> победа
    const eg = Buffer.alloc(8); eg.writeInt32LE(7, 0); eg.writeInt32LE(1, 4);
    ws.send(JSON.stringify({ t: 'report', kind: 'endgame', game: 'g123', data: eg.toString('hex') }));

    // stats: time=600 u32 + players=2 u8 + OnePlayerReport packed(1) 37 байт
    const st = Buffer.alloc(5 + 37);
    st.writeUInt32LE(600, 0); st[4] = 2;
    st.writeUInt32LE(777, 5);      // Profile
    st[9] = 3;                      // State
    st.writeUInt16LE(1500, 10);     // Score
    st.writeUInt16LE(42, 12);       // Population
    ws.send(JSON.stringify({ t: 'report', kind: 'stats', game: 'g123', data: st.toString('hex') }));

    // мусор не должен ничего сломать/записать
    ws.send(JSON.stringify({ t: 'report', kind: 'endgame', game: 'bad', data: 'zzzz' }));

    await new Promise((r) => setTimeout(r, 1600));   // ждём debounce-сохранение
    const s = await getJson('/stats');
    check('/stats отвечает', !!s);
    const m = s && s.matches ? s.matches : [];
    const eg1 = m.find((x) => x.game === 'g123' && x.playerId === 7);
    check('endgame записан (playerId=7 state=1)', !!(eg1 && eg1.state === 1 && eg1.nick === 'reporter'));
    check('победа засчитана reporter', !!(s && s.wins && s.wins.reporter === 1));
    const st1 = m.find((x) => x.kind === 'stats');
    check('stats записан и распарсен (score=1500)', !!(st1 && st1.report && st1.report.score === 1500 && st1.report.profile === 777));
    check('мусорный hex отброшен', !m.some((x) => x.game === 'bad'));
    const persisted = fs.existsSync(STATS_FILE);
    check('cos_stats.json персистится', persisted);
    finish();
  });
  ws.on('error', (e) => { console.log('WS ERR', e.message); finish(2); });
}, 1200);
