// cos_audio.js — native WebAudio backend (replaces SDL2_mixer).
//
// Channel model (mirrors what the engine expects from its DirectSound/MCI emulation):
//   channel >= 0   : SFX channel (Cdirsnd: channel == bufferNum)
//   COSA_MUSIC_CH  : the MUSIC channel (DeviceCD tracks)
// Each channel = BufferSource -> StereoPanner -> Gain -> master Gain -> destination.
// Finished channels are queued into a list the C side polls once per frame (PollCDPlayback model).

addToLibrary({
  $COS_AUDIO: {
    ctx: null,
    master: null,
    bufs: {},        // handle -> AudioBuffer
    nextH: 1,
    ch: {},          // channel -> {src, pan, gain, playing}
    ended: [],       // channels whose source ended naturally (not halted)

    ensure: function () {
      if (COS_AUDIO.ctx) return COS_AUDIO.ctx;
      var AC = window.AudioContext || window.webkitAudioContext;
      if (!AC) return null;
      COS_AUDIO.ctx = new AC();
      COS_AUDIO.master = COS_AUDIO.ctx.createGain();
      COS_AUDIO.master.connect(COS_AUDIO.ctx.destination);
      // resume on first user gesture (autoplay policy)
      var res = function () { try { COS_AUDIO.ctx.resume(); } catch (e) {} };
      ['pointerdown', 'keydown', 'touchstart'].forEach(function (ev) {
        window.addEventListener(ev, res, { once: true, capture: true });
      });
      return COS_AUDIO.ctx;
    },
    chan: function (c) {
      var m = COS_AUDIO.ch[c];
      if (m) return m;
      var ctx = COS_AUDIO.ensure(); if (!ctx) return null;
      m = { src: null, pan: ctx.createStereoPanner ? ctx.createStereoPanner() : null,
            gain: ctx.createGain(), playing: false };
      if (m.pan) { m.pan.connect(m.gain); } // src -> pan -> gain
      m.gain.connect(COS_AUDIO.master);
      COS_AUDIO.ch[c] = m;
      return m;
    },
    stop: function (c) {
      var m = COS_AUDIO.ch[c];
      if (m && m.src) {
        m.src.onended = null;
        try { m.src.stop(); } catch (e) {}
        try { m.src.disconnect(); } catch (e) {}
        m.src = null;
      }
      if (m) m.playing = false;
    }
  },

  // init (rate hint only — AudioContext resamples per-buffer automatically)
  cosa_init__deps: ['$COS_AUDIO'],
  cosa_init: function (rate) { return COS_AUDIO.ensure() ? 0 : -1; },

  // Load PCM16 interleaved -> AudioBuffer. Returns handle (>0) or 0.
  cosa_load_pcm16__deps: ['$COS_AUDIO'],
  cosa_load_pcm16: function (ptr, frames, channels, rate) {
    var ctx = COS_AUDIO.ensure(); if (!ctx || frames <= 0) return 0;
    if (channels < 1) channels = 1; if (channels > 2) channels = 2;
    if (rate < 8000) rate = 22050;
    var buf = ctx.createBuffer(channels, frames, rate);
    for (var c = 0; c < channels; c++) {
      var d = buf.getChannelData(c);
      var base = (ptr >> 1) + c;
      for (var i = 0; i < frames; i++) d[i] = HEAP16[base + i * channels] / 32768.0;
    }
    var h = COS_AUDIO.nextH++;
    COS_AUDIO.bufs[h] = buf;
    return h;
  },
  cosa_free__deps: ['$COS_AUDIO'],
  cosa_free: function (h) { delete COS_AUDIO.bufs[h]; },

  // Play buffer h on channel c (loops: 0 = once, nonzero = infinite)
  cosa_play__deps: ['$COS_AUDIO'],
  cosa_play: function (c, h, loops) {
    var ctx = COS_AUDIO.ensure(); if (!ctx) return -1;
    var buf = COS_AUDIO.bufs[h]; if (!buf) return -1;
    var m = COS_AUDIO.chan(c); if (!m) return -1;
    COS_AUDIO.stop(c);
    var s = ctx.createBufferSource();
    s.buffer = buf;
    if (loops) s.loop = true;
    s.connect(m.pan ? m.pan : m.gain);
    m.src = s; m.playing = true;
    s.onended = function () {
      if (m.src === s) { m.src = null; m.playing = false; COS_AUDIO.ended.push(c); }
    };
    try { s.start(); } catch (e) { m.playing = false; return -1; }
    return c;
  },
  cosa_halt__deps: ['$COS_AUDIO'],
  cosa_halt: function (c) { COS_AUDIO.stop(c); },
  cosa_playing__deps: ['$COS_AUDIO'],
  cosa_playing: function (c) { var m = COS_AUDIO.ch[c]; return (m && m.playing) ? 1 : 0; },
  // volume 0..1 on a channel
  cosa_volume__deps: ['$COS_AUDIO'],
  cosa_volume: function (c, v) {
    var m = COS_AUDIO.chan(c); if (!m) return;
    if (v < 0) v = 0; if (v > 1) v = 1;
    m.gain.gain.value = v;
  },
  // panning: l,r in 0..1 (DirectSound-style channel weights) -> StereoPanner -1..+1
  cosa_pan__deps: ['$COS_AUDIO'],
  cosa_pan: function (c, l, r) {
    var m = COS_AUDIO.chan(c); if (!m || !m.pan) return;
    var p = r - l; if (p < -1) p = -1; if (p > 1) p = 1;
    m.pan.pan.value = p;
  },
  // ---- ASYNC music: fetch + decode OFF the main thread, then start on the music channel. ----
  // Menu-tab transitions call PlayRandomTrack(); the old path did a SYNCHRONOUS 11.6 MB XHR +
  // PCM decode on the main thread = a visible UI freeze on every transition. Here the current
  // track keeps playing while the next one downloads; decodeAudioData runs on a worker thread.
  // A newer request cancels a pending older one (token). LRU cache keeps the last 3 decoded
  // tracks (~46 MB each as float32) so revisits are instant.
  cosa_music_play__deps: ['$COS_AUDIO', '$COS_DATA_STATE'],
  cosa_music_play: function (canonPtr, musicCh) {
    var canon = UTF8ToString(canonPtr);
    var A = COS_AUDIO;
    var ctx = A.ensure(); if (!ctx) return -1;
    A.musicToken = (A.musicToken || 0) + 1;
    var tok = A.musicToken;
    A.musicBusy = true;                           // a request is in flight (download/decode)
    A.musicCache = A.musicCache || [];            // [{canon, buf}] newest last
    function start(buf) {
      if (tok !== A.musicToken) return;           // superseded by a newer request
      A.musicBusy = false;
      var m = A.chan(musicCh); if (!m) return;
      A.stop(musicCh);
      var s = ctx.createBufferSource();
      s.buffer = buf;
      s.connect(m.pan ? m.pan : m.gain);
      m.src = s; m.playing = true;
      s.onended = function () {
        if (m.src === s) { m.src = null; m.playing = false; A.ended.push(musicCh); }
      };
      try { s.start(); } catch (e) { m.playing = false; }
    }
    for (var i = 0; i < A.musicCache.length; i++) {
      if (A.musicCache[i].canon === canon) {
        var e = A.musicCache.splice(i, 1)[0];
        A.musicCache.push(e);
        start(e.buf);
        return 0;
      }
    }
    // resolve base like cos_fetch_file: active language dir first, then data/en (shared assets);
    // per-tree local manifests (when loaded) pick the right base without a 404 probe.
    var bases = ['data/en'], sets = [null];
    try {
      if (typeof COS_DATA_STATE !== 'undefined') {
        bases = [COS_DATA_STATE.base];
        sets  = [COS_DATA_STATE.localHave || null];
        if (COS_DATA_STATE.base !== 'data/en') { bases.push('data/en'); sets.push(COS_DATA_STATE.enHave || null); }
      }
    } catch (e) {}
    (function tryBase(bi) {
      if (bi >= bases.length) {
        // SELF-HEAL: a missing track (the shipped TRACKS.CD lists track 20, but the game files
        // only have TRACK_2..19 — true of the user's original install too) must NOT kill the
        // playlist forever. Report the channel as "ended" so PollCDPlayback picks the next track.
        console.warn('[cosa] music not found:', canon, '-> advancing playlist');
        if (tok === A.musicToken) { A.musicBusy = false; A.ended.push(musicCh); }
        return;
      }
      if (sets[bi] && !sets[bi].has(canon)) { tryBase(bi + 1); return; }
      fetch(bases[bi] + '/' + canon)
        .then(function (r) { if (!r.ok) throw 0; return r.arrayBuffer(); })
        .then(function (ab) { return ctx.decodeAudioData(ab); })
        .then(function (buf) {
          if (tok !== A.musicToken) return;       // superseded while downloading
          A.musicCache.push({ canon: canon, buf: buf });
          while (A.musicCache.length > 3) A.musicCache.shift();
          start(buf);
        })
        .catch(function () { tryBase(bi + 1); });
    })(0);
    return 0;
  },

  // Cancel a pending async music request AND stop the playing one. DeviceCD::Stop()/Close() call
  // this: plain halt only kills an already-playing source — a track still downloading/decoding
  // would otherwise start AFTER the stop.
  cosa_music_cancel__deps: ['$COS_AUDIO'],
  cosa_music_cancel: function (musicCh) {
    COS_AUDIO.musicToken = (COS_AUDIO.musicToken || 0) + 1;
    COS_AUDIO.musicBusy = false;
    COS_AUDIO.stop(musicCh);
  },

  // Prefetch a track into the decoded cache WITHOUT starting it (no token, no channel change).
  // The engine announces the NEXT playlist pick right after starting the current track, so the
  // track boundary becomes a cache hit instead of a ~0.5 s fetch+decode gap.
  cosa_music_prefetch__deps: ['$COS_AUDIO', '$COS_DATA_STATE'],
  cosa_music_prefetch: function (canonPtr) {
    var canon = UTF8ToString(canonPtr);
    var A = COS_AUDIO;
    var ctx = A.ensure(); if (!ctx) return;
    A.musicCache = A.musicCache || [];
    for (var i = 0; i < A.musicCache.length; i++) if (A.musicCache[i].canon === canon) return;
    var bases = ['data/en'], sets = [null];
    try {
      if (typeof COS_DATA_STATE !== 'undefined') {
        bases = [COS_DATA_STATE.base];
        sets  = [COS_DATA_STATE.localHave || null];
        if (COS_DATA_STATE.base !== 'data/en') { bases.push('data/en'); sets.push(COS_DATA_STATE.enHave || null); }
      }
    } catch (e) {}
    (function tryBase(bi) {
      if (bi >= bases.length) return;
      if (sets[bi] && !sets[bi].has(canon)) { tryBase(bi + 1); return; }
      fetch(bases[bi] + '/' + canon)
        .then(function (r) { if (!r.ok) throw 0; return r.arrayBuffer(); })
        .then(function (ab) { return ctx.decodeAudioData(ab); })
        .then(function (buf) {
          A.musicCache.push({ canon: canon, buf: buf });
          while (A.musicCache.length > 3) A.musicCache.shift();
        })
        .catch(function () { tryBase(bi + 1); });
    })(0);
  },

  // Music channel "active" = already playing OR a track is still downloading/decoding.
  // PlayRandomTrack uses this to keep the current track across menu-tab transitions instead of
  // restarting (= re-downloading) one on every entry, which is what made the music stutter.
  cosa_music_active__deps: ['$COS_AUDIO'],
  cosa_music_active: function (musicCh) {
    var m = COS_AUDIO.ch[musicCh];
    return ((m && m.playing) || COS_AUDIO.musicBusy) ? 1 : 0;
  },

  cosa_pause_all__deps: ['$COS_AUDIO'],
  cosa_pause_all: function () { if (COS_AUDIO.ctx) try { COS_AUDIO.ctx.suspend(); } catch (e) {} },
  cosa_resume_all__deps: ['$COS_AUDIO'],
  cosa_resume_all: function () { if (COS_AUDIO.ctx) try { COS_AUDIO.ctx.resume(); } catch (e) {} },
  // poll one naturally-finished channel per call; -1 if none (C side drains per frame)
  cosa_poll_ended__deps: ['$COS_AUDIO'],
  cosa_poll_ended: function () {
    if (!COS_AUDIO.ended.length) return -1;
    return COS_AUDIO.ended.shift();
  },
  cosa_close__deps: ['$COS_AUDIO'],
  cosa_close: function () {
    for (var c in COS_AUDIO.ch) COS_AUDIO.stop(c | 0);
    COS_AUDIO.ch = {}; COS_AUDIO.bufs = {}; COS_AUDIO.ended = [];
  }
});
