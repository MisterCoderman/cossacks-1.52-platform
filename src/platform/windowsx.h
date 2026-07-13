// platform/windowsx.h
// Stub for Windows extensions header (windowsx.h)
#pragma once

#ifdef _WIN32
    #include_next <windowsx.h>
#else
    #include "platform.h"
    // windowsx.h provides message cracker macros etc. — stub out what's needed
    #ifndef GlobalAllocPtr
        #include <stdlib.h>
        #define GlobalAllocPtr(flags, size) malloc(size)
        #define GlobalFreePtr(ptr)          free(ptr)
    #endif
#endif
