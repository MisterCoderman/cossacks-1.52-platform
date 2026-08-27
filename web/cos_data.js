// Lazy game-data backend for the Cossacks WASM port.
//
// The 240 MB archive is unpacked into per-language folders (data/en, data/ru, chosen via
// ?lang=). Files are pulled on demand. Crucially, the per-file loader uses a *synchronous*
// XMLHttpRequest rather than async fetch()+ASYNCIFY: the engine opens data files from deep
// inside C++ static initialisers (e.g. the global `GConstant` reading Const.lst) and from
// ordinary blocking init code. Suspending those through ASYNCIFY corrupts/replays
// __wasm_call_ctors (files were being loaded 4x and then hung). A synchronous XHR keeps the
// whole file path ASYNCIFY-free; ASYNCIFY then only ever unwinds the cooperative
// FlipPages()->emscripten_sleep(0) yield in the game loop, which is what it is meant for.
//
//   preRun            -> pick language, load <base>/manifest.txt into MEMFS (/manifest.txt)
//                        + a Set for existence checks; blocks main() until ready.
//   cos_data_init()   -> no-op (manifest already loaded).
//   cos_fetch_file()  -> ensure /game/<canon> exists (sync XHR if needed); 0 ok, -1 missing.
// <canon> is UPPER-cased, forward-slash, no leading slash (matches the unpacked tree).

addToLibrary({
  $COS_DATA_STATE__postset: 'COS_DATA_STATE.registerPreRun();',
  $COS_DATA_STATE: {
    base: 'data/en',
    have: null,
    registerPreRun: function () {
      if (typeof Module === 'undefined') return;
      // Hide the browser/OS cursor over the canvas: the game draws its OWN cursor (menu + in-game),
      // so the native pointer would show as a second cursor. !important overrides the inline
      // "cursor: default" that SDL_ShowCursor(SDL_ENABLE) sets, so this holds in every game state.
      try {
        if (typeof document !== 'undefined' && !window.__cosCursorHidden) {
          window.__cosCursorHidden = 1;
          var st = document.createElement('style');
          st.textContent = 'canvas, #canvas { cursor: none !important; }';
          (document.head || document.documentElement).appendChild(st);
        }
      } catch (x) {}
      // capture uncaught JS/WASM exceptions into stdout so they show in the output textarea
      try {
        if (typeof window !== 'undefined' && !window.__cosErrHook) {
          window.__cosErrHook = 1;
          window.addEventListener('error', function (e) {
            var s = (e && e.error && e.error.stack) || (e && e.message) || String(e);
            try { out('[JSERR] ' + s); } catch (x) { console.error('[JSERR]', s); }
          });
          window.addEventListener('unhandledrejection', function (e) {
            var r = e && e.reason; var s = (r && r.stack) || (r && r.message) || String(r);
            try { out('[JSREJ] ' + s); } catch (x) { console.error('[JSREJ]', s); }
          });
        }
      } catch (x) {}
      Module['preRun'] = Module['preRun'] || [];
      Module['preRun'].push(function () {
        try {
          var l = new URLSearchParams(location.search).get('lang');
          if (l === 'ru') COS_DATA_STATE.base = 'data/ru';
        } catch (e) {}
        try { FS.mkdir('/game'); } catch (e) {}
        try { FS.mkdir('/local'); } catch (e) {}
        // Persistent storage: mount IDBFS on /local (saves/options live here) and load whatever was
        // persisted before letting main() run. Writes are flushed back by COS_DATA_STATE.persist().
        try {
          FS.mount(IDBFS, {}, '/local');
          addRunDependency('cos-idbfs');
          FS.syncfs(true, function (err) {
            if (err) console.warn('[cos_data] IDBFS load error:', err);
            else out('[cos_data] persistent /local loaded from IndexedDB');
            removeRunDependency('cos-idbfs');
          });
        } catch (e) { console.warn('[cos_data] IDBFS mount failed (saves not persistent):', e); }
        addRunDependency('cos-manifest');
        var done = function (txt) {
          try { FS.writeFile('/manifest.txt', txt); } catch (e) {}
          COS_DATA_STATE.have = new Set(
            txt.split(/\r?\n/).map(function (s) { return s.trim(); }).filter(Boolean));
          out('[cos_data] language=' + COS_DATA_STATE.base + ' manifest=' + COS_DATA_STATE.have.size + ' files');
          removeRunDependency('cos-manifest');
        };
        fetch(COS_DATA_STATE.base + '/manifest.txt')
          .then(function (r) { return r.ok ? r.text() : ''; })
          .then(done)
          .catch(function () { done(''); });
        // Per-tree LOCAL manifests: which files REALLY sit in each language dir. Lets the fetch
        // layer pick the correct base directly — shared assets (maps/tracks/sounds live only in
        // data/en) used to cost a 404 probe against data/<lang> first on every fetch.
        var loadLocal = function (base, key) {
          addRunDependency('cos-mlocal-' + key);
          fetch(base + '/manifest_local.txt')
            .then(function (r) { return r.ok ? r.text() : null; })
            .then(function (t) {
              if (t !== null) COS_DATA_STATE[key] = new Set(
                t.split(/\r?\n/).map(function (s) { return s.trim(); }).filter(Boolean));
              removeRunDependency('cos-mlocal-' + key);
            })
            .catch(function () { removeRunDependency('cos-mlocal-' + key); });
        };
        loadLocal(COS_DATA_STATE.base, 'localHave');
        if (COS_DATA_STATE.base !== 'data/en') loadLocal('data/en', 'enHave');
        else COS_DATA_STATE.enHave = null; // same tree; localHave covers it
      });

      // ---- persistent-save flushing + WebDAV sync scaffold ----------------------------------
      // Flush /local (IDBFS) -> IndexedDB. Overlap-guarded: concurrent FS.syncfs calls are a known
      // IDBFS corruption source, so while one flush runs we only mark 'dirty' and rerun after.
      COS_DATA_STATE._syncing = false;
      COS_DATA_STATE._dirty = false;
      COS_DATA_STATE.persist = function (cb) {
        if (COS_DATA_STATE._syncing) { COS_DATA_STATE._dirty = true; if (cb) cb(null); return; }
        COS_DATA_STATE._syncing = true;
        try {
          FS.syncfs(false, function (e) {
            COS_DATA_STATE._syncing = false;
            if (e) console.warn('[cos_data] persist error', e);
            if (cb) cb(e);
            if (COS_DATA_STATE._dirty) { COS_DATA_STATE._dirty = false; COS_DATA_STATE.persist(); }
          });
        } catch (e) { COS_DATA_STATE._syncing = false; console.warn('[cos_data] persist failed', e); }
      };
      // Debounced "something was just written to /local" trigger, called from the C write hooks
      // (Gclose / gCloseFile / WritePrivateProfileStringA). 400 ms after the LAST write in a burst
      // the data is durably in IndexedDB — no more waiting for the 15 s timer that a quick tab
      // reload used to beat.
      COS_DATA_STATE.persistSoon = function () {
        if (COS_DATA_STATE._t) clearTimeout(COS_DATA_STATE._t);
        COS_DATA_STATE._t = setTimeout(function () { COS_DATA_STATE._t = 0; COS_DATA_STATE.persist(); }, 400);
      };
      try {
        setInterval(function () { COS_DATA_STATE.persist(); }, 15000);
        document.addEventListener('visibilitychange', function () { if (document.hidden) COS_DATA_STATE.persist(); });
        addEventListener('beforeunload', function () { COS_DATA_STATE.persist(); });
      } catch (e) {}

      // WebDAV save-sync SCAFFOLD (not wired to real transfers yet): store creds, then push/pull the
      // whole /local save tree to/from a WebDAV server. Configure from the console (or a future
      // in-game menu): cosWebDAV.config('https://host/dav/cossacks','user','pass'); cosWebDAV.sync();
      COS_DATA_STATE.webdav = (function () {
        var K = 'cos_webdav';
        var cfg = {}; try { cfg = JSON.parse(localStorage.getItem(K) || '{}'); } catch (e) {}
        return {
          config: function (url, user, pass) {
            cfg = { url: url, user: user, pass: pass };
            try { localStorage.setItem(K, JSON.stringify(cfg)); } catch (e) {}
            console.log('[webdav] configured ->', url);
          },
          get: function () { return cfg; },
          // TODO(real): for each file in /local, PUT <url>/<name> with Basic auth; GET/PROPFIND to pull
          // newer remote saves. For now this is a stub that just reports what it WOULD sync.
          sync: function () {
            if (!cfg.url) { console.warn('[webdav] not configured — cosWebDAV.config(url,user,pass) first'); return; }
            COS_DATA_STATE.persist();
            var files = []; try { files = FS.readdir('/local').filter(function (n) { return n !== '.' && n !== '..'; }); } catch (e) {}
            console.log('[webdav] sync STUB: would sync', files.length, 'file(s) in /local <->', cfg.url, files);
          }
        };
      })();
      try { window.cosPersist = function () { COS_DATA_STATE.persist(); }; window.cosWebDAV = COS_DATA_STATE.webdav; } catch (e) {}
    }
  },

  cos_data_init: function () { return 0; },   // manifest is loaded in preRun; nothing to do

  // C hook: "a /local file was just written" -> debounce-flush IDBFS to IndexedDB (~400 ms).
  cos_persist_soon__deps: ['$COS_DATA_STATE'],
  cos_persist_soon: function () { COS_DATA_STATE.persistSoon(); },

  cos_fetch_file__deps: ['$COS_DATA_STATE'],
  cos_fetch_file: function (canonPtr) {
    var canon = UTF8ToString(canonPtr);
    var memfs = '/game/' + canon;
    if (FS.analyzePath(memfs).exists) return 0;                                  // already in MEMFS
    if (COS_DATA_STATE.have && !COS_DATA_STATE.have.has(canon)) return -1;       // known-absent -> no request
    // Try the selected language dir first, then fall back to data/en. Language-neutral shared
    // assets — mission .m3d maps (from the .rar archives), music tracks and SFX — are stored only
    // under en to avoid duplicating hundreds of MB; RU (and any other lang) reaches them here.
    // Per-tree local manifests (when loaded) tell which base REALLY has the file, so no 404 probes.
    var bases = [COS_DATA_STATE.base];
    var sets  = [COS_DATA_STATE.localHave || null];
    if (COS_DATA_STATE.base !== 'data/en') { bases.push('data/en'); sets.push(COS_DATA_STATE.enHave || null); }
    for (var b = 0; b < bases.length; b++) {
      if (sets[b] && !sets[b].has(canon)) continue;                              // not in this tree -> no request
      try {
        var xhr = new XMLHttpRequest();
        xhr.open('GET', bases[b] + '/' + canon, false);                          // SYNCHRONOUS (no ASYNCIFY)
        xhr.overrideMimeType('text/plain; charset=x-user-defined');             // read bytes verbatim
        xhr.send();
        if (xhr.status !== 200 && xhr.status !== 0) continue;                     // 404 -> try next base
        var t = xhr.responseText, n = t.length;
        var buf = new Uint8Array(n);
        for (var i = 0; i < n; i++) buf[i] = t.charCodeAt(i) & 0xff;
        var parts = canon.split('/'); parts.pop();                               // mkdir -p under /game
        var cur = '/game';
        for (var j = 0; j < parts.length; j++) {
          if (!parts[j]) continue;
          cur += '/' + parts[j];
          try { FS.mkdir(cur); } catch (e) {}
        }
        FS.writeFile(memfs, buf);
        return 0;
      } catch (e) { /* try next base */ }
    }
    return -1;
  },


  cos_frame_yield__async: true,
  cos_frame_yield: function () {
    return Asyncify.handleAsync(function () {
      return new Promise(function (resolve) { requestAnimationFrame(function () { resolve(); }); });
    });
  }
});
