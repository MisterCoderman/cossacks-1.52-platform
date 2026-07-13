# Platform abstraction layer
# Provides cross-platform implementations for OS-specific APIs

set(PLATFORM_HEADERS
    platform.h
    platform_types.h
    net_compat.h
    time_compat.h
    system_compat.h
    config_compat.h
)

set(PLATFORM_SOURCES
    platform.cpp
)

# MinGW with msvcrt.dll needs stubs for C11 functions missing from old CRT
# and Win32-based pthread to avoid UCRT-dependent libwinpthread-1.dll
if(WIN32 AND NOT MSVC)
    list(APPEND PLATFORM_SOURCES msvcrt_compat.c win32_pthread.c)
endif()

add_library(platform_compat STATIC ${PLATFORM_SOURCES} ${PLATFORM_HEADERS})
target_include_directories(platform_compat PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if(WIN32)
    target_link_libraries(platform_compat PRIVATE ws2_32 iphlpapi advapi32)
elseif(APPLE)
    # macOS: no extra libs needed, BSD sockets are in libc
elseif(UNIX)
    # Linux: may need -lrt for clock_gettime on older glibc
    target_link_libraries(platform_compat PRIVATE rt)
endif()
