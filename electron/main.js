// Cossacks: Back to War 1.52 — Electron wrapper (native UDP multiplayer, no server needed).
//
// ONE wasm build powers both web and Electron. Here the preload bridge exposes real UDP sockets
// (Node dgram) so CommCore's LAN broadcast discovery + direct-IP join work with zero servers —
// original 2001 behaviour. The web tab (no bridge) falls back to the WebSocket relay.
//
// Serves the SAME web/ folder over a tiny localhost HTTP server (so the game's synchronous XHR
// data loader and relay.txt work identically to the website). Update the game = replace web/;
// no Electron rebuild.

const { app, BrowserWindow, ipcMain } = require('electron');
const http = require('http');
const path = require('path');
const fs = require('fs');

// FIXED local port. The game's saves/options live in IndexedDB, which is scoped to the page ORIGIN.
// A random port (listen(0)) changed the origin on every launch, so every restart started from an
// empty store — settings and progress were lost. A fixed port keeps the origin stable so saves
// persist across restarts. Single-instance lock below prevents a second copy fighting for the port.
const GAME_PORT = 34011;

const WEB_DIR = path.join(__dirname, '..', 'web');
let win = null;

const MIME = {
  '.html': 'text/html', '.js': 'text/javascript', '.wasm': 'application/wasm',
  '.data': 'application/octet-stream', '.txt': 'text/plain', '.png': 'image/png',
  '.json': 'application/json', '.css': 'text/css'
};

// The multiplayer server address (relay.json) is read ONLY from a file NEXT TO THE EXECUTABLE — a
// deploy/operator artifact the player drops beside the game, never bundled inside the app. There is
// NO fallback to a packaged relay.json (there is none in the package). If the file is absent, the
// internet lobby (GSC) and relay transport are simply unconfigured; native LAN discovery and
// direct-IP play still work (those are pure UDP and need no server). "Next to the exe" is resolved
// per-platform so it means the folder the user actually sees:
//   - Windows portable  -> PORTABLE_EXECUTABLE_DIR (the exe's real folder; the app itself unpacks to %TEMP%)
//   - Linux AppImage    -> the folder containing the .AppImage (APPIMAGE), else its launch cwd (OWD)
//   - installed / .app / dev -> the directory of the running executable
function exeDir() {
  if (process.env.PORTABLE_EXECUTABLE_DIR) return process.env.PORTABLE_EXECUTABLE_DIR;   // win portable
  if (process.env.APPIMAGE) return path.dirname(process.env.APPIMAGE);                    // linux AppImage
  if (process.env.OWD) return process.env.OWD;                                            // AppImage original working dir
  return path.dirname(app.getPath('exe'));
}
function externalRelayPath() { return path.join(exeDir(), 'relay.json'); }

function startServer() {
  return new Promise((resolve) => {
    const srv = http.createServer((req, res) => {
      let p = decodeURIComponent(req.url.split('?')[0]);
      if (p === '/') p = '/dmcr.html';
      // relay.json is served EXCLUSIVELY from beside the exe, never from the packaged web/ — so the
      // same synchronous XHR the browser build does (cos_net/cos_gsc/cos_chat GET relay.json) picks
      // up the operator's external config unchanged. Absent file => 404 (no packaged fallback).
      if (p === '/relay.json') {
        fs.readFile(externalRelayPath(), (err, buf) => {
          if (err) { res.writeHead(404, { 'content-type': 'application/json' }); res.end('{}'); return; }
          res.writeHead(200, { 'content-type': 'application/json' }); res.end(buf);
        });
        return;
      }
      const file = path.join(WEB_DIR, path.normalize(p).replace(/^(\.\.[/\\])+/, ''));
      fs.readFile(file, (err, buf) => {
        if (err) { res.writeHead(404); res.end('not found'); return; }
        res.writeHead(200, { 'content-type': MIME[path.extname(file).toLowerCase()] || 'application/octet-stream' });
        res.end(buf);
      });
    });
    srv.listen(GAME_PORT, '127.0.0.1', () => resolve(srv.address().port));
  });
}

// Single-instance: a second launch just focuses the running window instead of fighting for the
// fixed port (which would break, and would fork the save store).
if (!app.requestSingleInstanceLock()) {
  app.quit();
} else {
  app.on('second-instance', () => {
    if (win) { if (win.isMinimized()) win.restore(); win.focus(); }
  });

  // The engine's Exit menu -> window.cosOnExit() -> window.cosElectron.quit() sends this.
  ipcMain.on('cos-quit', () => app.quit());

  app.whenReady().then(async () => {
    const port = await startServer();
    win = new BrowserWindow({
      width: 1280, height: 800,
      autoHideMenuBar: true,
      backgroundColor: '#000000',
      icon: path.join(__dirname, 'icon.png'),
      webPreferences: {
        preload: path.join(__dirname, 'preload.js'),
        contextIsolation: true,
        nodeIntegration: false,
        // REQUIRED: the preload uses Node's dgram/ipcRenderer to expose window.cosElectron (real UDP
        // + quit). Electron 20+ sandboxes renderers by default, which blocks require('dgram') so the
        // preload throws and cosElectron never appears — then the app silently behaves like the web
        // build (fullscreen button shows, Exit shows the restart card, no native LAN/UDP). Disabling
        // the sandbox lets the preload load. Safe here: it's a local single-purpose game shell.
        sandbox: false
      }
    });
    // Load the language chooser (index.html), same as the web version, so the player picks a
    // language; it then navigates to dmcr.html?lang=... The old direct dmcr.html load forced English.
    win.loadURL(`http://127.0.0.1:${port}/index.html`);
    win.on('closed', () => { win = null; app.quit(); });
  });

  app.on('window-all-closed', () => app.quit());
}
