// platform/net_compat.h
// Cross-platform socket abstraction
// Replaces: <Winsock2.h>, <WS2tcpip.h>, <iphlpapi.h>

#pragma once

#include <stdint.h>

#ifdef _WIN32
    // Windows: use Winsock2
    #ifndef WIN32_LEAN_AND_MEAN
        #define WIN32_LEAN_AND_MEAN
    #endif
    #include <Winsock2.h>
    #include <WS2tcpip.h>

    typedef SOCKET PlatformSocket;
    #define PLATFORM_INVALID_SOCKET INVALID_SOCKET
    #define PLATFORM_SOCKET_ERROR   SOCKET_ERROR

#else
    // POSIX: BSD sockets
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <arpa/inet.h>
    #include <netdb.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/ioctl.h>
    #include <errno.h>
    #include <ifaddrs.h>
    #include <net/if.h>

    typedef int PlatformSocket;
    #define PLATFORM_INVALID_SOCKET (-1)
    #define PLATFORM_SOCKET_ERROR   (-1)

    // Winsock type compatibility
    typedef int SOCKET;
    #define INVALID_SOCKET (-1)
    #define SOCKET_ERROR   (-1)

    typedef struct in_addr IN_ADDR;

    // Winsock function compatibility
    #define closesocket close
    #define ioctlsocket ioctl
    #define WSAGetLastError() errno
    #define WSAEWOULDBLOCK EWOULDBLOCK
    #define WSAEINPROGRESS EINPROGRESS

    // WSAStartup/WSACleanup stubs (BSD sockets need no init)
    #ifndef _PLATFORM_WSADATA_DEFINED
    #define _PLATFORM_WSADATA_DEFINED
    typedef struct { int wVersion; int wHighVersion; } WSADATA;
    static inline int WSAStartup(unsigned short ver, WSADATA* data) { (void)ver; (void)data; return 0; }
    static inline int WSACleanup(void) { return 0; }
    #endif

    // SO_MAX_MSG_SIZE doesn't exist on POSIX; define a safe UDP max
    #ifndef SO_MAX_MSG_SIZE
        #define SO_MAX_MSG_SIZE 0x2003
    #endif

    // u_long, u_short, u_char, u_int — already defined in <sys/types.h> on POSIX
    // NOTE: On macOS 64-bit, u_long is 8 bytes (unsigned long) vs 4 on Windows.
    // Wire format structs must use uint32_t instead of u_long for compatibility.
    // For now, we use the system types to compile.

    // FIONBIO / FIONREAD
    #include <sys/ioctl.h>

#endif // _WIN32

#ifdef __cplusplus
extern "C" {
#endif

// Initialize networking (WSAStartup on Windows, no-op on POSIX)
int platform_net_init(void);

// Cleanup networking (WSACleanup on Windows, no-op on POSIX)
void platform_net_cleanup(void);

// Set socket to non-blocking mode
// Returns 0 on success, -1 on error
int platform_set_nonblocking(PlatformSocket sock, int enable);

// Get number of bytes available to read without blocking
// Returns bytes available, or -1 on error
int platform_bytes_available(PlatformSocket sock);

// Get list of local IPv4 addresses (non-loopback, up)
// Fills addrs array, returns count of addresses found
// Win32: GetAdaptersAddresses, POSIX: getifaddrs
int platform_get_local_addresses(uint32_t* addrs, int max_count);

#ifdef __cplusplus
}
#endif
