// platform/Winsock2.h
// Stub: redirect to POSIX sockets on non-Windows
#pragma once

#ifdef _WIN32
    #include_next <Winsock2.h>
#else
    #include <sys/socket.h>
    #include <sys/types.h>
    #include <netinet/in.h>
    #include <arpa/inet.h>
    #include <netdb.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <errno.h>

    typedef int SOCKET;
    #define INVALID_SOCKET (-1)
    #define SOCKET_ERROR   (-1)
    #define closesocket    close
    #define ioctlsocket    ioctl
    #define WSAGetLastError() errno
    #define WSAEWOULDBLOCK EWOULDBLOCK

    #ifndef _PLATFORM_WSADATA_DEFINED
    #define _PLATFORM_WSADATA_DEFINED
    typedef struct WSAData {
        unsigned short wVersion;
        unsigned short wHighVersion;
        char szDescription[257];
        char szSystemStatus[129];
    } WSADATA;

    static inline int WSAStartup(unsigned short ver, WSADATA* data) {
        (void)ver; if(data) memset(data, 0, sizeof(WSADATA));
        return 0;
    }
    static inline int WSACleanup(void) { return 0; }
    #endif
#endif
