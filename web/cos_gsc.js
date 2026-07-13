// cos_gsc.js — transport for the native GSC internet lobby (rooms/login/room list).
//
// This is the browser side of the GW device that in the original game was gw_server.dll: it carries
// the game's native GSC request/reply payloads (ParsedRQ::Compact bytes) to the real rloger Perl
// server (GSC::Server + SimpleCossacksServer) via a WebSocket to server/cos_master.js's /cossacks-gsc
// bridge, which does the GSC-Stream framing (12-byte header + zlib) and TCP to the Perl server.
//
// One WebSocket per game session. Requests are keyed by `num` (the GW request handle); replies are
// queued per num so the C side's poll/recv (GW_GetRequestResult) can pick up its answer. Same
// address resolution as cos_net.js/cos_chat.js: relay.json's "gsc" field, else same-origin
// /cossacks-gsc. The player configures nothing.

addToLibrary({
  $COS_GSC: {
    ws: null,
    state: 'idle',        // idle|connecting|open|closed|error
    replies: {},          // num -> Uint8Array payload (waiting to be picked up by recv)
    pending: [],           // frames queued until the WS is open

    url: function () {
      var proto = location.protocol === 'https:' ? 'wss://' : 'ws://';
      var sameOrigin = proto + location.host + '/cossacks-gsc';
      try {
        var x = new XMLHttpRequest();
        x.open('GET', 'relay.json', false);
        x.send();
        if (x.status === 200) {
          var cfg = JSON.parse(x.responseText);
          if (cfg && cfg.gsc) return cfg.gsc;
        }
      } catch (e) {}
      return sameOrigin;
    },

    ensure: function () {
      if (COS_GSC.ws && (COS_GSC.state === 'open' || COS_GSC.state === 'connecting')) return;
      COS_GSC.state = 'connecting';
      try {
        var ws = new WebSocket(COS_GSC.url());
        ws.binaryType = 'arraybuffer';
        COS_GSC.ws = ws;
        COS_GSC.peerIdSent = false;
        ws.onopen = function () {
          COS_GSC.state = 'open';
          // Tell the bridge our relay peer id BEFORE any GSC command, so it can register our real
          // connect address (10.<peer_id>) with the game server via a 'proxy' command. Without this
          // the server records the bridge's TCP ip (127.0.0.1) and every joiner is routed to the
          // wrong peer. Hold queued frames until the peer id has gone out.
          COS_GSC.sendPeerIdThenFlush(0);
        };
        ws.onclose = function () { if (COS_GSC.state !== 'error') COS_GSC.state = 'closed'; COS_GSC.ws = null; };
        ws.onerror = function () { COS_GSC.state = 'error'; };
        ws.onmessage = function (ev) {
          if (typeof ev.data === 'string') return;   // {gsc:'open'} control frame, ignore
          var u8 = new Uint8Array(ev.data);
          if (u8.length < 4) return;
          var num = u8[0] | (u8[1] << 8);
          COS_GSC.replies[num] = u8.subarray(4);
        };
      } catch (e) { COS_GSC.state = 'error'; }
    },

    // Send our relay peer id to the bridge, then release queued GSC frames. The relay WS (cos_net)
    // must be up to know our id; ensure it and retry until it's assigned, with a fallback so a
    // missing relay never wedges the lobby (bridge then just uses the TCP ip, i.e. old behaviour).
    sendPeerIdThenFlush: function (attempt) {
      if (!COS_GSC.ws || COS_GSC.state !== 'open') return;
      if (COS_GSC.peerIdSent) return;
      var id = 0;
      // ensureWs (not just ensure): under Electron the relay WS is otherwise never opened during the
      // lobby, so COS_NET.myId would stay 0 and the bridge would register the TCP ip instead of
      // 10.<id> — breaking both the joiner's %CG_IP derivation and the Etap 2 rendezvous grouping.
      try { if (typeof COS_NET !== 'undefined') { COS_NET.ensureWs(); id = COS_NET.myId | 0; } } catch (e) {}
      if (id || attempt >= 20) {                 // ~3s worth of retries, then give up gracefully
        try { COS_GSC.ws.send(JSON.stringify({ peerId: id })); } catch (e) {}
        COS_GSC.peerIdSent = true;
        for (var i = 0; i < COS_GSC.pending.length; i++) { try { COS_GSC.ws.send(COS_GSC.pending[i]); } catch (e) {} }
        COS_GSC.pending.length = 0;
      } else {
        setTimeout(function () { COS_GSC.sendPeerIdThenFlush(attempt + 1); }, 150);
      }
    }
  },

  // Send a request payload. num = GW handle, ver/lang from the engine. Payload is the raw Compact
  // command bytes (already including win+key as the last two args of each command).
  cosgsc_send__deps: ['$COS_GSC'],
  cosgsc_send: function (num, ver, lang, payloadPtr, len) {
    COS_GSC.ensure();
    var frame = new Uint8Array(4 + len);
    frame[0] = num & 0xFF; frame[1] = (num >> 8) & 0xFF; frame[2] = ver & 0xFF; frame[3] = lang & 0xFF;
    frame.set(HEAPU8.subarray(payloadPtr, payloadPtr + len), 4);
    // Only send directly once the peer id has been delivered; otherwise queue so the bridge's
    // 'proxy' command is guaranteed to reach the server before any login/host request.
    if (COS_GSC.state === 'open' && COS_GSC.ws && COS_GSC.peerIdSent) {
      try { COS_GSC.ws.send(frame); } catch (e) {}
    } else if (COS_GSC.pending.length < 64) {
      COS_GSC.pending.push(frame);
    }
  },

  // -1 if no reply for this num yet, otherwise the payload length (0 is a valid empty reply).
  cosgsc_poll__deps: ['$COS_GSC'],
  cosgsc_poll: function (num) {
    var r = COS_GSC.replies[num];
    return (r === undefined) ? -1 : r.length;
  },

  // Copy the reply payload for num into buf (cap bytes) and drop it from the queue. Returns bytes
  // copied, or -1 if there was no reply.
  cosgsc_recv__deps: ['$COS_GSC'],
  cosgsc_recv: function (num, bufPtr, cap) {
    var r = COS_GSC.replies[num];
    if (r === undefined) return -1;
    var n = Math.min(r.length, cap);
    HEAPU8.set(r.subarray(0, n), bufPtr);
    delete COS_GSC.replies[num];
    return n;
  },

  // 1 while the transport is usable (or still connecting), 0 once it has failed/closed.
  cosgsc_connected__deps: ['$COS_GSC'],
  cosgsc_connected: function () {
    return (COS_GSC.state === 'open' || COS_GSC.state === 'connecting' || COS_GSC.state === 'idle') ? 1 : 0;
  }
});
