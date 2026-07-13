// platform/WS2tcpip.h
// Stub: redirect to POSIX on non-Windows
#pragma once

#ifdef _WIN32
    #include_next <WS2tcpip.h>
#else
    #include <netinet/in.h>
    #include <arpa/inet.h>
    #include <netdb.h>
#endif
