#!/usr/bin/env node
// ircd_smoke.cjs — смоук нового IRC-эмулятора cos_master.js против последовательности,
// которую реально шлёт восстановленный GameSpy Chat SDK (NICK/USER → JOIN×2 → MODE×2 → ...).
// Поднимает отдельный экземпляр сервера на :8795 (юзерский :8790 не трогаем), прогоняет
// проверки, печатает PASS/FAIL по каждой, убивает сервер. Жёсткий таймаут 30с.

'use strict';
const { spawn } = require('child_process');
const path = require('path');

const NODE = process.execPath;
const SRV = path.join(__dirname, '..', 'server', 'cos_master.js');
const PORT = 8795;

const srv = spawn(NODE, [SRV, String(PORT), '8796'], { stdio: 'ignore' });
const results = [];
function check(name, ok) { results.push([name, ok]); console.log((ok ? 'PASS' : 'FAIL') + '  ' + name); }
function finish(code) {
  try { srv.kill(); } catch (e) {}
  const fails = results.filter(([, ok]) => !ok).length;
  console.log(`---- ${results.length - fails}/${results.length} passed`);
  process.exit(code !== undefined ? code : (fails ? 1 : 0));
}
setTimeout(() => { console.log('TIMEOUT'); finish(2); }, 30000);

setTimeout(() => {
  const WebSocket = require(path.join(__dirname, '..', 'server', 'node_modules', 'ws'));
  const ws = new WebSocket(`ws://127.0.0.1:${PORT}/cossacks-irc`);
  let buf = '';
  const lines = [];
  const waiters = [];
  ws.on('message', (d) => {
    buf += d.toString();
    let i;
    while ((i = buf.indexOf('\n')) >= 0) {
      let l = buf.slice(0, i); buf = buf.slice(i + 1);
      if (l.endsWith('\r')) l = l.slice(0, -1);
      if (!l) continue;
      lines.push(l);
      for (let w = waiters.length - 1; w >= 0; w--) {
        if (waiters[w].re.test(l)) { const x = waiters.splice(w, 1)[0]; clearTimeout(x.t); x.res(l); }
      }
    }
  });
  function expect(re, name, ms) {
    return new Promise((res) => {
      const hit = lines.find((l) => re.test(l));
      if (hit) { check(name, true); res(hit); return; }
      const t = setTimeout(() => {
        const idx = waiters.findIndex((w) => w.re === re);
        if (idx >= 0) waiters.splice(idx, 1);
        check(name + '  (нет ответа: ' + re + ')', false); res(null);
      }, ms || 3000);
      waiters.push({ re, t, res: (l) => { check(name, true); res(l); } });
    });
  }
  ws.on('open', async () => {
    ws.send('NICK Player\r\nUSER GSCPROF_1 127.0.0.1 cossacks.local :x\r\n');
    await expect(/ 001 Player /, '001 Welcome после NICK/USER');
    ws.send('JOIN #GSP!cossacks \r\nJOIN #GSP!cossacks!A2V001 \r\n');
    await expect(/JOIN #GSP!cossacks$/, 'JOIN-echo канала 1');
    await expect(/ 353 Player = #GSP!cossacks :/, '353 NAMES канала 1');
    await expect(/ 366 Player #GSP!cossacks :/, '366 End-of-NAMES канала 1');
    await expect(/ 366 Player #GSP!cossacks!A2V001 :/, '366 канала 2');
    ws.send('MODE #GSP!cossacks\r\nMODE #GSP!cossacks!A2V001\r\n');
    const m = await expect(/ 324 Player #GSP!cossacks \+/, '324 RPL_CHANNELMODEIS на MODE-запрос');
    if (m) {
      // формат: ':srv 324 Player #GSP!cossacks +' => после префикса ровно 3 параметра
      const parts = m.replace(/^:\S+ /, '').split(' ');
      check('324 несёт ровно nick+chan+modes (numParams>=3)', parts.length === 4 && parts[0] === '324');
    }
    await expect(/ 324 Player #GSP!cossacks!A2V001 \+/, '324 канала 2');
    ws.send('MODE Player +q\r\n');          // user-mode: сервер должен молча принять (без мусорных ответов)
    ws.send('TOPIC #GSP!cossacks\r\n');
    await expect(/ 332 Player #GSP!cossacks :/, '332 на TOPIC-запрос');
    ws.send('NAMES #GSP!cossacks\r\n');
    await expect(/ 353 Player = #GSP!cossacks :Player/, '353 на явный NAMES');
    ws.send('WHO Player\r\n');
    await expect(/ 315 Player Player :End of \/WHO list\./, '315 на WHO');
    ws.send('PING :123\r\n');
    await expect(/PONG/, 'PONG на PING');
    ws.send('PRIVMSG #GSP!cossacks :hello\r\n');   // единственный участник — эха себе быть не должно
    ws.send('WHOIS Player\r\n');
    await expect(/ 311 Player Player /, '311 WHOIS');
    await expect(/ 318 Player Player :End of \/WHOIS list\./, '318 End-of-WHOIS');

    // 433: второй клиент берёт занятый ник — формат должен быть ':srv 433 * <nick> :msg' (3 параметра)
    const ws2 = new WebSocket(`ws://127.0.0.1:${PORT}/cossacks-irc`);
    ws2.on('open', () => ws2.send('NICK Player\r\n'));
    ws2.on('message', (d) => {
      const l = d.toString().trim();
      if (/ 433 /.test(l)) {
        const parts = l.replace(/^:\S+ /, '').split(' ');
        // ['433','*','Player',':Nickname...'] -> params(с trailing) = 3
        check('433 формат: ровно * + nick + :msg (numParams==3)', parts[0] === '433' && parts[1] === '*' && parts[2] === 'Player' && parts[3].startsWith(':'));
        ws2.close();
        finish();
      }
    });
  });
  ws.on('error', (e) => { console.log('WS ERROR', e.message); finish(2); });
}, 1200);
