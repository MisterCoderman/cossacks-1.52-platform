// platform/platform_types.h
// Fixed-width types and Windows type compatibility for non-Windows platforms

#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>

#ifdef _WIN32
    // On Windows, use native types
    #include <windows.h>
#else

// =============================================================================
// SECTION 1: Standard C library includes (needed by everything below)
// =============================================================================
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <dlfcn.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <glob.h>
#include <libgen.h>

// =============================================================================
// SECTION 2: Basic type definitions
// =============================================================================
typedef int BOOL;
typedef uint32_t DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef BYTE* LPBYTE;
typedef void VOID;
typedef void* LPVOID;
typedef const void* LPCVOID;
typedef char* LPSTR;
typedef const char* LPCSTR;
typedef void* HANDLE;
typedef void* HWND;
typedef void* HINSTANCE;
typedef void* HMODULE;
typedef int32_t LONG;   // Windows LONG is always 32-bit (not `long` which is 64-bit on LP64)

// DLL reason codes for DllMain
#define DLL_PROCESS_ATTACH 1
#define DLL_THREAD_ATTACH  2
#define DLL_THREAD_DETACH  3
#define DLL_PROCESS_DETACH 0
typedef uint32_t ULONG;
typedef int INT;
typedef unsigned int UINT;
typedef long long LONGLONG;
typedef char CHAR;
typedef const char* LPCCH;
typedef unsigned char byte;
typedef short small;
typedef uint32_t LCID;
typedef unsigned long DWORD_PTR;
typedef unsigned long SIZE_T;
typedef unsigned short WCHAR;
typedef void* HGLOBAL;

// =============================================================================
// SECTION 3: Basic constants (needed by types and stubs below)
// =============================================================================
#ifndef TRUE
    #define TRUE 1
#endif
#ifndef FALSE
    #define FALSE 0
#endif
#ifndef NULL
    #define NULL 0
#endif

#define INVALID_HANDLE_VALUE ((void*)(intptr_t)-1)

// Heap validation stubs (Windows-only API, no-op on other platforms)
static inline HANDLE GetProcessHeap(void) { return (HANDLE)0; }
static inline int HeapValidate(HANDLE h, unsigned int f, const void* p) { (void)h; (void)f; (void)p; return 1; }

#ifndef MAX_PATH
    #define MAX_PATH 260
#endif

// =============================================================================
// SECTION 4: Compound types (depend on basic types + MAX_PATH)
// =============================================================================
typedef struct _SYSTEMTIME {
    WORD wYear, wMonth, wDayOfWeek, wDay;
    WORD wHour, wMinute, wSecond, wMilliseconds;
} SYSTEMTIME;

typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} FILETIME;

typedef union _LARGE_INTEGER {
    struct { DWORD LowPart; long HighPart; };
    long long QuadPart;
} LARGE_INTEGER;

typedef struct _WIN32_FIND_DATA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    char cFileName[MAX_PATH];
    char cAlternateFileName[14];
} WIN32_FIND_DATAA, WIN32_FIND_DATA;

// =============================================================================
// SECTION 5: Calling conventions and compiler compat macros
// =============================================================================
#define CALLBACK
#define WINAPI
#define APIENTRY
#define PASCAL
#define _cdecl
#define __cdecl
#define __stdcall
#define _stdcall
#define __forceinline inline __attribute__((always_inline))
#define __inline inline
#define _inline inline
#define FAR
#define NEAR
#define far
#define near
#define __declspec(x)
#define dllimport
#define dllexport
#define _ASSERT(x) ((void)0)
#define _ASSERTE(x) ((void)0)

// =============================================================================
// SECTION 6: String compat macros
// =============================================================================
#define _stricmp strcasecmp
#define _strnicmp strncasecmp
#define stricmp strcasecmp
#define strnicmp strncasecmp
#define _snprintf snprintf
#define sprintf_s snprintf

static inline char* _strupr(char* s) { for(char*p=s;*p;p++) *p=(*p>='a'&&*p<='z')?*p-32:*p; return s; }
static inline char* _strlwr(char* s) { for(char*p=s;*p;p++) *p=(*p>='A'&&*p<='Z')?*p+32:*p; return s; }
static inline char* _itoa(int val, char* buf, int radix) {
    if (radix == 16) sprintf(buf, "%x", val);
    else if (radix == 8) sprintf(buf, "%o", val);
    else sprintf(buf, "%d", val);
    return buf;
}
#define strupr _strupr
#define strlwr _strlwr

// =============================================================================
// SECTION 7: Memory macros
// =============================================================================
#define ZeroMemory(dest, len) memset((dest), 0, (len))
#define CopyMemory(dest, src, len) memcpy((dest), (src), (len))
#define FillMemory(dest, len, val) memset((dest), (val), (len))

#ifndef MAKEWORD
    #define MAKEWORD(a, b) ((WORD)(((BYTE)(a)) | ((WORD)((BYTE)(b))) << 8))
#endif

#ifndef max
    #define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
#ifndef min
    #define min(a,b) (((a) < (b)) ? (a) : (b))
#endif

// =============================================================================
// SECTION 8: Win32 API stubs (depend on types + constants above)
// =============================================================================

// --- Time ---
static inline void GetLocalTime(SYSTEMTIME* st) {
    if(st) memset(st, 0, sizeof(SYSTEMTIME));
}
static inline void GetSystemTime(SYSTEMTIME* st) {
    if(st) memset(st, 0, sizeof(SYSTEMTIME));
}
static inline int QueryPerformanceCounter(LARGE_INTEGER* pc) {
    if(pc) pc->QuadPart = 0; return 1;
}
static inline int QueryPerformanceFrequency(LARGE_INTEGER* pf) {
    if(pf) pf->QuadPart = 1000000; return 1;
}
static inline int SystemTimeToFileTime(const SYSTEMTIME* st, FILETIME* ft) {
    if(ft) { ft->dwLowDateTime = 0; ft->dwHighDateTime = 0; }
    (void)st; return 1;
}
static inline int FileTimeToSystemTime(const FILETIME* ft, SYSTEMTIME* st) {
    if(st) memset(st, 0, sizeof(SYSTEMTIME));
    (void)ft; return 1;
}

// --- File operations ---
#define GENERIC_READ        0x80000000
#define GENERIC_WRITE       0x40000000
#define FILE_SHARE_READ     0x00000001
#define OPEN_EXISTING       3
#define CREATE_ALWAYS       2
#define FILE_ATTRIBUTE_NORMAL 0x80
#define FILE_ATTRIBUTE_DIRECTORY 0x10

static inline HANDLE CreateFileA(const char* name, DWORD access, DWORD share,
    void* sa, DWORD disp, DWORD flags, void* tmpl) {
    (void)share; (void)sa; (void)flags; (void)tmpl;
    /* Convert Windows backslash paths to Unix forward slashes */
    char fixedPath[1024];
    size_t i = 0;
    for (; name[i] && i < sizeof(fixedPath) - 1; i++)
        fixedPath[i] = (name[i] == '\\') ? '/' : name[i];
    fixedPath[i] = 0;
    int oflags = 0;
    if ((access & 0x80000000) && (access & 0x40000000)) oflags = O_RDWR;
    else if (access & 0x40000000) oflags = O_WRONLY;
    else oflags = O_RDONLY;
    if (disp == 2) oflags |= O_CREAT | O_TRUNC; /* CREATE_ALWAYS */
    else if (disp == 1) oflags |= O_CREAT; /* CREATE_NEW */
    int fd = open(fixedPath, oflags, 0666);
    if (fd < 0) return INVALID_HANDLE_VALUE;
    return (HANDLE)(intptr_t)(fd + 1); /* offset by 1 so fd 0 != NULL */
}
#define CreateFile CreateFileA
static inline int _handle_to_fd(HANDLE h) { return (int)(intptr_t)h - 1; }

static inline int GetFileTime(void* h, FILETIME* c, FILETIME* a, FILETIME* w) {
    (void)h; if(c) memset(c,0,8); if(a) memset(a,0,8); if(w) memset(w,0,8); return 1;
}
static inline int SetFileTime(void* h, const FILETIME* c, const FILETIME* a, const FILETIME* w) {
    (void)h; (void)c; (void)a; (void)w; return 1;
}
// FindFirstFile/FindNextFile via glob()
typedef struct _FIND_CONTEXT {
    glob_t gl;
    size_t idx;
} _FIND_CONTEXT;

static inline void _win_pattern_to_glob(const char* pat, char* out, size_t outsz) {
    /* copy pattern, replace backslashes with forward slashes */
    size_t i = 0;
    for (; pat[i] && i < outsz - 1; i++)
        out[i] = (pat[i] == '\\') ? '/' : pat[i];
    out[i] = 0;
}

static inline void _fill_find_data(WIN32_FIND_DATAA* data, const char* path) {
    memset(data, 0, sizeof(*data));
    const char* name = strrchr(path, '/');
    name = name ? name + 1 : path;
    strncpy(data->cFileName, name, MAX_PATH - 1);
    struct stat st;
    if (stat(path, &st) == 0) {
        data->nFileSizeLow = (DWORD)(st.st_size & 0xFFFFFFFF);
        data->nFileSizeHigh = (DWORD)(st.st_size >> 32);
        if (S_ISDIR(st.st_mode)) data->dwFileAttributes = FILE_ATTRIBUTE_DIRECTORY;
    }
}

static inline void* FindFirstFileA(const char* pattern, WIN32_FIND_DATAA* data) {
    char gpat[MAX_PATH];
    _win_pattern_to_glob(pattern, gpat, MAX_PATH);
    _FIND_CONTEXT* ctx = (_FIND_CONTEXT*)malloc(sizeof(_FIND_CONTEXT));
    if (!ctx) return INVALID_HANDLE_VALUE;
    int ret = glob(gpat, GLOB_NOSORT, NULL, &ctx->gl);
    if (ret != 0) memset(&ctx->gl, 0, sizeof(ctx->gl));
#ifdef __EMSCRIPTEN__
    /* User-written files (saves, replays, options) live under the persistent /local mount in
     * CANONICAL form (UPPERCASE, forward slashes) - see GSCset gWriteOpen / Gopen. A relative
     * enumeration like "*.sav" or "Autorecord\*.rec" must therefore ALSO scan
     * /local/<UPPER(pattern)> or the Load dialogs never see what was saved. */
    if (gpat[0] != '/') {
        char lpat[MAX_PATH + 16];
        int li = 0;
        lpat[li++]='/'; lpat[li++]='l'; lpat[li++]='o'; lpat[li++]='c'; lpat[li++]='a'; lpat[li++]='l'; lpat[li++]='/';
        for (const char* q = gpat; *q && li < (int)sizeof(lpat) - 1; q++) {
            char ch = *q;
            if (ch >= 'a' && ch <= 'z') ch -= 32;
            lpat[li++] = ch;
        }
        lpat[li] = 0;
        glob(lpat, GLOB_NOSORT | (ctx->gl.gl_pathc ? GLOB_APPEND : 0), NULL, &ctx->gl);
    }
#endif
    if (ctx->gl.gl_pathc == 0) {
        globfree(&ctx->gl);
        free(ctx);
        return INVALID_HANDLE_VALUE;
    }
    ctx->idx = 0;
    _fill_find_data(data, ctx->gl.gl_pathv[0]);
    ctx->idx = 1;
    return (void*)ctx;
}
static inline int FindNextFileA(void* h, WIN32_FIND_DATAA* data) {
    _FIND_CONTEXT* ctx = (_FIND_CONTEXT*)h;
    if (!ctx || ctx->idx >= ctx->gl.gl_pathc) return 0;
    _fill_find_data(data, ctx->gl.gl_pathv[ctx->idx]);
    ctx->idx++;
    return 1;
}
static inline int FindClose(void* h) {
    if (h && h != INVALID_HANDLE_VALUE) {
        _FIND_CONTEXT* ctx = (_FIND_CONTEXT*)h;
        globfree(&ctx->gl); free(ctx);
    }
    return 1;
}
#define FindFirstFile FindFirstFileA
#define FindNextFile FindNextFileA

static inline int DeleteFileA(const char* path) { return unlink(path) == 0; }
#define DeleteFile DeleteFileA
static inline int CloseHandle(void* h) {
    if (h && h != INVALID_HANDLE_VALUE) {
        int fd = _handle_to_fd(h);
        if (fd >= 0) close(fd);
    }
    return 1;
}
static inline const char* GetCommandLineA(void) { return ""; }

// --- Unicode conversion stubs ---
#define CP_UTF8 65001
static inline int WideCharToMultiByte(UINT cp, DWORD flags, const WCHAR* ws, int wlen,
    char* mb, int mblen, const char* defChar, BOOL* usedDef) {
    (void)cp; (void)flags; (void)ws; (void)wlen; (void)defChar; (void)usedDef;
    if(mb && mblen > 0) mb[0] = 0;
    return 0;
}
static inline int MultiByteToWideChar(UINT cp, DWORD flags, const char* mb, int mblen,
    WCHAR* ws, int wslen) {
    (void)cp; (void)flags; (void)mb; (void)mblen;
    if(ws && wslen > 0) ws[0] = 0;
    return 0;
}

// --- INI files: real implementation in platform.cpp, backed by /local (persisted via IDBFS).
// The old stubs discarded every write, so NO settings (audio volumes, video mode, options) survived.
#ifdef __cplusplus
extern "C" {
#endif
UINT GetPrivateProfileIntA(const char* section, const char* key, int def, const char* file);
int  WritePrivateProfileStringA(const char* section, const char* key, const char* val, const char* file);
DWORD GetPrivateProfileStringA(const char* section, const char* key, const char* def,
    char* out, DWORD size, const char* file);
#ifdef __cplusplus
}
#endif
#define GetPrivateProfileInt GetPrivateProfileIntA
#define WritePrivateProfileString WritePrivateProfileStringA
#define GetPrivateProfileString GetPrivateProfileStringA

// --- Library loading ---
// AI/mission plugin DLLs are statically-recompiled x86 running in the cos_x86
// guest subsystem; route them there, falling back to dlopen for anything else.
#ifdef __cplusplus
extern "C" {
#endif
void* cos_LoadLibraryA(const char* name);
void* cos_GetProcAddress(void* handle, const char* proc);
#ifdef __cplusplus
}
#endif
/* Pure WASM: plugin DLLs (AI/missions) are statically recompiled and resolved by
   cos_LoadLibraryA/cos_GetProcAddress. No dlopen/.so; anything not in the
   recompiled manifest just returns NULL. */
static inline void* LoadLibraryA(const char* path) {
    return cos_LoadLibraryA(path);
}
static inline int FreeLibrary(void* lib) {
    (void)lib; return 1;  /* pooled cos plugin handles; nothing to unload */
}
#define LoadLibrary LoadLibraryA
#define GetProcAddress cos_GetProcAddress

// --- Keyboard / Mouse ---
#define VK_CONTROL  0x11
#define VK_SHIFT    0x10
#define VK_MENU     0x12
#define VK_SCROLL   0x91
#define VK_LEFT     0x25
#define VK_UP       0x26
#define VK_RIGHT    0x27
#define VK_DOWN     0x28
#define VK_BACK     0x08
#define VK_RETURN   0x0D
#define VK_INSERT   0x2D
#define VK_DELETE   0x2E
#define VK_HOME     0x24
#define VK_END      0x23
#define VK_PRIOR    0x21
#define VK_NEXT     0x22
#define VK_F1       0x70
#define VK_F2       0x71
#define VK_F3       0x72
#define VK_F4       0x73
#define VK_F5       0x74
#define VK_F6       0x75
#define VK_F7       0x76
#define VK_F8       0x77
#define VK_F9       0x78
#define VK_F10      0x79
#define VK_NUMPAD0  0x60
#define VK_NUMPAD1  0x61
#define VK_NUMPAD2  0x62
#define VK_NUMPAD3  0x63
#define VK_NUMPAD4  0x64
#define VK_NUMPAD5  0x65
#define VK_NUMPAD6  0x66
#define VK_NUMPAD7  0x67
#define VK_NUMPAD8  0x68
#define VK_NUMPAD9  0x69
#define MK_LBUTTON  0x0001
#define MK_RBUTTON  0x0002

extern short GetKeyState(int nVirtKey);

// --- Window styles (unused on macOS, but some code references them) ---
#define WS_OVERLAPPED   0x00000000
#define WS_BORDER       0x00800000
#define WS_CAPTION      0x00C00000
#define WS_SYSMENU      0x00080000
#define WS_MINIMIZEBOX  0x00020000

// --- MessageBox ---
static inline int MessageBoxA(void* hwnd, const char* text, const char* caption, unsigned int type) {
    fprintf(stderr, "[%s] %s\n", caption ? caption : "Error", text ? text : "");
    (void)hwnd; (void)type;
    return 0;
}
#define MessageBox MessageBoxA
#define MB_OK           0
#define MB_ICONERROR    0x10
#define MB_ICONWARNING  0x30
#define MB_YESNO        4
#define MB_TOPMOST      0x40000
#define IDYES           6
#define IDNO            7

// --- Locale ---
#define LOCALE_SISO639LANGNAME 0x59
static inline unsigned short GetSystemDefaultUILanguage(void) { return 0x0409; }
static inline LCID GetSystemDefaultLCID(void) { return 0x0409; }
static inline int GetLocaleInfoA(LCID l, uint32_t t, char* d, int s) {
    (void)l; (void)t; if(d&&s>0){d[0]='e';d[1]='n';d[2]=0;} return 3;
}
#define GetLocaleInfo GetLocaleInfoA

// --- Additional types ---
typedef long LRESULT;
typedef uintptr_t WPARAM;
typedef intptr_t LPARAM;
typedef DWORD* LPDWORD;
typedef void* FARPROC;  // dlsym returns void*
typedef void* HKEY;

typedef struct tagRECT { LONG left, top, right, bottom; } RECT;
typedef RECT* LPRECT;

typedef struct tagSTARTUPINFOA {
    DWORD cb; LPSTR lpReserved; LPSTR lpDesktop; LPSTR lpTitle;
    DWORD dwX, dwY, dwXSize, dwYSize;
    DWORD dwXCountChars, dwYCountChars, dwFillAttribute, dwFlags;
    WORD wShowWindow; WORD cbReserved2; LPBYTE lpReserved2;
    HANDLE hStdInput, hStdOutput, hStdError;
} STARTUPINFOA;

typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess, hThread; DWORD dwProcessId, dwThreadId;
} PROCESS_INFORMATION;

typedef struct tagBITMAPINFOHEADER {
    DWORD biSize; LONG biWidth; LONG biHeight; WORD biPlanes; WORD biBitCount;
    DWORD biCompression; DWORD biSizeImage; LONG biXPelsPerMeter; LONG biYPelsPerMeter;
    DWORD biClrUsed; DWORD biClrImportant;
} BITMAPINFOHEADER;
#define BI_RGB 0

typedef struct tagDEVMODE {
    char dmDeviceName[32]; WORD dmSpecVersion; WORD dmDriverVersion; WORD dmSize;
    WORD dmDriverExtra; DWORD dmFields; LONG dmPelsWidth; LONG dmPelsHeight;
    DWORD dmBitsPerPel; DWORD dmDisplayFrequency;
} DEVMODEA, DEVMODE;

// --- Window messages ---
#define WM_ACTIVATE     0x0006
#define WM_ACTIVATEAPP  0x001C
#define WM_SETFOCUS     0x0007
#define WA_ACTIVE       1

// --- Window styles (extended) ---
#define WS_MAXIMIZEBOX  0x00010000
#define WS_THICKFRAME   0x00040000

// --- SetWindowPos flags ---
#define SWP_NOSIZE       0x0001
#define SWP_NOMOVE       0x0002
#define SWP_NOZORDER     0x0004
#define SWP_NOACTIVATE   0x0010
#define SWP_FRAMECHANGED 0x0020

// --- Get/SetWindowLong ---
#define GWL_STYLE (-16)
#define GWL_EXSTYLE (-20)
static inline LONG GetWindowLongA(HWND h, int idx) { (void)h; (void)idx; return 0; }
static inline LONG SetWindowLongA(HWND h, int idx, LONG val) { (void)h; (void)idx; (void)val; return 0; }
#define GetWindowLong GetWindowLongA
#define SetWindowLong SetWindowLongA
static inline int SetWindowPos(HWND h, HWND after, int x, int y, int cx, int cy, UINT f) {
    (void)h; (void)after; (void)x; (void)y; (void)cx; (void)cy; (void)f; return 1;
}
static inline int SetForegroundWindow(HWND h) { (void)h; return 1; }
static inline HWND SetActiveWindow(HWND h) { (void)h; return h; }
static inline HWND GetActiveWindow(void) { return NULL; }
static inline int BringWindowToTop(HWND h) { (void)h; return 1; }
static inline int PostMessage(HWND h, UINT msg, WPARAM w, LPARAM l) {
    (void)h; (void)msg; (void)w; (void)l; return 1;
}
static inline int GetClientRect(HWND h, RECT* r) {
    (void)h; if(r) memset(r, 0, sizeof(RECT)); return 1;
}
static inline int AdjustWindowRect(RECT* r, DWORD style, int menu) {
    (void)r; (void)style; (void)menu; return 1;
}
static inline int EnumDisplaySettingsA(const char* dev, DWORD mode, DEVMODEA* dm) {
    (void)dev; (void)mode; if(dm) memset(dm, 0, sizeof(DEVMODEA)); return 0;
}
#define EnumDisplaySettings EnumDisplaySettingsA
#define ENUM_CURRENT_SETTINGS ((DWORD)-1)
static inline int CreateProcessA(const char* app, const char* cmd, void* pa, void* ta,
    int inherit, DWORD flags, void* env, const char* dir, STARTUPINFOA* si, PROCESS_INFORMATION* pi) {
    (void)app; (void)cmd; (void)pa; (void)ta; (void)inherit; (void)flags;
    (void)env; (void)dir; (void)si; (void)pi; return 0;
}
#define CreateProcess CreateProcessA

// --- File I/O stubs ---
#define FILE_BEGIN   0
#define FILE_CURRENT 1
#define FILE_END     2
#define FILE_SHARE_WRITE 0x00000002
#define GENERIC_READ     0x80000000
#define FILE_MAP_READ    0x0004
#define PAGE_READONLY    0x02
static inline int ReadFile(HANDLE h, void* buf, DWORD toRead, DWORD* bytesRead, void* ov) {
    (void)ov;
    int fd = _handle_to_fd(h);
    ssize_t r = read(fd, buf, toRead);
    if (r < 0) { if(bytesRead) *bytesRead = 0; return 0; }
    if(bytesRead) *bytesRead = (DWORD)r;
    return 1;
}
static inline int WriteFile(HANDLE h, const void* buf, DWORD toWrite, DWORD* written, void* ov) {
    (void)ov;
    int fd = _handle_to_fd(h);
    ssize_t w = write(fd, buf, toWrite);
    if (w < 0) { if(written) *written = 0; return 0; }
    if(written) *written = (DWORD)w;
    return 1;
}
static inline DWORD GetFileSize(HANDLE h, DWORD* high) {
    int fd = _handle_to_fd(h);
    struct stat st;
    if (fstat(fd, &st) != 0) { if(high) *high = 0; return 0xFFFFFFFF; }
    if(high) *high = (DWORD)(st.st_size >> 32);
    return (DWORD)(st.st_size & 0xFFFFFFFF);
}
static inline DWORD SetFilePointer(HANDLE h, LONG dist, LONG* high, DWORD method) {
    int fd = _handle_to_fd(h);
    int whence = (method == 0) ? SEEK_SET : (method == 1) ? SEEK_CUR : SEEK_END;
    off_t offset = (off_t)dist;
    if (high) offset |= ((off_t)(*high)) << 32;
    off_t res = lseek(fd, offset, whence);
    if (res == (off_t)-1) return 0xFFFFFFFF;
    if (high) *high = (LONG)(res >> 32);
    return (DWORD)(res & 0xFFFFFFFF);
}

/* File mapping: store fd in a small struct, mmap in MapViewOfFile */
typedef struct _MMAP_CONTEXT { int fd; size_t size; } _MMAP_CONTEXT;
static inline HANDLE CreateFileMappingA(HANDLE h, void* sa, DWORD prot, DWORD maxHigh, DWORD maxLow, const char* name) {
    (void)sa; (void)prot; (void)maxHigh; (void)maxLow; (void)name;
    int fd = _handle_to_fd(h);
    struct stat st;
    if (fstat(fd, &st) != 0) return NULL;
    _MMAP_CONTEXT* ctx = (_MMAP_CONTEXT*)malloc(sizeof(_MMAP_CONTEXT));
    if (!ctx) return NULL;
    ctx->fd = fd;
    ctx->size = (size_t)st.st_size;
    return (HANDLE)ctx;
}
static inline void* MapViewOfFile(HANDLE h, DWORD access, DWORD offHigh, DWORD offLow, size_t bytes) {
    (void)access;
    _MMAP_CONTEXT* ctx = (_MMAP_CONTEXT*)h;
    if (!ctx) return NULL;
    off_t offset = ((off_t)offHigh << 32) | offLow;
    size_t len = bytes ? bytes : ctx->size;
    void* p = mmap(NULL, len, PROT_READ, MAP_PRIVATE, ctx->fd, offset);
    return (p == MAP_FAILED) ? NULL : p;
}
static inline int UnmapViewOfFile(const void* p) {
    /* We don't track size; use a large upper bound. munmap with wrong size is
       handled by the kernel — it unmaps the pages that were mapped. */
    if (p) munmap((void*)p, 256 * 1024 * 1024);
    return 1;
}
#define CreateFileMapping CreateFileMappingA

// --- Module stubs ---
static inline HMODULE GetModuleHandleA(const char* name) { (void)name; return (HMODULE)RTLD_DEFAULT; }
static inline DWORD GetModuleFileNameA(HMODULE h, char* buf, DWORD sz) {
    (void)h; if(buf && sz > 0) buf[0] = 0; return 0;
}
#define GetModuleHandle GetModuleHandleA
#define GetModuleFileName GetModuleFileNameA

// --- Process ---
static inline void ExitProcess(UINT code) { _exit(code); }

// --- Registry stubs ---
#define HKEY_CURRENT_USER ((HKEY)(uintptr_t)0x80000001)
#define KEY_READ 0x20019
#define ERROR_SUCCESS 0
static inline LONG RegOpenKeyExA(HKEY k, const char* sub, DWORD opt, uint32_t sam, HKEY* res) {
    (void)k; (void)sub; (void)opt; (void)sam; if(res) *res = NULL; return 2; /* ERROR_FILE_NOT_FOUND */
}
static inline LONG RegQueryValueExA(HKEY k, const char* name, DWORD* res, DWORD* type, BYTE* data, DWORD* cbdata) {
    (void)k; (void)name; (void)res; (void)type; (void)data; (void)cbdata; return 2;
}
static inline LONG RegCloseKey(HKEY k) { (void)k; return 0; }
#define RegOpenKeyEx RegOpenKeyExA
#define RegQueryValueEx RegQueryValueExA

// --- VK additional codes ---
#define VK_TAB      0x09

// --- Misc macros ---
#define _TRUNCATE ((size_t)-1)
#ifndef strncpy_s
static inline int strncpy_s(char* dest, size_t destsz, const char* src, size_t count) {
    if(!dest || destsz == 0) return -1;
    size_t n = (count == (size_t)-1) ? destsz - 1 : ((count < destsz - 1) ? count : destsz - 1);
    strncpy(dest, src ? src : "", n);
    dest[n] = '\0';
    return 0;
}
#endif
#ifndef HIBYTE
    #define HIBYTE(w) ((BYTE)(((WORD)(w) >> 8) & 0xFF))
#endif
#ifndef LOBYTE
    #define LOBYTE(w) ((BYTE)((WORD)(w) & 0xFF))
#endif
#ifndef HIWORD
    #define HIWORD(dw) ((WORD)(((DWORD)(dw) >> 16) & 0xFFFF))
#endif
#ifndef LOWORD
    #define LOWORD(dw) ((WORD)((DWORD)(dw) & 0xFFFF))
#endif
#ifndef MAKELONG
    #define MAKELONG(lo, hi) ((DWORD)(((WORD)(lo)) | (((DWORD)((WORD)(hi))) << 16)))
#endif
#ifndef MAKELPARAM
    #define MAKELPARAM(l, h) ((LPARAM)(DWORD)MAKELONG(l, h))
#endif
#ifndef MAKEWPARAM
    #define MAKEWPARAM(l, h) ((WPARAM)(DWORD)MAKELONG(l, h))
#endif

// --- Network compat ---
#define InetPton inet_pton
typedef struct hostent HOSTENT;

// --- Additional types ---
typedef WCHAR* LPWSTR;
typedef const WCHAR* LPCWSTR;

typedef struct tagPOINT { LONG x, y; } POINT, *LPPOINT;
typedef struct tagMSG {
    HWND hwnd; UINT message; WPARAM wParam; LPARAM lParam;
    DWORD time; POINT pt;
} MSG;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef void* HICON;
typedef void* HCURSOR;
typedef void* HBRUSH;
typedef void* HDC;
typedef void* HMENU;
typedef void* HACCEL;
typedef void* HBITMAP;
typedef void* ATOM;

typedef struct tagWNDCLASS {
    UINT style; WNDPROC lpfnWndProc; int cbClsExtra; int cbWndExtra;
    HINSTANCE hInstance; HICON hIcon; HCURSOR hCursor; HBRUSH hbrBackground;
    LPCSTR lpszMenuName; LPCSTR lpszClassName;
} WNDCLASSA, WNDCLASS;

// --- Window messages ---
#define WM_DESTROY       0x0002
#define WM_SIZE          0x0005
#define WM_CLOSE         0x0010
#define WM_QUIT          0x0012
#define WM_KEYDOWN       0x0100
#define WM_MOUSEMOVE     0x0200
#define WM_LBUTTONDOWN   0x0201
#define WM_LBUTTONUP     0x0202
#define WM_RBUTTONDOWN   0x0204
#define WM_RBUTTONUP     0x0205
#define WM_SETCURSOR     0x0020
#define WM_EXITSIZEMOVE  0x0232
#define SIZE_RESTORED    0
#define MM_MCINOTIFY     0x03B9

// --- Class styles ---
#define CS_HREDRAW 0x0002
#define CS_VREDRAW 0x0001

// --- Window styles extended ---
#define WS_POPUP        0x80000000UL
#define WS_EX_APPWINDOW 0x00040000

// --- Show window ---
#define SW_SHOWNORMAL       1
#define SW_SHOW             5
#define SW_SHOWMINNOACTIVE  7
#define STARTF_USESHOWWINDOW 0x00000001
#define STARTUPINFO STARTUPINFOA

// --- System metrics ---
#define SM_CXSCREEN 0
#define SM_CYSCREEN 1
static inline int GetSystemMetrics(int idx) { (void)idx; return 1024; }

// --- Keyboard ---
#define VK_ESCAPE   0x1B
#define VK_CAPITAL  0x14
#define VK_F11      0x7A
#define VK_F12      0x7B

// --- Timer / message pump (implemented in SdlEventBridge.cpp) ---
#define PM_REMOVE 0x0001
extern int PeekMessage(MSG* msg, HWND h, UINT min, UINT max, UINT rem);
extern int TranslateMessage(const MSG* msg);
extern LRESULT DispatchMessage(const MSG* msg);
extern LRESULT DefWindowProc(HWND h, UINT m, WPARAM w, LPARAM l);
extern void PostQuitMessage(int code);

// --- Window operations ---
#define IDI_APPLICATION ((const char*)32512)
#define IDC_ARROW ((const char*)32512)
static inline HCURSOR LoadCursorA(HINSTANCE h, const char* n) { (void)h; (void)n; return NULL; }
static inline HICON LoadIconA(HINSTANCE h, const char* n) { (void)h; (void)n; return NULL; }
#define LoadCursor LoadCursorA
#define LoadIcon LoadIconA
extern ATOM RegisterClassA(const WNDCLASSA* wc);
#define RegisterClass RegisterClassA
#define CreateWindow(cn,wn,s,x,y,w,h,p,m,i,l) CreateWindowExA(0,cn,wn,s,x,y,w,h,p,m,i,l)
#define CW_USEDEFAULT ((int)0x80000000)
static inline HWND CreateWindowExA(DWORD exs, const char* cn, const char* wn, DWORD s,
    int x, int y, int w, int h, HWND p, HMENU m, HINSTANCE i, void* l) {
    (void)exs;(void)cn;(void)wn;(void)s;(void)x;(void)y;(void)w;(void)h;
    (void)p;(void)m;(void)i;(void)l; return (HWND)(uintptr_t)1;
}
#define CreateWindowEx CreateWindowExA
static inline int ShowWindow(HWND h, int cmd) { (void)h; (void)cmd; return 0; }
static inline int UpdateWindow(HWND h) { (void)h; return 1; }
static inline int DestroyWindow(HWND h) { (void)h; return 1; }
static inline int MoveWindow(HWND h, int x, int y, int w, int hh, int repaint) {
    (void)h;(void)x;(void)y;(void)w;(void)hh;(void)repaint; return 1;
}
static inline int SetCursorPos(int x, int y) { (void)x; (void)y; return 1; }
static inline HCURSOR SetCursor(HCURSOR c) { (void)c; return NULL; }
static inline int ClipCursor(const RECT* r) { (void)r; return 1; }
static inline int MapWindowPoints(HWND from, HWND to, LPPOINT pts, UINT cnt) {
    (void)from; (void)to; (void)pts; (void)cnt; return 0;
}
typedef uintptr_t UINT_PTR;
static inline UINT_PTR SetTimer(HWND h, UINT_PTR id, UINT ms, void* proc) {
    (void)h; (void)id; (void)ms; (void)proc; return 1;
}
extern int GetKeyboardState(BYTE* keys);
extern int ToAscii(UINT uVirtKey, UINT uScanCode, const BYTE* lpKeyState, WORD* lpChar, UINT uFlags);
extern int ToUnicode(UINT wVirtKey, UINT wScanCode, const BYTE* lpKeyState, WCHAR* pwszBuff, int cchBuff, UINT wFlags);
static inline void SetLastError(DWORD err) { (void)err; }
static inline DWORD GetLastError(void) { return 0; }

// --- Directory stubs ---
#include <sys/stat.h>
static inline int GetCurrentDirectoryA(DWORD sz, char* buf) {
    if(buf && sz > 0) { getcwd(buf, sz); return (int)strlen(buf); }
    return 0;
}
static inline int SetCurrentDirectoryA(const char* dir) { return chdir(dir) == 0; }
static inline int CreateDirectoryA(const char* dir, void* sa) { (void)sa; return mkdir(dir, 0755) == 0; }
#define GetCurrentDirectory GetCurrentDirectoryA
#define SetCurrentDirectory SetCurrentDirectoryA
#define CreateDirectory CreateDirectoryA

// --- MB_ICONSTOP ---
#define MB_ICONSTOP 0x10

// --- wsprintf ---
#define wsprintf sprintf

// --- DirectPlay type stubs ---
typedef DWORD DPID;
typedef DPID* LPDPID;

#endif // _WIN32
