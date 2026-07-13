// msvcrt_compat.h
// Declarations for C11 functions absent from msvcrt.dll
// Must be force-included (-include) BEFORE any standard C/C++ headers
// so that GCC's <cstdlib> can find ::quick_exit and ::at_quick_exit

#ifndef _MSVCRT_COMPAT_H
#define _MSVCRT_COMPAT_H

#if defined(_WIN32) && !defined(_MSC_VER) && !defined(_UCRT)
#ifdef __cplusplus
extern "C" {
#endif
void __cdecl quick_exit(int) __attribute__((__noreturn__));
int __cdecl at_quick_exit(void (__cdecl *)(void));
#ifdef __cplusplus
}
#endif
#endif

#endif // _MSVCRT_COMPAT_H
