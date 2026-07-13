// platform/system_compat.h
// Cross-platform system utilities
// Replaces: GetComputerName()

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Get hostname of this machine
// Win32: GetComputerName(), POSIX: gethostname()
void platform_get_hostname(char* buf, int max_len);

#ifdef __cplusplus
}
#endif

// Compatibility: map Windows GetComputerName to platform function
#ifndef _WIN32
    #include <string.h>
    #include <stdint.h>
    static inline int GetComputerName(char* buf, uint32_t* size) {
        platform_get_hostname(buf, (int)*size);
        *size = (uint32_t)strlen(buf);
        return 1;
    }
    #define GetComputerNameA GetComputerName
#endif
