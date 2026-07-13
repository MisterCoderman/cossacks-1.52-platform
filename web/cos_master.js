// cos_master.js — client bridge to server/cos_master.js (real Internet rooms + NAT hole-punch
// rendezvous, replacing the dead GameSpy PeerChat / GSC-Game.Net HTML-login backend).
//
// Shares the SAME WebSocket as cos_net.js (COS_NET.ws / COS_NET.ensureWs()): binary frames there
// are game data (CommCore virtual UDP), text frames here are JSON room control. See cos_net.js's
// ws.onmessage for the frame-type split, and server/cos_master.js's header comment for the exact
// JSON protocol this mirrors.
//
// Poll-based API (mirrors the existing LBEnumerateLanSessions/IPCORE.PollLanDiscovery pattern
// already used for LAN discovery — GSCRoom.cpp's UI loop calls cosm_pump() once per frame and
// polls the relevant cosm_poll_*() each iteration, exactly like the LAN browser polls IPCORE).

addToLibrary({
  $COS_MASTER: {
    nick: '',
    textPend: [],
    hello: null,     // {t, playerId, udpServer, udpPort, udpInterval, accessKey}
    rooms: null,      // array or null (not yet fetched this request)
    hosted: null,     // {id, name, host, players, maxPlayers}
    joined: null,     // {room, hostPeerId, transport, hostAddr, hostPort}
    lastError: '',
    heartbeatTimer: 0,
    flushTimer: 0,

    caps: function () {
      return (typeof window !== 'undefined' && window.cosElectron && window.cosElectron.udpSocket) ? ['udp'] : ['relay'];
    },

    flush: function () {
      if (!COS_NET.wsReady || !COS_MASTER.textPend.length) return;
      for (var i = 0; i < COS_MASTER.textPend.length; i++) {
        try { COS_NET.ws.send(COS_MASTER.textPend[i]); } catch (e) {}
      }
      COS_MASTER.textPend.length = 0;
      COS_MASTER.stopFlushTimer();
    },

    startFlushTimer: function () {
      if (COS_MASTER.flushTimer) return;
      COS_MASTER.flushTimer = setInterval(function () {
        COS_MASTER.flush();
      }, 20);
    },

    stopFlushTimer: function () {
      if (!COS_MASTER.flushTimer || COS_MASTER.textPend.length) return;
      clearInterval(COS_MASTER.flushTimer);
      COS_MASTER.flushTimer = 0;
    },

    send: function (obj) {
      COS_NET.ensureWs();
      var s = JSON.stringify(obj);
      if (COS_NET.wsReady) { try { COS_NET.ws.send(s); } catch (e) {} }
      else if (COS_MASTER.textPend.length < 64) {
        COS_MASTER.textPend.push(s);
        COS_MASTER.startFlushTimer();
      }
    },

    onText: function (raw) {
      var msg;
      try { msg = JSON.parse(raw); } catch (e) { return; }
      if (!msg || typeof msg.t !== 'string') return;
      switch (msg.t) {
        case 'hello_ok': COS_MASTER.hello = msg; break;
        case 'rooms': COS_MASTER.rooms = msg.rooms || []; break;
        case 'hosted': COS_MASTER.hosted = msg.room; COS_MASTER.startHeartbeat(); break;
        case 'joined': COS_MASTER.joined = msg; COS_MASTER.startHeartbeat(); break;
        case 'relay_required':
          if (typeof COS_NET !== 'undefined') {
            COS_NET.forceRelay = true;
            COS_NET.ensureWs();
          }
          if (COS_MASTER.hosted) COS_MASTER.hosted.transport = 'relay';
          if (COS_MASTER.joined) COS_MASTER.joined.transport = 'relay';
          break;
        case 'pong': break;
        case 'error': COS_MASTER.lastError = msg.msg || 'error'; break;
        case 'peer_addr':
          if (typeof COS_NET !== 'undefined' && COS_NET.addPunchPeer) {
            // relayId (source peer's virtual id) binds this punched addr to the 10.<relayId> the
            // engine addresses; fall back to peerId for the legacy path. Both open the NAT keepalive.
            var vid = (msg.relayId !== undefined) ? (msg.relayId >>> 0) : (msg.peerId >>> 0);
            COS_NET.addPunchPeer(msg.ip || '', msg.port | 0, msg.until | 0, vid);
          }
          break;
      }
    },

    connectNick: function (nick) {
      COS_MASTER.nick = (nick || 'Player').slice(0, 31);
      COS_MASTER.hello = null;
      COS_MASTER.lastError = '';
      COS_MASTER.send({ t: 'hello', nick: COS_MASTER.nick, caps: COS_MASTER.caps() });
    },

    startHeartbeat: function () {
      if (COS_MASTER.heartbeatTimer) return;
      COS_MASTER.heartbeatTimer = setInterval(function () {
        if (!COS_MASTER.hosted && !COS_MASTER.joined) { COS_MASTER.stopHeartbeat(); return; }
        COS_MASTER.send({ t: 'heartbeat' });
      }, 15000);
    },

    stopHeartbeat: function () {
      if (!COS_MASTER.heartbeatTimer) return;
      clearInterval(COS_MASTER.heartbeatTimer);
      COS_MASTER.heartbeatTimer = 0;
    }
  },

  // Pump queued text sends once the WS is open, and is a safe no-op otherwise. Call every frame
  // from the native UI loop (same spot the LAN browser calls IPCORE.PollLanDiscovery()).
  cosm_pump__deps: ['$COS_MASTER', '$COS_NET'],
  cosm_pump: function () {
    COS_NET.ensureWs();
    COS_MASTER.flush();
  },

  cosm_connected__deps: ['$COS_MASTER', '$COS_NET'],
  cosm_connected: function () { return COS_NET.wsReady ? 1 : 0; },

  // ---- hello / identity ----
  cosm_connect__deps: ['$COS_MASTER'],
  cosm_connect: function (nickPtr) {
    COS_MASTER.connectNick(UTF8ToString(nickPtr));
  },

  cosm_poll_hello__deps: ['$COS_MASTER'],
  cosm_poll_hello: function () { return COS_MASTER.hello ? 1 : (COS_MASTER.lastError ? -1 : 0); },

  cosm_hello_player_id__deps: ['$COS_MASTER'],
  cosm_hello_player_id: function () { return (COS_MASTER.hello && COS_MASTER.hello.playerId) | 0; },

  cosm_hello_udp_port__deps: ['$COS_MASTER'],
  cosm_hello_udp_port: function () { return (COS_MASTER.hello && COS_MASTER.hello.udpPort) | 0; },

  cosm_hello_udp_interval__deps: ['$COS_MASTER'],
  cosm_hello_udp_interval: function () { return (COS_MASTER.hello && COS_MASTER.hello.udpInterval) | 0; },

  cosm_hello_udp_server__deps: ['$COS_MASTER'],
  cosm_hello_udp_server: function (bufPtr, bufLen) {
    stringToUTF8((COS_MASTER.hello && COS_MASTER.hello.udpServer) || '', bufPtr, bufLen);
  },

  cosm_hello_access_key__deps: ['$COS_MASTER'],
  cosm_hello_access_key: function (bufPtr, bufLen) {
    stringToUTF8((COS_MASTER.hello && COS_MASTER.hello.accessKey) || '', bufPtr, bufLen);
  },

  // ---- host ----
  cosm_host__deps: ['$COS_MASTER'],
  cosm_host: function (namePtr, maxPlayers) {
    COS_MASTER.hosted = null;
    COS_MASTER.lastError = '';
    COS_MASTER.send({ t: 'host', name: UTF8ToString(namePtr), maxPlayers: maxPlayers, transport: COS_MASTER.caps().indexOf('udp') >= 0 ? 'udp' : 'relay' });
  },

  cosm_poll_hosted__deps: ['$COS_MASTER'],
  cosm_poll_hosted: function () { return COS_MASTER.hosted ? 1 : (COS_MASTER.lastError ? -1 : 0); },

  cosm_hosted_id__deps: ['$COS_MASTER'],
  cosm_hosted_id: function (bufPtr, bufLen) {
    stringToUTF8((COS_MASTER.hosted && COS_MASTER.hosted.id) || '', bufPtr, bufLen);
  },

  cosm_hosted_transport__deps: ['$COS_MASTER'],
  cosm_hosted_transport: function () {
    return (COS_MASTER.hosted && COS_MASTER.hosted.transport === 'udp') ? 1 : 0;
  },

  // ---- room list ----
  cosm_list__deps: ['$COS_MASTER'],
  cosm_list: function () {
    COS_MASTER.rooms = null;
    COS_MASTER.lastError = '';
    COS_MASTER.send({ t: 'list' });
  },

  cosm_poll_rooms__deps: ['$COS_MASTER'],
  cosm_poll_rooms: function () { return COS_MASTER.rooms ? COS_MASTER.rooms.length : -1; },

  cosm_room_id__deps: ['$COS_MASTER'],
  cosm_room_id: function (idx, bufPtr, bufLen) {
    var r = COS_MASTER.rooms && COS_MASTER.rooms[idx];
    stringToUTF8(r ? r.id : '', bufPtr, bufLen);
  },
  cosm_room_name__deps: ['$COS_MASTER'],
  cosm_room_name: function (idx, bufPtr, bufLen) {
    var r = COS_MASTER.rooms && COS_MASTER.rooms[idx];
    stringToUTF8(r ? r.name : '', bufPtr, bufLen);
  },
  cosm_room_host__deps: ['$COS_MASTER'],
  cosm_room_host: function (idx, bufPtr, bufLen) {
    var r = COS_MASTER.rooms && COS_MASTER.rooms[idx];
    stringToUTF8(r ? r.host : '', bufPtr, bufLen);
  },
  cosm_room_players__deps: ['$COS_MASTER'],
  cosm_room_players: function (idx) {
    var r = COS_MASTER.rooms && COS_MASTER.rooms[idx];
    return r ? (r.players | 0) : 0;
  },
  cosm_room_max__deps: ['$COS_MASTER'],
  cosm_room_max: function (idx) {
    var r = COS_MASTER.rooms && COS_MASTER.rooms[idx];
    return r ? (r.maxPlayers | 0) : 0;
  },

  // ---- join ----
  cosm_join__deps: ['$COS_MASTER'],
  cosm_join: function (roomIdPtr) {
    COS_MASTER.joined = null;
    COS_MASTER.lastError = '';
    COS_MASTER.send({ t: 'join', room: UTF8ToString(roomIdPtr) });
  },

  cosm_poll_join__deps: ['$COS_MASTER'],
  cosm_poll_join: function () { return COS_MASTER.joined ? 1 : (COS_MASTER.lastError ? -1 : 0); },

  cosm_join_transport__deps: ['$COS_MASTER'],
  cosm_join_transport: function () { return (COS_MASTER.joined && COS_MASTER.joined.transport === 'udp') ? 1 : 0; },

  cosm_join_host_addr__deps: ['$COS_MASTER'],
  cosm_join_host_addr: function (bufPtr, bufLen) {
    stringToUTF8((COS_MASTER.joined && COS_MASTER.joined.hostAddr) || '', bufPtr, bufLen);
  },

  cosm_join_host_port__deps: ['$COS_MASTER'],
  cosm_join_host_port: function () { return (COS_MASTER.joined && COS_MASTER.joined.hostPort) | 0; },

  // ---- leave ----
  cosm_leave__deps: ['$COS_MASTER'],
  cosm_leave: function () {
    COS_MASTER.send({ t: 'leave' });
    COS_MASTER.hosted = null;
    COS_MASTER.joined = null;
    COS_MASTER.rooms = null;
    COS_MASTER.stopHeartbeat();
  },

  cosm_heartbeat__deps: ['$COS_MASTER'],
  cosm_heartbeat: function () {
    COS_MASTER.send({ t: 'heartbeat' });
  },

  // The match just launched (StartGSCGame): the master hides the room from the list and rejects
  // late joiners until the host leaves/re-hosts. Safe no-op for joiners (server checks host).
  cosm_game_start__deps: ['$COS_MASTER'],
  cosm_game_start: function () {
    COS_MASTER.send({ t: 'game_start' });
  },

  // Match reporting (stats/alive/endgame): binary payloads are tiny (<=64 bytes), sent hex-encoded
  // inside the JSON control channel. The server parses/stores them (GET /stats).
  cosm_report__deps: ['$COS_MASTER'],
  cosm_report: function (kindPtr, gamePtr, dataPtr, len) {
    var n = Math.max(0, Math.min(len | 0, 2048));
    var hex = '';
    for (var i = 0; i < n; i++) {
      var b = HEAPU8[dataPtr + i];
      hex += (b < 16 ? '0' : '') + b.toString(16);
    }
    COS_MASTER.send({ t: 'report', kind: UTF8ToString(kindPtr), game: UTF8ToString(gamePtr), data: hex });
  },

  cosm_last_error__deps: ['$COS_MASTER'],
  cosm_last_error: function (bufPtr, bufLen) {
    stringToUTF8(COS_MASTER.lastError || '', bufPtr, bufLen);
  }
});
