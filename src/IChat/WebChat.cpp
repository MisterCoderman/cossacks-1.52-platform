// WebChat.cpp — cos_chat virtual-TCP implementation (see cos_chat_net.h).
//
// One backend: a WebSocket tunnel to server/cos_ircd.js, a real IRC-server emulator speaking the
// GameSpy PeerChat wire protocol chatSocket.c/chatMain.c expect. The browser has no raw TCP API,
// so every BSD stream-socket call the SDK makes here becomes a byte-stream operation against a
// per-socket send/receive queue kept on the JS side (web/cos_chat.js); connect() blocks (Asyncify
// yield) until the JS side reports the WebSocket opened or failed, matching the SDK's own blocking
// ciSocketConnect() — everything past that point is non-blocking queue draining, exactly like the
// original expects from select()+recv().
//
// Address resolution is a deliberate no-op: this build never dials a literal IP:port some caller
// passes in (there is no real GameSpy server left to reach) - it always tunnels to the one relay
// this page's own deploy points at (same resolution as cos_net.js/cos_master.js: relay.json, same-
// origin fallback, no player-facing config of any kind).

#ifdef __EMSCRIPTEN__

#include <emscripten.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <netdb.h>

extern "C" {
    // web/cos_chat.js (js-library)
    int  cosc_socket(void);                         // -> sock id (>0) or -1
    void cosc_close(int s);
    void cosc_connect_start(int s);                  // kick off the WS connection (async)
    int  cosc_connect_poll(int s);                    // 0=pending, 1=open, -1=failed
    int  cosc_send(int s, const void* buf, int len);  // queues bytes, always "sent"
    int  cosc_recv(int s, void* buf, int cap);        // drains queued bytes, -1 if none/closed
    int  cosc_readable(int s);                        // 1 if recv() would return data or an error
}

extern "C" int cos_chat_socket(int af, int type, int proto) {
    (void)af; (void)type; (void)proto;
    int s = cosc_socket();
    return s > 0 ? s : -1;
}

extern "C" int cos_chat_close(int s) { cosc_close(s); return 0; }

extern "C" int cos_chat_connect(int s, const struct sockaddr* addr, int addrlen) {
    (void)addr; (void)addrlen;    // deliberately ignored - see file header
    printf("[GSC] cos_chat_connect(sock=%d) start\n", s);
    cosc_connect_start(s);
    // ciSocketConnect() expects a blocking connect(); yield to the browser event loop until the
    // JS-side WebSocket resolves open/error (capped so a dead relay can't hang the game forever).
    for (int waited = 0; waited < 8000; waited += 20) {
        int r = cosc_connect_poll(s);
        if (r > 0) { printf("[GSC] cos_chat_connect ok after %dms\n", waited); return 0; }
        if (r < 0) { printf("[GSC] cos_chat_connect FAILED after %dms\n", waited); return -1; }
        emscripten_sleep(20);
    }
    printf("[GSC] cos_chat_connect TIMEOUT\n");
    return -1;                                          // timed out
}

extern "C" int cos_chat_send(int s, const char* buf, int len, int flags) {
    (void)flags;
    return cosc_send(s, buf, len);
}

extern "C" int cos_chat_recv(int s, char* buf, int len, int flags) {
    (void)flags;
    return cosc_recv(s, buf, len);
}

// chatSocket.c's socket is used BLOCKING (no SetSockBlocking() call around connect/send/recv) -
// select() is the ONLY thing standing between a "readable" report and a recv() call, and
// ciSocketThinkRecv treats ANY recv() <= 0 as a hard disconnect (it has no EWOULDBLOCK handling).
// So this must NEVER report readable unless a following recv() is guaranteed to return real data
// or a genuine close/error - reporting readable speculatively would make every idle poll look like
// the server hung up.
//
// ciSocketSelect() calls select(FD_SETSIZE, &set, ...) with the real socket only present INSIDE
// the fd_set (via FD_SET(sock, &set)) - nfds here is just FD_SETSIZE, not a socket id. Recover the
// actual socket by scanning the fd_set with FD_ISSET (chatSocket.c always selects exactly one).
extern "C" int cos_chat_select(int nfds, void* readfds, void* writefds, void* exceptfds, void* timeout) {
    (void)nfds; (void)exceptfds; (void)timeout;
    if (writefds) return 1;                    // the JS queue absorbs sends unconditionally
    if (readfds) {
        fd_set* rs = (fd_set*)readfds;
        for (int fd = 1; fd < FD_SETSIZE && fd < 256; fd++) {
            if (FD_ISSET(fd, rs)) return cosc_readable(fd) > 0 ? 1 : 0;
        }
    }
    return 0;
}

extern "C" int cos_chat_ioctl(int s, long cmd, unsigned long* argp) {
    (void)s; (void)cmd; (void)argp; return 0;
}
extern "C" int cos_chat_setsockopt(int s, int level, int opt, const char* val, int len) {
    (void)s; (void)level; (void)opt; (void)val; (void)len; return 0;
}

extern "C" unsigned long cos_chat_inet_addr(const char* cp) {
    (void)cp;
    return 0x0100007F;   // 127.0.0.1 in network byte order - any non-INADDR_NONE value skips DNS
}

extern "C" struct hostent* cos_chat_gethostbyname(const char* name) {
    (void)name;
    return nullptr;   // never reached: cos_chat_inet_addr() above always short-circuits this
}

#endif // __EMSCRIPTEN__
