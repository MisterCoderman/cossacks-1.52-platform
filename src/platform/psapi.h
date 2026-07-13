// platform/psapi.h
// Stub for Windows Process Status API
#pragma once

#ifdef _WIN32
    #include_next <psapi.h>
#else

#include <stdint.h>

typedef struct _PROCESS_MEMORY_COUNTERS {
    uint32_t cb;
    uint32_t PageFaultCount;
    size_t PeakWorkingSetSize;
    size_t WorkingSetSize;
    size_t QuotaPeakPagedPoolUsage;
    size_t QuotaPagedPoolUsage;
    size_t QuotaPeakNonPagedPoolUsage;
    size_t QuotaNonPagedPoolUsage;
    size_t PagefileUsage;
    size_t PeakPagefileUsage;
} PROCESS_MEMORY_COUNTERS;

static inline void* GetCurrentProcess(void) { return (void*)-1; }

static inline int GetProcessMemoryInfo(void* hProcess, PROCESS_MEMORY_COUNTERS* ppsmemCounters, uint32_t cb) {
    (void)hProcess; (void)cb;
    if(ppsmemCounters) {
        memset(ppsmemCounters, 0, sizeof(PROCESS_MEMORY_COUNTERS));
    }
    return 1;
}

#endif
