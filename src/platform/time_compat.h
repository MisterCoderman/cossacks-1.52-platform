// platform/time_compat.h
// Cross-platform time functions
// Replaces: GetTickCount(), GetLocalTime()

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Returns milliseconds since system start (monotonic)
// Win32: GetTickCount(), macOS: clock_gettime(CLOCK_MONOTONIC)
uint32_t platform_get_ticks_ms(void);

#ifdef __cplusplus
}
#endif

// Compatibility: map Windows GetTickCount() to platform function
#ifndef _WIN32
    #define GetTickCount platform_get_ticks_ms
#endif
