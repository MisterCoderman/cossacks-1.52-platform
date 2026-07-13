// platform/crtdbg.h
// Stub for MSVC CRT debug header
// On non-Windows, debug assertions map to standard assert()

#pragma once

#ifndef _INC_CRTDBG
#define _INC_CRTDBG

#include <assert.h>

#ifndef _ASSERT
    #define _ASSERT(expr) assert(expr)
#endif

#ifndef _ASSERTE
    #define _ASSERTE(expr) assert(expr)
#endif

#ifndef _CrtSetDbgFlag
    #define _CrtSetDbgFlag(x) ((int)0)
#endif

#ifndef _CrtSetReportMode
    #define _CrtSetReportMode(t, f) ((int)0)
#endif

#ifndef _CRT_WARN
    #define _CRT_WARN 0
#endif

#ifndef _CRTDBG_MODE_DEBUG
    #define _CRTDBG_MODE_DEBUG 0
#endif

#ifndef _CRTDBG_ALLOC_MEM_DF
    #define _CRTDBG_ALLOC_MEM_DF 0
#endif

#ifndef _CRTDBG_LEAK_CHECK_DF
    #define _CRTDBG_LEAK_CHECK_DF 0
#endif

#endif // _INC_CRTDBG
