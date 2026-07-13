// cos_net.js — datagram backends for the virtual-UDP layer (WebNet.cpp).
//
// Backend picked once at first socket():
//   window.cosElectron  -> Electron preload bridge: REAL UDP (LAN broadcast + direct IP).
//   otherwise           -> WebSocket relay: ONE VIRTUAL LAN. peer id <-> virtual IP 10.hi.mid.lo
//                          (24-bit id space, up to 16.7M peers), broadcasts reach every connected
//                          peer in the same room, so the engine's stock LAN discovery works over
//                          the internet unchanged.
//
// Relay address resolution — the PLAYER never configures this, ever. No URL parameter, no
// localStorage, nothing typed anywhere. It is decided entirely by whoever runs the server:
//   1) relay.json next to dmcr.html, fetched from the SAME origin the page was loaded from
//      (shipped as part of the deploy - see server/cos_master.js's static file serving, which
//      is exactly what serves this file too). {"relay": "wss://host:port/cossacks"} to point at
//      a master server on a different host, or {"relay": ""} / the field simply absent to mean
//      "same origin as this page".
//   2) same-origin fallback ws(s)://<origin>/cossacks, used if relay.json is missing/empty/
//      unreachable — a robustness fallback, not a way for a player to pick anything.
//
// Wire format (binary, little-endian):
//   client->relay:  [0x02][to:u32][dstPort:u16][srcPort:u16][data]   unicast
//                   [0x03][dstPort:u16][srcPort:u16][data]           broadcast (everyone else)
//   relay->client:  [0x81][yourId:u32]                               hello
//                   [0x82][from:u32][dstPort:u16][srcPort:u16][data] delivered datagram

addToLibrary({
  $COS_NET: {
    mode: 0,              // 0=undecided 1=ws-relay 2=electron
    ws: null, wsReady: false, wsConnecting: false, myId: 0,
    // Electron normally plays LAN/direct-IP over REAL UDP (mode 2). An Internet-room game (joined
    // via the master server, see cos_master.js) may hand out transport:'relay' instead of
    // transport:'udp' (no hole-punch route available) - in that case CommCore's sockets must move
    // onto the SAME WS relay a browser peer would use, even though this process is Electron.
    // forceRelay is a blunt global switch, not per-socket: CommCore only ever has one active
    // session (LAN, direct-IP, or one Internet room) at a time, never several concurrently.
    forceRelay: false,
    pend: [],             // frames queued until the WS is open
    socks: {},            // sockId -> {port, q:[{ip,port,data}]}
    nextSock: 1,
    punchPeers: {},       // "ip:port" -> {ip, port, until}      (keepalive targets)
    punchTimer: 0,
    // Etap 2 direct-P2P over the GSC path. internetRoom=true means this session is a GSC internet
    // game: the engine addresses peers by the VIRTUAL ip 10.<relayId>, data goes over the WS relay by
    // default, and we upgrade a single peer to a DIRECT native-UDP path once its hole-punch confirms.
    // punchMap: relayId -> {ip, port, confirmed}. LAN/direct-IP play leaves internetRoom=false and is
    // completely unaffected (the native/relay branches below are byte-identical to before).
    internetRoom: false,
    punchMap: {},

    useNative: function () { return COS_NET.mode === 2 && !COS_NET.forceRelay; },
    // has a real UDP socket (Electron), regardless of the relay-fallback flag
    hasNative: function () { return COS_NET.mode === 2; },

    // Real (ip,port) of an inbound native datagram -> the peer's virtual relay id, or -1 if it is not
    // a known punched peer (ignored, so a stray/spoofed datagram never reaches the engine).
    matchPunch: function (ip, port) {
      for (var id in COS_NET.punchMap) {
        var e = COS_NET.punchMap[id];
        if (e && e.ip === ip && e.port === (port | 0)) return id | 0;
      }
      return -1;
    },

    // Relay-encode one datagram (unicast 0x02 to a virtual id, or broadcast 0x03 to the room) and
    // send it over the WS relay. Shared by the plain-relay path and the internet-room fallback.
    relaySend: function (srcPort, ip, port, data) {
      var len = data.length, f, dv;
      if (COS_NET.isBcast(ip)) {
        f = new Uint8Array(5 + len); dv = new DataView(f.buffer);
        dv.setUint8(0, 0x03); dv.setUint16(1, port, true); dv.setUint16(3, srcPort, true);
        f.set(data, 5);
      } else {
        f = new Uint8Array(9 + len); dv = new DataView(f.buffer);
        dv.setUint8(0, 0x02); dv.setUint32(1, COS_NET.idFromIp(ip), true);
        dv.setUint16(5, port, true); dv.setUint16(7, srcPort, true);
        f.set(data, 9);
      }
      COS_NET.wsSend(f);
    },

    // Peer id space: 24 bits, the whole 10.0.0.0/8 range (server: cos_master.js/cos_relay.js pick
    // ids the same way) — up to 16.7M distinct peers, comfortably covering a 100k-peer deployment.
    vip: function (id) { return (10 << 24) | (id & 0xFFFFFF); },                 // 10.hi.mid.lo
    idFromIp: function (ip) { return ip >>> 0 & 0xFFFFFF; },
    // CommCore's LAN discovery always broadcasts to the literal limited-broadcast address
    // (INADDR_BROADCAST = 255.255.255.255, see CommLanDiscovery.cpp) — that's the only broadcast
    // sentinel actually used, so that's the only one checked here.
    isBcast: function (ip) { return (ip >>> 0) === 0xFFFFFFFF; },

    relayUrl: function () {
      var proto = location.protocol === 'https:' ? 'wss://' : 'ws://';
      var sameOrigin = location.protocol === 'file:' ? '' : proto + location.host + '/cossacks';
      function endpoint(v) {
        v = String(v || '').trim();
        if (!v) return '';
        if (v.indexOf('http://') === 0) v = 'ws://' + v.slice(7);
        else if (v.indexOf('https://') === 0) v = 'wss://' + v.slice(8);
        else if (v.indexOf('ws://') !== 0 && v.indexOf('wss://') !== 0) v = proto + v;
        return /\/cossacks(?:[?#].*)?$/.test(v) ? v : v.replace(/\/+$/, '') + '/cossacks';
      }
      try {
        // relay.json: server-authored deploy config, same origin as the page (synchronous, tiny,
        // browser-cached). Never a player input of any kind.
        var x = new XMLHttpRequest();
        x.open('GET', 'relay.json', false);
        x.send();
        if (x.status === 200) {
          var cfg = JSON.parse(x.responseText);
          var configured = cfg && endpoint(cfg.relay || cfg.master || cfg.gsc || cfg.host);
          if (configured) return configured;
        }
      } catch (e) {}
      return sameOrigin || 'ws://127.0.0.1:8790/cossacks';
    },

    ensure: function () {
      if (COS_NET.mode) return;
      if (typeof window !== 'undefined' && window.cosElectron && window.cosElectron.udpSocket) {
        COS_NET.mode = 2;
        out('[cos_net] backend: Electron native UDP');
        return;
      }
      COS_NET.mode = 1;
      COS_NET.ensureWs();
    },

    // The control/relay WebSocket, decoupled from `mode`: LAN discovery + direct-IP play use real
    // Electron UDP (mode 2) with no server at all, but INTERNET ROOMS (master server: host/list/
    // join) need a WS connection even under Electron — the SAME connection then also carries the
    // relay-fallback game-data path for that room (room data never touches native UDP), so an
    // Electron host and a browser joiner in the same room can always reach each other.
    ensureWs: function () {
      if (COS_NET.ws || COS_NET.wsConnecting) return;
      COS_NET.wsConnecting = true;
      var url = COS_NET.relayUrl();
      out('[cos_net] control/relay WebSocket -> ' + url);
      try {
        var ws = new WebSocket(url);
        ws.binaryType = 'arraybuffer';
        COS_NET.ws = ws;
        ws.onopen = function () {
          COS_NET.wsReady = true;
          for (var i = 0; i < COS_NET.pend.length; i++) ws.send(COS_NET.pend[i]);
          COS_NET.pend.length = 0;
          if (typeof COS_MASTER !== 'undefined' && COS_MASTER.flush) COS_MASTER.flush();
        };
        ws.onclose = function () { COS_NET.wsReady = false; COS_NET.ws = null; COS_NET.wsConnecting = false; };
        ws.onerror = function () { console.warn('[cos_net] relay connection error (' + url + ')'); };
        ws.onmessage = function (ev) {
          // The SAME connection carries binary game-data frames (this file) AND JSON room/master
          // control frames (COS_MASTER, cos_master.js) — cos_master.js is a superset server of the
          // plain relay, so both message shapes can arrive on one socket. Text frame -> control.
          if (typeof ev.data === 'string') {
            if (typeof COS_MASTER !== 'undefined') COS_MASTER.onText(ev.data);
            return;
          }
          var d = new DataView(ev.data);
          var t = d.getUint8(0);
          if (t === 0x81) {                                    // hello: my peer id
            COS_NET.myId = d.getUint32(1, true);
            out('[cos_net] relay peer id ' + COS_NET.myId + ' (virtual 10.77.' +
                ((COS_NET.myId >> 8) & 255) + '.' + (COS_NET.myId & 255) + ')');
          } else if (t === 0x82) {                             // datagram
            var from = d.getUint32(1, true);
            var dstPort = d.getUint16(5, true);
            var srcPort = d.getUint16(7, true);
            var data = new Uint8Array(ev.data, 9);
            COS_NET.deliver(dstPort, COS_NET.vip(from), srcPort, data);
          }
        };
      } catch (e) { console.warn('[cos_net] relay connect failed', e); }
    },

    deliver: function (dstPort, ip, srcPort, dataU8) {
      // route into whichever socket is bound to dstPort (data 34000 / discovery 34001)
      for (var k in COS_NET.socks) {
        var s = COS_NET.socks[k];
        if (s.port === dstPort) {
          if (s.q.length < 512) s.q.push({ ip: ip, port: srcPort, data: dataU8 });
          return;
        }
      }
    },

    wsSend: function (frame) {
      if (COS_NET.wsReady) { try { COS_NET.ws.send(frame); } catch (e) {} }
      else if (COS_NET.pend.length < 256) COS_NET.pend.push(frame);
    },

    addPunchPeer: function (ip, port, until, relayId) {
      if (!ip || !port || !COS_NET.hasNative()) return;
      var key = ip + ':' + port;
      COS_NET.punchPeers[key] = { ip: ip, port: port | 0, until: until || (Date.now() + 12000) };
      // Bind this punch target to the peer's virtual relay id so cosn_sendto can rewrite the engine's
      // virtual 10.<relayId> destination to this real ip:port once the punch confirms. Keep any
      // existing 'confirmed' state if the address is unchanged (re-fanout must not un-confirm).
      if (relayId !== undefined && relayId >= 0) {
        var pm = COS_NET.punchMap[relayId];
        var confirmed = !!(pm && pm.confirmed && pm.ip === ip && pm.port === (port | 0));
        COS_NET.punchMap[relayId] = { ip: ip, port: port | 0, confirmed: confirmed };
      }
      COS_NET.startPunchTimer();
      COS_NET.punchAll();
    },

    // Enter/refresh an internet GSC game: force the relay WS up (needed both for the rendezvous and as
    // the default data path under Electron), mark the session, reset the punch map, and tell the
    // server which GSC game this is by the host's relay id so it can pair peers and fan out addresses.
    gscRoom: function (hostId, punchId, punchKey, isHost) {
      COS_NET.internetRoom = true;
      COS_NET.punchMap = {};
      COS_NET.ensureWs();
      var frame = JSON.stringify({ t: 'gsc_room', hostId: hostId >>> 0, punchId: punchId >>> 0, punchKey: punchKey || '', role: isHost ? 'host' : 'join' });
      if (COS_NET.wsReady && COS_NET.ws) { try { COS_NET.ws.send(frame); } catch (e) {} }
      else if (typeof COS_MASTER !== 'undefined') { COS_MASTER.textPend.push(frame); COS_MASTER.startFlushTimer(); }
      else if (COS_NET.pend.length < 256) COS_NET.pend.push(frame);
    },

    startPunchTimer: function () {
      if (COS_NET.punchTimer) return;
      COS_NET.punchTimer = setInterval(function () { COS_NET.punchAll(); }, 250);
    },

    punchAll: function () {
      if (!COS_NET.useNative()) return;
      var now = Date.now();
      var active = false;
      var empty = new Uint8Array(0);
      for (var key in COS_NET.punchPeers) {
        var p = COS_NET.punchPeers[key];
        if (!p || p.until < now) { delete COS_NET.punchPeers[key]; continue; }
        active = true;
        for (var sid in COS_NET.socks) {
          var s = COS_NET.socks[sid];
          if (s && s.port === 34000) {
            try { window.cosElectron.udpSend(sid | 0, p.ip, p.port, empty); } catch (e) {}
          }
        }
      }
      if (!active && COS_NET.punchTimer) {
        clearInterval(COS_NET.punchTimer);
        COS_NET.punchTimer = 0;
      }
    }
  },

  cosn_socket__deps: ['$COS_NET'],
  cosn_socket: function () {
    COS_NET.ensure();
    var id = COS_NET.nextSock++;
    COS_NET.socks[id] = { port: 0, q: [] };
    if (COS_NET.useNative()) window.cosElectron.udpSocket(id);
    return id;
  },

  cosn_close__deps: ['$COS_NET'],
  cosn_close: function (s) {
    if (COS_NET.useNative() && window.cosElectron) window.cosElectron.udpClose(s);
    delete COS_NET.socks[s];
  },

  cosn_bind__deps: ['$COS_NET'],
  cosn_bind: function (s, port) {
    var k = COS_NET.socks[s]; if (!k) return -1;
    k.port = port;
    if (COS_NET.useNative()) {
      var ok = window.cosElectron.udpBind(s, port);
      if (ok && port === 34000) COS_NET.punchAll();
      return ok ? 0 : -1;
    }
    return 0;
  },

  // Called from C++ (GSCRoom.cpp) right after a master-server 'join'/'hosted' reply comes back:
  // relayFlag=1 when the server picked transport:'relay' (no UDP hole-punch route for this pair),
  // relayFlag=0 to release back to whatever cosElectron/mode would normally pick (LAN, direct-IP,
  // or a successfully hole-punched Internet room). Safe to call under the browser build too (no-op
  // there - mode is already 1/ws-relay and useNative() is always false).
  cosn_set_relay_mode__deps: ['$COS_NET'],
  cosn_set_relay_mode: function (relayFlag) {
    COS_NET.forceRelay = !!relayFlag;
    if (COS_NET.forceRelay) COS_NET.ensureWs();
  },

  // 1 when this process has a real, unrestricted UDP socket (Electron dgram) that can attempt NAT
  // hole punching; 0 in the browser (no raw-socket API - relay is the only possible transport, so
  // there is no point sending UdpHolePuncher keepalives that could only ever be dropped).
  cosn_has_native_udp__deps: ['$COS_NET'],
  cosn_has_native_udp: function () {
    return (typeof window !== 'undefined' && window.cosElectron && window.cosElectron.udpSocket) ? 1 : 0;
  },

  cosn_sendto__deps: ['$COS_NET'],
  cosn_sendto: function (s, buf, len, ip, port) {
    var k = COS_NET.socks[s]; if (!k) return -1;
    var data = HEAPU8.subarray(buf, buf + len);

    // Internet GSC game under Electron: default to the relay; send DIRECT native UDP only to a peer
    // whose hole-punch is confirmed (its real ip:port is known and reachable). This keeps every
    // unconfirmed/broadcast/mixed-with-browser send on the always-working relay instead of firing a
    // real datagram at the unroutable virtual 10.x address. LAN/direct-IP play skips this entirely.
    if (COS_NET.internetRoom && COS_NET.mode === 2) {
      if (!COS_NET.isBcast(ip) && !COS_NET.forceRelay) {
        var pm = COS_NET.punchMap[COS_NET.idFromIp(ip)];
        if (pm && pm.confirmed) {
          return window.cosElectron.udpSend(s, pm.ip, pm.port, data) ? len : -1;
        }
      }
      COS_NET.relaySend(k.port, ip, port, data);
      return len;
    }

    if (COS_NET.useNative()) {
      var ips = ((ip >>> 24) & 255) + '.' + ((ip >>> 16) & 255) + '.' + ((ip >>> 8) & 255) + '.' + (ip & 255);
      // preload copies the bytes synchronously
      return window.cosElectron.udpSend(s, ips, port, data) ? len : -1;
    }
    // WS relay
    COS_NET.relaySend(k.port, ip, port, data);
    return len;
  },

  cosn_recvfrom__deps: ['$COS_NET'],
  cosn_recvfrom: function (s, buf, cap, ipOut, portOut) {
    var k = COS_NET.socks[s]; if (!k) return -1;

    // Internet GSC game under Electron: data arrives on TWO paths — the native UDP socket (direct P2P
    // + empty keepalives) and the WS relay queue. Drain native first, translating each real source
    // back to its stable virtual 10.<relayId> so the engine sees one consistent address; an empty
    // packet is a keepalive that confirms the punch (enabling direct sends) but carries no game data.
    if (COS_NET.internetRoom && COS_NET.mode === 2) {
      for (;;) {
        var m = window.cosElectron.udpPoll(s);
        if (!m) break;
        var vid = COS_NET.matchPunch(m.ip, m.port);
        if (vid < 0) continue;                          // unknown source: never hand raw addrs to engine
        if (COS_NET.punchMap[vid]) COS_NET.punchMap[vid].confirmed = true;
        if (!m.data || m.data.length === 0) continue;   // keepalive: confirms punch, no game payload
        var n = Math.min(m.data.length, cap);
        HEAPU8.set(m.data.subarray(0, n), buf);
        HEAPU32[ipOut >> 2] = COS_NET.vip(vid) >>> 0;    // report virtual 10.<relayId>, not the raw ip
        HEAP32[portOut >> 2] = k.port || 34000;
        return n;
      }
      if (!k.q.length) return -1;
      var rm = k.q.shift();
      var rn = Math.min(rm.data.length, cap);
      HEAPU8.set(rm.data.subarray(0, rn), buf);
      HEAPU32[ipOut >> 2] = rm.ip >>> 0;
      HEAP32[portOut >> 2] = rm.port;
      return rn;
    }

    if (COS_NET.useNative()) {
      var mm = window.cosElectron.udpPoll(s);
      if (!mm) return -1;
      var p = mm.ip.split('.');
      var ip = ((+p[0]) << 24) | ((+p[1]) << 16) | ((+p[2]) << 8) | (+p[3]);
      var d = mm.data;                                  // Uint8Array from preload
      var n2 = Math.min(d.length, cap);
      HEAPU8.set(d.subarray(0, n2), buf);
      HEAPU32[ipOut >> 2] = ip >>> 0;
      HEAP32[portOut >> 2] = mm.port;
      return n2;
    }
    if (!k.q.length) return -1;
    var msg = k.q.shift();
    var n3 = Math.min(msg.data.length, cap);
    HEAPU8.set(msg.data.subarray(0, n3), buf);
    HEAPU32[ipOut >> 2] = msg.ip >>> 0;
    HEAP32[portOut >> 2] = msg.port;
    return n3;
  },

  // C++ entry: entering a GSC internet room. hostId = the host's relay peer id (host passes its own
  // cosn_my_relay_id(); joiner passes idFromIp of RIF->RoomIP=10.a.b.c). punchId/keyPtr = the CSHP
  // identity (GlobalRIF.player_id and the login ACCESS key) so the server can correlate CSHP packets.
  cosn_gsc_room__deps: ['$COS_NET'],
  cosn_gsc_room: function (hostId, punchId, keyPtr, isHost) {
    COS_NET.gscRoom(hostId >>> 0, punchId >>> 0, keyPtr ? UTF8ToString(keyPtr) : '', !!isHost);
  },

  // C++ entry: this process's own relay peer id (0 until the relay WS hello arrives). Forces the WS
  // up so an Electron host actually gets an id to advertise as its %CG_IP=10.<id>.
  cosn_my_relay_id__deps: ['$COS_NET'],
  cosn_my_relay_id: function () { COS_NET.ensureWs(); return COS_NET.myId | 0; },

  // C++ entry: leaving a GSC room — drop internet-room state so a later LAN/direct-IP game is clean.
  cosn_gsc_leave__deps: ['$COS_NET'],
  cosn_gsc_leave: function () { COS_NET.internetRoom = false; COS_NET.punchMap = {}; }
});
