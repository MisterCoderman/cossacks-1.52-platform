#!/usr/bin/env node
// gsc_debug_logger.cjs — крошечный приёмник отладочных логов GSC-сессии.
//
// Страница игры (web/dmcr.html, дебаг-сниппет COS_DBG) батчами шлёт сюда POST /log с текстовыми
// строками; всё дописывается в build/logs/gsc_debug.log с серверным таймстампом. Отдельный порт
// (8794), чтобы НЕ трогать работающий мастер-сервер юзера на 8790.
//
// Запуск:  node tools/gsc_debug_logger.cjs   (Ctrl+C чтобы остановить)
// Самовыход через 4 часа, чтобы не висеть вечно.

'use strict';
const http = require('http');
const fs = require('fs');
const path = require('path');

const PORT = 8794;
const LOG = path.join(__dirname, '..', 'build', 'logs', 'gsc_debug.log');

fs.mkdirSync(path.dirname(LOG), { recursive: true });
fs.appendFileSync(LOG, `\n===== logger started ${new Date().toISOString()} =====\n`);

const srv = http.createServer((req, res) => {
  res.setHeader('Access-Control-Allow-Origin', '*');
  res.setHeader('Access-Control-Allow-Methods', 'POST, GET, OPTIONS');
  res.setHeader('Access-Control-Allow-Headers', '*');
  if (req.method === 'OPTIONS') { res.writeHead(204); res.end(); return; }
  if (req.method === 'POST' && req.url.startsWith('/log')) {
    let body = '';
    req.on('data', (c) => { body += c; if (body.length > 1 << 20) req.destroy(); });
    req.on('end', () => {
      const stamp = new Date().toISOString().slice(11, 23);
      const out = body.split('\n').filter(Boolean).map((l) => `${stamp} ${l}`).join('\n') + '\n';
      fs.appendFile(LOG, out, () => {});
      res.writeHead(204); res.end();
    });
    return;
  }
  if (req.url === '/status') {
    res.writeHead(200, { 'content-type': 'text/plain' });
    res.end('gsc debug logger ok\n');
    return;
  }
  res.writeHead(404); res.end();
});

srv.listen(PORT, '127.0.0.1', () => console.log(`gsc debug logger on :${PORT} -> ${LOG}`));
setTimeout(() => { console.log('logger auto-exit (4h)'); process.exit(0); }, 4 * 3600 * 1000);
