set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_PROCESSOR x86)

set(CMAKE_C_COMPILER i686-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER i686-w64-mingw32-g++)
set(CMAKE_RC_COMPILER i686-w64-mingw32-windres)

set(CMAKE_FIND_ROOT_PATH /opt/homebrew/i686-w64-mingw32)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# Link against msvcrt.dll (available since XP) instead of UCRT (Windows 10+ only)
# -no-pthread: prevent linking UCRT-dependent libwinpthread-1.dll (we provide our own Win32-based pthread in platform/win32_pthread.c)
set(CMAKE_C_FLAGS_INIT "-mcrtdll=msvcrt-os -no-pthread")
set(CMAKE_CXX_FLAGS_INIT "-mcrtdll=msvcrt-os -no-pthread -include ${CMAKE_CURRENT_LIST_DIR}/../platform/msvcrt_compat.h")
