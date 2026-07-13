// platform/windows.h
// Redirect stub: on non-Windows, include the platform abstraction layer
#pragma once

#ifdef _WIN32
    #include_next <windows.h>
#else
    #include "platform.h"
#endif
