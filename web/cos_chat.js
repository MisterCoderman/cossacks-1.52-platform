// cos_chat.js — virtual TCP stream for the GameSpy Chat SDK port (see src/IChat/cos_chat_net.h).
//
// One WebSocket per "socket", tunneling a raw byte stream to server/cos_ircd.js (a real IRC-server
// emulator speaking the GameSpy PeerChat protocol chatMain.c/chatHandlers.c expect). TCP stream
// semantics, NOT the framed-datagram semantics cos_net.js uses for CommCore's UDP: bytes are
// appended to a per-socket receive buffer in arrival order with no message boundaries, and recv()
// drains from the front of that buffer exactly like a real stream socket.
//
// Address resolution: same rule as cos_net.js/cos_master.js - the player never configures a server
// address. This always dials the SAME origin's IRC-tunnel endpoint (relay.json's "ircd" field, or
// same-origin /cossacks-irc if absent) regardless of what serverAddress string the original SDK
// code thinks it's connecting to.

addToLibrary({
  $COS_CHAT: {
    socks: {},      // sockId -> {ws, state: 'connecting'|'open'|'closed'|'error', rx: Uint8Array[], rxLen}
    nextSock: 1,

    ircdUrl: function () {
      var proto = location.protocol === 'https:' ? 'wss://' : 'ws://';
      var sameOrigin = proto + location.host + '/cossacks-irc';
      try {
        var x = new XMLHttpRequest();
        x.open('GET', 'relay.json', false);
        x.send();
        if (x.status === 200) {
          var cfg = JSON.parse(x.responseText);
          if (cfg && cfg.ircd) return cfg.ircd;
        }
      } catch (e) {}
      return sameOrigin;
    },

    appendRx: function (sock, u8) {
      sock.rx.push(u8);
      sock.rxLen += u8.length;
    },

    drainRx: function (sock, cap) {
      if (sock.rxLen <= 0) return null;
      var out = new Uint8Array(Math.min(cap, sock.rxLen));
      var pos = 0;
      while (pos < out.length && sock.rx.length) {
        var chunk = sock.rx[0];
        var take = Math.min(chunk.length, out.length - pos);
        out.set(chunk.subarray(0, take), pos);
        pos += take;
        sock.rxLen -= take;
        if (take === chunk.length) sock.rx.shift();
        else sock.rx[0] = chunk.subarray(take);
      }
      return out;
    }
  },

  cosc_socket__deps: ['$COS_CHAT'],
  cosc_socket: function () {
    var id = COS_CHAT.nextSock++;
    COS_CHAT.socks[id] = { ws: null, state: 'idle', rx: [], rxLen: 0 };
    return id;
  },

  cosc_close__deps: ['$COS_CHAT'],
  cosc_close: function (s) {
    var sock = COS_CHAT.socks[s];
    if (sock && sock.ws) { try { sock.ws.close(); } catch (e) {} }
    delete COS_CHAT.socks[s];
  },

  cosc_connect_start__deps: ['$COS_CHAT'],
  cosc_connect_start: function (s) {
    var sock = COS_CHAT.socks[s];
    if (!sock || sock.ws) return;
    sock.state = 'connecting';
    try {
      var ws = new WebSocket(COS_CHAT.ircdUrl());
      ws.binaryType = 'arraybuffer';
      sock.ws = ws;
      ws.onopen = function () { sock.state = 'open'; };
      ws.onclose = function () { if (sock.state !== 'error') sock.state = 'closed'; };
      ws.onerror = function () { sock.state = 'error'; };
      ws.onmessage = function (ev) {
        var u8 = (ev.data instanceof ArrayBuffer) ? new Uint8Array(ev.data)
                  : new TextEncoder().encode(ev.data);
        COS_CHAT.appendRx(sock, u8);
      };
    } catch (e) {
      sock.state = 'error';
    }
  },

  cosc_connect_poll__deps: ['$COS_CHAT'],
  cosc_connect_poll: function (s) {
    var sock = COS_CHAT.socks[s];
    if (!sock) return -1;
    if (sock.state === 'open') return 1;
    if (sock.state === 'error' || sock.state === 'closed') return -1;
    return 0;
  },

  cosc_send__deps: ['$COS_CHAT'],
  cosc_send: function (s, buf, len) {
    var sock = COS_CHAT.socks[s];
    if (!sock || !sock.ws || sock.state !== 'open') return -1;
    try {
      var data = HEAPU8.slice(buf, buf + len);
      sock.ws.send(data);
      return len;
    } catch (e) { return -1; }
  },

  cosc_recv__deps: ['$COS_CHAT'],
  cosc_recv: function (s, buf, cap) {
    var sock = COS_CHAT.socks[s];
    if (!sock) return -1;
    var out = COS_CHAT.drainRx(sock, cap);
    if (out) { HEAPU8.set(out, buf); return out.length; }
    // No data queued: a genuine close/error is what the original SDK treats as disconnect
    // (recv() <= 0 with no EWOULDBLOCK handling) - only report that once, same as a real socket.
    if (sock.state === 'closed' || sock.state === 'error') return 0;
    return -1;
  },

  // 1 iff a following recv() would return real data OR a close/error (see cos_chat_select's
  // comment in WebChat.cpp for why this must never be speculative).
  cosc_readable__deps: ['$COS_CHAT'],
  cosc_readable: function (s) {
    var sock = COS_CHAT.socks[s];
    if (!sock) return 0;
    if (sock.rxLen > 0) return 1;
    if (sock.state === 'closed' || sock.state === 'error') return 1;
    return 0;
  }
});
