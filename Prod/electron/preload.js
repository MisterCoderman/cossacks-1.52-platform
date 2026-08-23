// preload.js — the desktop shell bridge. Deliberately TINY and it must NEVER throw at load (a
// preload that throws means window.cosElectron never appears and the shell degrades to web mode).
//
// NETWORKING IS NOT HERE ANY MORE — and that is the point. Every in-renderer transport (dgram,
// worker+SAB rings, TCP tunnels) stalled or hung between two PCs, because the game's lockstep
// busy-waits on this very thread. The one proven-smooth path is the game's own WebSocket relay
// mode, so the app now ships a relay SERVICE in the main process (lanlink.js). cosElectron exposes
// NO udpSocket — cos_net.js therefore picks its stock relay mode (mode 1) and connects to
// ws://127.0.0.1:<gamePort>/cossacks, the built-in service, exactly like the browser build talks to
// the public server. The renderer code path is byte-identical to the proven one.
//
// window.cosElectron still exists (without udpSocket) so the page keeps its desktop behaviours:
// the Exit menu quits the app instead of showing the browser restart card.

const { contextBridge, ipcRenderer } = require('electron');


let cosFsState = false;
ipcRenderer.on('cos-fs', (ev, v) => { cosFsState = !!v; });

contextBridge.exposeInMainWorld('cosElectron', {
  // The engine's Exit menu -> window.cosOnExit() -> window.cosElectron.quit() (main.js handles it).
  quit() { ipcRenderer.send('cos-quit'); },
  isFullscreen() { return cosFsState; }
});

// ---------------------------------------------------------------------------------------------
// Fullscreen overlay system bar — identical on Windows / Linux / macOS.
// The game owns the mouse (pointer lock) and draws its own UI along the top edge, so the bar NEVER
// self-reveals during play. Pressing Esc ARMS it (main.js sends 'cos-esc'): the pointer is released
// and the game's re-lock is suppressed by a hook injected into the PAGE world (the game re-locks
// off the Esc gesture itself, so just exiting the lock is not enough — context isolation means the
// suppressor must live in the page world, installed via a script tag and driven by DOM events).
// While armed, cursor-to-top reveals the bar, cursor-away hides it; clicking back into the game
// disarms everything and the game re-locks on its own. Esc still opens the in-game menu as always.
// Buttons: minimize / to-window / close, drawn as plain line glyphs so they render the same
// everywhere. "To window" returns to a normal resizable window with the native title bar; the
// title bar's maximize button (or a double-click) goes back to fullscreen (main.js maps maximize
// -> setFullScreen). Everything is guarded — this block must never throw at load.
try {
  const BAR_H = 32, BTN_W = 47, REVEAL_BAND = 2;
  let fs = false, armed = false, pageHooked = false, barEl = null, visible = false;

  function injectPageHook() {
    if (pageHooked) return;
    pageHooked = true;
    try {
      const s = document.createElement('script');
      s.textContent = '(' + function () {
        var suppress = false;
        var orig = Element.prototype.requestPointerLock;
        Element.prototype.requestPointerLock = function () { if (suppress) return undefined; return orig.apply(this, arguments); };
        document.addEventListener('cos-lock-suppress', function () { suppress = true; try { document.exitPointerLock(); } catch (e) {} });
        document.addEventListener('cos-lock-allow', function () { suppress = false; });
      } + ')();';
      (document.head || document.documentElement).appendChild(s);
      s.remove();
    } catch (e) {}
  }
  function arm() {
    injectPageHook();
    armed = true;
    try { document.dispatchEvent(new CustomEvent('cos-lock-suppress')); } catch (e) {}
  }
  function disarm() {
    if (!armed && !visible) return;
    armed = false;
    hideBar();
    try { document.dispatchEvent(new CustomEvent('cos-lock-allow')); } catch (e) {}
  }

  ipcRenderer.on('cos-esc', () => { if (fs) arm(); });
  ipcRenderer.on('cos-fs', (ev, v) => { fs = !!v; if (!fs) disarm(); });

  function glyph(kind) {
    const s = 'stroke="currentColor" stroke-width="1"';
    if (kind === 'min') return '<svg width="11" height="11" viewBox="0 0 11 11"><line x1="0" y1="8.5" x2="11" y2="8.5" ' + s + '/></svg>';
    if (kind === 'win') return '<svg width="11" height="11" viewBox="0 0 11 11"><rect x="0.5" y="0.5" width="10" height="10" fill="none" ' + s + '/></svg>';
    return '<svg width="11" height="11" viewBox="0 0 11 11"><line x1="0" y1="0" x2="11" y2="11" ' + s + '/><line x1="0" y1="11" x2="11" y2="0" ' + s + '/></svg>';
  }

  function mkBtn(kind, cmd, right, isClose) {
    const b = document.createElement('div');
    b.style.cssText = 'position:absolute;top:0;right:' + right + 'px;width:' + BTN_W + 'px;height:' + BAR_H + 'px;' +
      'display:flex;align-items:center;justify-content:center;color:#e4e4e6;cursor:default;';
    b.innerHTML = glyph(kind);
    b.addEventListener('mouseenter', () => { b.style.background = isClose ? '#e81123' : '#3a3a3e'; if (isClose) b.style.color = '#fff'; });
    b.addEventListener('mouseleave', () => { b.style.background = 'transparent'; b.style.color = '#e4e4e6'; });
    const eat = (ev) => { ev.stopPropagation(); ev.preventDefault(); };
    b.addEventListener('mousedown', eat);
    b.addEventListener('mouseup', (ev) => { eat(ev); if (cmd !== 'close') disarm(); ipcRenderer.send('cos-bar', cmd); });
    return b;
  }

  function ensureBar() {
    if (barEl) return barEl;
    barEl = document.createElement('div');
    barEl.id = 'cos-sysbar';
    barEl.style.cssText = 'position:fixed;top:0;left:0;right:0;height:' + BAR_H + 'px;z-index:2147483647;' +
      'display:none;background:rgba(28,28,30,0.92);user-select:none;';
    barEl.appendChild(mkBtn('min', 'min', 2 * BTN_W, false));
    barEl.appendChild(mkBtn('win', 'windowed', BTN_W, false));
    barEl.appendChild(mkBtn('close', 'close', 0, true));
    (document.body || document.documentElement).appendChild(barEl);
    return barEl;
  }

  function showBar() {
    if (visible || !fs) return;
    ensureBar().style.display = 'block';
    visible = true;
  }
  function hideBar() {
    if (!visible || !barEl) return;
    barEl.style.display = 'none';
    visible = false;
  }

  window.addEventListener('DOMContentLoaded', () => {
    // pointer captured by the game -> bar is fully disarmed (safety net)
    document.addEventListener('pointerlockchange', () => { if (document.pointerLockElement) disarm(); });
    // a click that is NOT on the bar = back into the game: disarm, let the game re-lock itself
    document.addEventListener('mousedown', (ev) => {
      if (armed && (!barEl || !barEl.contains(ev.target))) disarm();
    }, true);
    document.addEventListener('mousemove', (ev) => {
      if (!fs || !armed) return;                     // only in fullscreen and only after Esc
      if (document.pointerLockElement) return;
      const y = ev.clientY;
      if (y <= (visible ? BAR_H : REVEAL_BAND)) showBar();
      else if (y > BAR_H) hideBar();                 // hidden but still armed until a game click
    }, true);
  });
} catch (e) { try { console.warn('[cos-sysbar]', e && e.message); } catch (_) {} }
