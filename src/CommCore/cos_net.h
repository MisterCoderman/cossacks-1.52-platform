// cos_net.h — virtual UDP for the web build (CommCore's only network dependency).
//
// CommCore speaks classic BSD UDP: two SOCK_DGRAM sockets (DATA_PORT 34000, DISCOVERY_PORT 34001),
// sendto/recvfrom with sockaddr_in, plus a 255.255.255.255 broadcast for LAN discovery. Browsers
// have none of that, so under __EMSCRIPTEN__ every socket call below is macro-redirected to the
// cos_net_* layer (WebNet.cpp), which routes datagrams through ONE of two backends chosen at run
// time:
//
//   * window.cosElectron present (Electron wrapper) -> REAL UDP via the preload bridge:
//       genuine LAN broadcast discovery + direct IP, zero servers — original 2001 semantics.
//   * otherwise (a normal browser tab)             -> WebSocket relay:
//       the relay is ONE VIRTUAL LAN (a single broadcast domain). Peers get a virtual address
//       10.77.x.x; broadcast frames reach every connected peer, so the engine's stock LAN
//       discovery/server list/join code works over the internet completely unchanged.
//
// Only the transport is swapped; CommCore logic, packet formats and ports stay untouched.

#ifndef COS_NET_H
#define COS_NET_H

#ifdef __EMSCRIPTEN__

#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __cplusplus
extern "C" {
#endif

int cos_net_socket(int af, int type, int proto);
int cos_net_close(int s);
int cos_net_bind(int s, const struct sockaddr* addr, int addrlen);
int cos_net_sendto(int s, const char* buf, int len, int flags,
                   const struct sockaddr* to, int tolen);
int cos_net_recvfrom(int s, char* buf, int len, int flags,
                     struct sockaddr* from, socklen_t* fromlen);
int cos_net_ioctl(int s, long cmd, unsigned long* argp);
int cos_net_setsockopt(int s, int level, int opt, const char* val, int len);
int cos_net_getsockopt(int s, int level, int opt, char* val, socklen_t* len);

#ifdef __cplusplus
}
#endif

// Redirect the exact call names CommCore uses. (closesocket is already #define'd to close() by
// the platform header — override it after the fact.)
#define socket(a, t, p)                cos_net_socket((a), (t), (p))
#define bind(s, a, l)                  cos_net_bind((s), (a), (l))
#define sendto(s, b, l, f, a, al)      cos_net_sendto((s), (const char*)(b), (l), (f), (a), (al))
#define recvfrom(s, b, l, f, a, al)    cos_net_recvfrom((s), (char*)(b), (l), (f), (a), (al))
#define ioctlsocket(s, c, a)           cos_net_ioctl((s), (c), (a))
#define setsockopt(s, lv, o, v, l)     cos_net_setsockopt((s), (lv), (o), (const char*)(v), (l))
#define getsockopt(s, lv, o, v, l)     cos_net_getsockopt((s), (lv), (o), (char*)(v), (l))
#ifdef closesocket
#undef closesocket
#endif
#define closesocket(s)                 cos_net_close(s)

#endif // __EMSCRIPTEN__
#endif // COS_NET_H
