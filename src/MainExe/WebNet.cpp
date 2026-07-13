// WebNet.cpp — cos_net virtual-UDP implementation (see src/CommCore/cos_net.h).
//
// Two run-time backends behind one BSD-ish API (ONE wasm build serves both):
//   Electron (window.cosElectron)  -> real UDP datagrams via the preload bridge (LAN broadcast,
//                                     direct IP; addresses are genuine IPv4).
//   Browser tab                    -> WebSocket relay = one virtual LAN. Every peer gets an id;
//                                     virtual address 10.77.hi.lo <-> peer id. Broadcast reaches
//                                     everyone connected, so the engine's LAN discovery works
//                                     across the internet unchanged.
//
// The JS side (web/cos_net.js library + Electron preload) keeps per-socket receive QUEUES; the
// engine polls with non-blocking recvfrom exactly like it polled real sockets.

#ifdef __EMSCRIPTEN__

#include <emscripten.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <sys/socket.h>
#include <netinet/in.h>

extern "C" {
    // web/cos_net.js (js-library): backend-agnostic entry points (they dispatch to WS or Electron)
    int  cosn_socket(void);                                        // -> sock id (>0) or -1
    void cosn_close(int s);
    int  cosn_bind(int s, int port);                               // engine port (34000/34001)
    int  cosn_sendto(int s, const void* buf, int len, unsigned ip, int port);
    int  cosn_recvfrom(int s, void* buf, int cap, unsigned* ip, int* port); // -1 if empty
}

extern "C" int cos_net_socket(int af, int type, int proto) {
    (void)af; (void)type; (void)proto;
    int s = cosn_socket();
    return s > 0 ? s : -1;                        // -1 == INVALID_SOCKET
}

extern "C" int cos_net_close(int s) { cosn_close(s); return 0; }

extern "C" int cos_net_bind(int s, const struct sockaddr* addr, int addrlen) {
    (void)addrlen;
    const struct sockaddr_in* a = (const struct sockaddr_in*)addr;
    int port = a ? (int)__builtin_bswap16(a->sin_port) : 0;
    return cosn_bind(s, port) == 0 ? 0 : -1;
}

extern "C" int cos_net_sendto(int s, const char* buf, int len, int flags,
                              const struct sockaddr* to, int tolen) {
    (void)flags; (void)tolen;
    const struct sockaddr_in* a = (const struct sockaddr_in*)to;
    if (!a) return -1;
    unsigned ip = __builtin_bswap32(a->sin_addr.s_addr);   // host-order IPv4
    int port = (int)__builtin_bswap16(a->sin_port);
    return cosn_sendto(s, buf, len, ip, port);
}

extern "C" int cos_net_recvfrom(int s, char* buf, int len, int flags,
                                struct sockaddr* from, socklen_t* fromlen) {
    (void)flags;
    unsigned ip = 0; int port = 0;
    int n = cosn_recvfrom(s, buf, len, &ip, &port);
    if (n < 0) return -1;                          // engine treats <0 + nonblocking as "no data"
    if (from && fromlen && *fromlen >= (socklen_t)sizeof(struct sockaddr_in)) {
        struct sockaddr_in* a = (struct sockaddr_in*)from;
        memset(a, 0, sizeof(*a));
        a->sin_family = AF_INET;
        a->sin_addr.s_addr = __builtin_bswap32(ip);
        a->sin_port = __builtin_bswap16((uint16_t)port);
        *fromlen = (socklen_t)sizeof(struct sockaddr_in);
    }
    return n;
}

extern "C" int cos_net_ioctl(int s, long cmd, unsigned long* argp) {
    (void)s; (void)cmd; (void)argp; return 0;      // FIONBIO: queues are always non-blocking
}
extern "C" int cos_net_setsockopt(int s, int level, int opt, const char* val, int len) {
    (void)s;(void)level;(void)opt;(void)val;(void)len; return 0;   // SO_BROADCAST etc: implicit
}
extern "C" int cos_net_getsockopt(int s, int level, int opt, char* val, socklen_t* len) {
    (void)s;(void)level;
    if (val && len && *len >= 4) {                 // SO_MAX_MSG_SIZE probe in CommInet
        *(int*)val = 1400;
        *len = 4;
        return 0;
    }
    (void)opt; return 0;
}

#endif // __EMSCRIPTEN__
