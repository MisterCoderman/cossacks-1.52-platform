// cos_chat_net.h — virtual TCP for the web build (GameSpy Chat SDK's only network dependency).
//
// chatSocket.c speaks classic BSD stream sockets: socket(AF_INET,SOCK_STREAM,...), connect(),
// non-blocking send()/recv(), select() to poll readiness. Browsers have none of that (no raw TCP
// API at all), so under __EMSCRIPTEN__ every socket call chatSocket.c/nonport.c makes is
// macro-redirected to the cos_chat_* layer (WebChat.cpp), which tunnels the exact same byte stream
// over a WebSocket to a real IRC-server emulator (server/cos_ircd.js) speaking the GameSpy PeerChat
// wire protocol this SDK expects (NICK/USER/JOIN/PRIVMSG/... - see chatMain.c's ciSocketSendf calls).
//
// Force-included (via a dedicated -include flag, NOT globally) only for the IChat library's own
// translation units, so this never touches CommCore's separate cos_net.h (UDP) macro scope.
// Only the transport is swapped; the IRC parsing/state machine (chatMain.c/chatHandlers.c/
// chatSocket.c) is 100% original, unmodified GameSpy SDK source.

#ifndef COS_CHAT_NET_H
#define COS_CHAT_NET_H

#ifdef __EMSCRIPTEN__

#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#ifdef __cplusplus
extern "C" {
#endif

int cos_chat_socket(int af, int type, int proto);
int cos_chat_close(int s);
int cos_chat_connect(int s, const struct sockaddr* addr, int addrlen);
int cos_chat_send(int s, const char* buf, int len, int flags);
int cos_chat_recv(int s, char* buf, int len, int flags);
int cos_chat_select(int nfds, void* readfds, void* writefds, void* exceptfds, void* timeout);
int cos_chat_ioctl(int s, long cmd, unsigned long* argp);
int cos_chat_setsockopt(int s, int level, int opt, const char* val, int len);
unsigned long cos_chat_inet_addr(const char* cp);
struct hostent* cos_chat_gethostbyname(const char* name);

#ifdef __cplusplus
}
#endif

#define socket(a, t, p)                cos_chat_socket((a), (t), (p))
#define connect(s, a, l)               cos_chat_connect((s), (a), (l))
#define send(s, b, l, f)               cos_chat_send((s), (const char*)(b), (l), (f))
#define recv(s, b, l, f)               cos_chat_recv((s), (char*)(b), (l), (f))
#define select(n, r, w, e, t)          cos_chat_select((n), (void*)(r), (void*)(w), (void*)(e), (void*)(t))
#define ioctlsocket(s, c, a)           cos_chat_ioctl((s), (c), (a))
#define setsockopt(s, lv, o, v, l)     cos_chat_setsockopt((s), (lv), (o), (const char*)(v), (l))
#define inet_addr(cp)                  cos_chat_inet_addr(cp)
#define gethostbyname(n)               cos_chat_gethostbyname(n)
#ifdef closesocket
#undef closesocket
#endif
#define closesocket(s)                 cos_chat_close(s)

#endif // __EMSCRIPTEN__
#endif // COS_CHAT_NET_H
