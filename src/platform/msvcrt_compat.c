// msvcrt_compat.c
// Provides C11 functions missing from msvcrt.dll (used on Windows XP/7)
// GCC's libstdc++ <cstdlib> expects these when _GLIBCXX_HAVE_QUICK_EXIT is set,
// but msvcrt.dll doesn't export them. We provide real implementations.

#if defined(_WIN32) && !defined(_MSC_VER) && !defined(_UCRT)

#include <stdlib.h>
#include <process.h>

void __cdecl quick_exit(int status) {
    _exit(status);
}

int __cdecl at_quick_exit(void (__cdecl *func)(void)) {
    (void)func;
    return 0;
}

#endif
