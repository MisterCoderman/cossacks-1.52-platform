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
const { LanLink } = require('./lanlink');

// FIXED local port. The game's saves/options live in IndexedDB, which is scoped to the page ORIGIN.
// A random port (listen(0)) changed the origin on every launch, so every restart started from an
// empty store — settings and progress were lost. A fixed port keeps the origin stable so saves
// persist across restarts. Single-instance lock below prevents a second copy fighting for the port.
const GAME_PORT = 34011;

// Keep the game FULLY ALIVE while minimized/occluded. Chromium throttles rAF/timers of hidden
// windows and marks occluded ones so their GPU work is dropped — 10 minutes minimized used to come
// back as a dead WebGL context (white screen), and a minimized host would stall the lockstep for
// the other player. These switches (plus backgroundThrottling:false on the window) disable all of
// that: the render loop and networking keep running at full rate in the background.
app.commandLine.appendSwitch('disable-renderer-backgrounding');
app.commandLine.appendSwitch('disable-background-timer-throttling');
app.commandLine.appendSwitch('disable-backgrounding-occluded-windows');
if (process.platform === 'win32') app.commandLine.appendSwitch('disable-features', 'CalculateNativeWinOcclusion');

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
      // Cross-origin isolation so the renderer can use SharedArrayBuffer — the preload's worker+SAB
      // path decouples native UDP from the main thread (fixes the direct-IP/LAN ~1-FPS lockstep
      // freeze; the relay/server path was never affected). The game is fully same-origin, so COEP
      // require-corp does not block its own assets; CORP same-origin on every response is explicit.
      res.setHeader('Cross-Origin-Opener-Policy', 'same-origin');
      res.setHeader('Cross-Origin-Embedder-Policy', 'require-corp');
      res.setHeader('Cross-Origin-Resource-Policy', 'same-origin');
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
    srv.listen(GAME_PORT, '127.0.0.1', () => resolve({ srv, port: srv.address().port }));
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
    const { srv, port } = await startServer();
    // The built-in socket service: local WS relay for the game (same wire protocol and behaviour as
    // the public relay server, which is the one transport proven smooth) + reliable TCP links
    // between the services of LAN/direct-IP peers. Guarded: if it fails, single-player still runs.
    try {
      const lan = new LanLink();
      lan.attach(srv);
      lan.start();
    } catch (e) { try { console.error('[lanlink]', e && e.message); } catch (_) {} }
    win = new BrowserWindow({
      width: 1280, height: 800,
      autoHideMenuBar: true,
      backgroundColor: '#000000',
      icon: path.join(__dirname, 'icon.png'),
      webPreferences: {
        preload: path.join(__dirname, 'preload.js'),
        contextIsolation: true,
        nodeIntegration: false,
        // REQUIRED: the preload uses Node's ipcRenderer to expose window.cosElectron (quit + the
        // overlay bar IPC). Electron 20+ sandboxes renderers by default, which would block the
        // preload's Node access so cosElectron never appears — then the app silently behaves like
        // the web build. Safe here: it's a local single-purpose game shell.
        sandbox: false,
        // Never throttle when hidden/minimized: the render loop must keep running (a throttled
        // minimized window comes back with a dead WebGL context = white screen) and a minimized
        // host must keep serving the lockstep for the other player.
        backgroundThrottling: false
      }
    });
    // Load the language chooser (index.html), same as the web version, so the player picks a
    // language; it then navigates to dmcr.html?lang=... The old direct dmcr.html load forced English.
    win.loadURL(`http://127.0.0.1:${port}/index.html`);

    // Window chrome model, identical on Windows/Linux/macOS:
    //   * Maximize (button or title double-click) -> TRUE borderless fullscreen over the taskbar.
    //     The window is first unmaximized so leaving fullscreen returns to a NORMAL window (this
    //     also kills the maximize->fullscreen->maximize feedback loop the old code had).
    //   * In fullscreen the OS chrome is gone; the preload shows a slim top overlay bar when the
    //     cursor touches the top edge (minimize / to-window / close). Pure pointer control.
    //   * 'cos-bar' IPC carries the overlay's button presses.
    win.on('maximize', () => {
      if (win.isFullScreen()) return;
      try { win.unmaximize(); } catch (e) {}
      try { win.setFullScreen(true); } catch (e) {}
    });
    win.on('enter-full-screen', () => { try { win.webContents.send('cos-fs', true); } catch (e) {} });
    win.on('leave-full-screen', () => { try { win.webContents.send('cos-fs', false); } catch (e) {} });
    // Esc arms the overlay bar. The game holds pointer lock during play and re-locks off the Esc
    // gesture itself, so the preload can't rely on lock state — it needs an explicit signal. Esc is
    // NOT consumed: it still opens the in-game menu as always.
    win.webContents.on('before-input-event', (ev, input) => {
      if (input.type === 'keyDown' && input.key === 'Escape' && win.isFullScreen()) {
        try { win.webContents.send('cos-esc'); } catch (e) {}
      }
    });
    // A fullscreen game must not stay plastered over every other window on app switch: on focus
    // loss minimize it (standard fullscreen-game behaviour). Alt-Tab back restores fullscreen.
    // Not on macOS - there fullscreen lives in its own Space and this would fight the OS.
    if (process.platform !== 'darwin') {
      win.on('blur', () => {
        if (win.isFullScreen() && !win.isMinimized()) { try { win.minimize(); } catch (e) {} }
      });
    }
    ipcMain.on('cos-bar', (ev, cmd) => {
      if (!win) return;
      if (cmd === 'min') {
        // macOS cannot minimize a fullscreen window - drop to windowed first, then minimize.
        if (process.platform === 'darwin' && win.isFullScreen()) {
          win.once('leave-full-screen', () => { try { win.minimize(); } catch (e) {} });
          try { win.setFullScreen(false); } catch (e) {}
        } else { try { win.minimize(); } catch (e) {} }
      } else if (cmd === 'windowed') { try { win.setFullScreen(false); } catch (e) {} }
      else if (cmd === 'close') { try { win.close(); } catch (e) {} }
    });

    win.on('closed', () => { win = null; app.quit(); });
  });

  app.on('window-all-closed', () => app.quit());
}
