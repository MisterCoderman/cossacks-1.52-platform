// preload.js — exposes window.cosElectron: a real-UDP bridge for cos_net.js (WebNet backend #2).
//
// dgram sockets with SO_BROADCAST; each socket keeps a bounded receive queue that the game polls
// (udpPoll) exactly like a non-blocking recvfrom. Presence of window.cosElectron.udpSocket is what
// makes cos_net.js choose native UDP over the WebSocket relay — so LAN discovery (broadcast to
// 255.255.255.255) and direct-IP join work with no server at all.

const { contextBridge, ipcRenderer } = require('electron');
const dgram = require('dgram');

const socks = new Map();   // id -> { sock, queue:[{ip,port,data}] }
const QMAX = 1024;

contextBridge.exposeInMainWorld('cosElectron', {
  // The engine's Exit menu calls window.cosOnExit(), which calls this to quit the whole app
  // (main.js handles the 'cos-quit' IPC). Without it the shell would fall back to window.close().
  quit() { ipcRenderer.send('cos-quit'); },
  udpSocket(id) {
    if (socks.has(id)) return true;
    const sock = dgram.createSocket({ type: 'udp4', reuseAddr: true });
    const rec = { sock, queue: [] };
    sock.on('message', (msg, rinfo) => {
      if (rec.queue.length < QMAX) {
        rec.queue.push({ ip: rinfo.address, port: rinfo.port, data: new Uint8Array(msg) });
      }
    });
    sock.on('error', () => {});
    socks.set(id, rec);
    return true;
  },

  udpBind(id, port) {
    const rec = socks.get(id);
    if (!rec) return false;
    try {
      rec.sock.bind(port, () => {
        try { rec.sock.setBroadcast(true); } catch (e) {}
      });
      return true;
    } catch (e) { return false; }
  },

  udpSend(id, ip, port, dataU8) {
    const rec = socks.get(id);
    if (!rec) return false;
    try {
      // 255.255.255.x style / global broadcast both go out as a broadcast datagram
      rec.sock.send(Buffer.from(dataU8), port, ip);
      return true;
    } catch (e) { return false; }
  },

  // non-blocking poll: returns {ip,port,data:Uint8Array} or null
  udpPoll(id) {
    const rec = socks.get(id);
    if (!rec || !rec.queue.length) return null;
    return rec.queue.shift();
  },

  udpClose(id) {
    const rec = socks.get(id);
    if (rec) { try { rec.sock.close(); } catch (e) {} socks.delete(id); }
  }
});
