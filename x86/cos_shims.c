/* cos_shims.c — synthetic dispatch + OS/game_api shims for the guest DLLs.
 *
 * call_ind(addr,ret) pushed `ret`, so at a shim's entry ESP -> ret, args at
 * ESP+4+i*4. OS imports are __stdcall (callee pops ret + args). game_api is
 * __cdecl (callee pops only ret; the DLL's `add esp,N` cleans the args). */
#include "cos_x86.h"
#include "cpu.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/* ---- arg / return helpers ---------------------------------------------- */
#define ARG(i)   r32(ESP + 4 + (i)*4)
static inline void RET_STD(int argc)  { ESP += 4 + argc*4; }  /* stdcall */
static inline void RET_CDECL(void)    { ESP += 4; }           /* cdecl   */

/* ---- synthetic symbol registry ----------------------------------------- */
#define MAXSYM 512
static char     g_symname[MAXSYM][64];
static int      g_nsym = 0;
uint32_t cos_sym(const char *name) {
    for (int i = 0; i < g_nsym; i++) if (!strcmp(g_symname[i], name)) return COS_SYNTH_BASE + i;
    if (g_nsym >= MAXSYM) { fprintf(stderr, "[cos] sym table full\n"); abort(); }
    strncpy(g_symname[g_nsym], name, 63);
    return COS_SYNTH_BASE + g_nsym++;
}
const char *cos_sym_name(uint32_t addr) {
    uint32_t i = addr - COS_SYNTH_BASE;
    return (addr >= COS_SYNTH_BASE && i < (uint32_t)g_nsym) ? g_symname[i] : NULL;
}

/* ---- game_api registry ------------------------------------------------- */
typedef struct { char name[64]; int argc; CosApiFn fn; } ApiEnt;
static ApiEnt g_api[256]; static int g_napi = 0;
void cos_api_register(const char *name, int argc, CosApiFn fn) {
    if (g_napi >= 256) { fprintf(stderr, "[cos] api table full\n"); abort(); }
    strncpy(g_api[g_napi].name, name, 63); g_api[g_napi].argc = argc; g_api[g_napi].fn = fn; g_napi++;
}
static ApiEnt *api_find(const char *name) {
    for (int i = 0; i < g_napi; i++) if (!strcmp(g_api[i].name, name)) return &g_api[i];
    return NULL;
}

/* ---- guest heap (bump; DLLs are small & short-lived per game) ----------- */
static uint32_t g_hp = G_HEAP_BASE;
static uint32_t gheap_alloc(uint32_t n) {
    uint32_t a = (g_hp + 15) & ~15u; g_hp = a + n;
    if (g_hp >= G_MEM_SIZE) { fprintf(stderr, "[cos] guest heap exhausted\n"); abort(); }
    return a;
}

/* ---- OS import shims (name-dispatched) --------------------------------- */
#define FAKE_HMODULE 0x00400000u   /* non-null pseudo-handle for dmcr.exe */
static uint32_t g_lasterr = 0;

/* the current name being dispatched (set by resolve_fallback) */
static const char *g_curname;

extern int cos_fetch_file(const char *canon);   /* cos_data.js: lazy-fetch into /game/<canon> */
extern uint32_t cos_guest_module_base_by_name(const char *name);
extern uint32_t cos_guest_export_by_handle(uint32_t hmodule, const char *proc);
extern uint32_t cos_guest_export_by_name(const char *proc);

static void sh_GetModuleHandleA(void){
    uint32_t namep = ARG(0);
    uint32_t guest = namep ? cos_guest_module_base_by_name((const char*)gp(namep)) : 0;
    EAX = guest ? guest : FAKE_HMODULE;
    RET_STD(1);
}
static void sh_LoadLibraryA(void){
    uint32_t namep = ARG(0);
    uint32_t guest = namep ? cos_guest_module_base_by_name((const char*)gp(namep)) : 0;
    EAX = guest ? guest : FAKE_HMODULE;
    RET_STD(1);
}
static void sh_GetProcAddress(void){
    /* (hModule, lpProcName) -> synthetic addr for the game_api name */
    uint32_t hmodule = ARG(0);
    uint32_t namep = ARG(1);
    const char *nm = (const char*)gp(namep);
    EAX = cos_guest_export_by_handle(hmodule, nm);
    if (!EAX && !api_find(nm)) EAX = cos_guest_export_by_name(nm);
    if (!EAX) EAX = cos_sym(nm);   /* register/return a synthetic; a later call [slot] dispatches it */
    RET_STD(2);
}
static void sh_MessageBoxA(void){
    const char *text = (const char*)gp(ARG(1)), *cap = (const char*)gp(ARG(2));
    fprintf(stderr, "[guest MessageBox] %s | %s\n", cap?cap:"", text?text:"");
    EAX = 1; RET_STD(4);
}
static void sh_GetProcessHeap(void){ EAX = 1; RET_STD(0); }
static void sh_HeapAlloc(void){ uint32_t n=ARG(2); uint32_t p=gheap_alloc(n); if(ARG(1)&8) memset(gp(p),0,n); EAX=p; RET_STD(3); }
static void sh_HeapFree(void){ EAX=1; RET_STD(3); }
static void sh_HeapReAlloc(void){ uint32_t old=ARG(2),n=ARG(3),p=gheap_alloc(n); if(old&&n) memmove(gp(p),gp(old),n); EAX=p; RET_STD(4); }
static void sh_VirtualAlloc(void){ uint32_t n=ARG(1); EAX=gheap_alloc(n); RET_STD(4); }
/* HeapCreate/HeapDestroy: all guest heap shims (HeapAlloc/Free/ReAlloc above) ignore the
 * handle and always use the single global bump allocator, so any nonzero "handle" is a
 * complete, correct implementation. Previously a stdcall no-op returning EAX=0 (NULL) --
 * a guest checking "did HeapCreate succeed" (e.g. CMS_start.dll's CRT heap-manager init,
 * FUN_1000a0e9) saw failure and skipped the rest of its own startup, including bringing up
 * TLS (see the GetVersion/TlsAlloc comments above) -- one more link in the same stalled
 * CRT-init chain that left fopen() unable to ever reach CreateFileA. */
static uint32_t g_heap_seq = 1;
static void sh_HeapCreate(void){ EAX = 0x20000000u + (g_heap_seq++); RET_STD(3); }
static void sh_HeapDestroy(void){ EAX = 1; RET_STD(1); }
static void sh_GetLastError(void){ EAX=g_lasterr; RET_STD(0); }
static void sh_SetLastError(void){ g_lasterr=ARG(0); EAX=0; RET_STD(1); }

/* ---- GetVersion/GetVersionExA (report Windows 2000, build 2195, NT platform) -----------
 * Was a stdcall no-op returning EAX=0 ("Windows major.minor 0.0"). The guest's statically
 * linked CRT's DllMain-time init (_CRT_INIT) reads GetVersion(), and gates its OWN TLS
 * bring-up (allocating the real _tls_index via TlsAlloc) on a minimum-OS-version check
 * against that value; version 0.0 fails the check, so TlsAlloc never runs and every TLS
 * slot the CRT later uses (fopen/malloc/errno's per-thread data) stays permanently
 * invalid (-1). A real version number is required for the CRT to initialize itself. */
static void sh_GetVersion(void){ EAX = 0x08930005u /* NT 5.0, build 2195 (Windows 2000) */; RET_STD(0); }
static void sh_GetVersionExA(void){
    uint32_t p = ARG(0);
    w32(p+4, 5); w32(p+8, 0); w32(p+12, 2195); w32(p+16, 2 /*VER_PLATFORM_WIN32_NT*/);
    w8(p+20, 0);   /* szCSDVersion[0] = '\0' */
    EAX = 1; RET_STD(1);
}

/* ---- TLS (TlsAlloc/TlsFree/TlsGetValue/TlsSetValue) -----------------------------------
 * Previously stdcall no-ops: TlsSetValue always "returned" EAX=0, which is FALSE (failure)
 * per the real Win32 contract. The guest's statically-linked CRT calls TlsSetValue to save
 * its per-thread data block (_getptd(), used by fopen/malloc/errno) right after allocating
 * it; a FALSE return there makes the CRT believe the OS is out of TLS space and raise a
 * fatal "R6016 - not enough space for thread data" error on every single CRT call that
 * needs per-thread state (repeatedly, since TlsGetValue never actually returns what was
 * "set") -- which stalls file opens (fopen -> _getptd() first) before they ever reach
 * CreateFileA. Single-threaded guest, so a flat slot table is a complete, correct TLS. */
#define MAXTLS 64
static uint32_t g_tls[MAXTLS];
static int g_ntls = 0;
static void sh_TlsAlloc(void){
    EAX = (g_ntls < MAXTLS) ? (uint32_t)(g_ntls++) : 0xFFFFFFFFu /*TLS_OUT_OF_INDEXES*/;
    RET_STD(0);
}
static void sh_TlsFree(void){ EAX = 1; RET_STD(1); }
static void sh_TlsGetValue(void){
    uint32_t slot = ARG(0);
    EAX = (slot < MAXTLS) ? g_tls[slot] : 0u;
    RET_STD(1);
}
static void sh_TlsSetValue(void){
    uint32_t slot = ARG(0), val = ARG(1);
    if (slot < MAXTLS) g_tls[slot] = val;
    EAX = 1; RET_STD(2);
}

/* ---- guest file I/O (CreateFileA/ReadFile/WriteFile/CloseHandle/SetFilePointer/...) ----
 * CMS_start.dll (the generic .cms usermission interpreter) reads its own script/state
 * files directly via Win32 file calls rather than game_api. These were previously
 * stdcall no-ops (sh_generic: EAX=0), which reads to the guest as "CreateFileA succeeded
 * with handle 0"; every ReadFile then silently returned 0 bytes with no error, so
 * CMS_start.dll's parsed trigger/command table stayed zero-filled, and code that walked
 * it called through a null "handler" slot in an infinite per-tick loop. Real, working I/O
 * against the guest's own MEMFS (host-written local files + the lazy-fetch data tree). */
#define MAXGFILE 64
static FILE *g_gfile[MAXGFILE];
static int gfile_alloc(FILE *f){
    for (int i=0;i<MAXGFILE;i++) if(!g_gfile[i]){ g_gfile[i]=f; return i+1; }
    return 0;
}
static FILE *gfile_get(uint32_t h){ return (h>=1 && h<=MAXGFILE) ? g_gfile[h-1] : NULL; }

/* try the path verbatim first (host-written local files like "UserMissions/start.dat"
 * resolve directly); else canonicalize (upper-case, forward-slash) and lazy-fetch it as a
 * game data asset, matching cos_engine.cpp's own module-fetch fallback pattern. */
static FILE *guest_fopen(const char *path, const char *mode){
    FILE *f = fopen(path, mode);
    if (f) return f;

    char local[512]; size_t li = 0;
    int changed = 0;
    for (; path[li] && li + 1 < sizeof local; li++) {
        char c = path[li];
        if (c == '\\') { c = '/'; changed = 1; }
        local[li] = c;
    }
    local[li] = 0;
    if (changed) {
        f = fopen(local, mode);
        if (f) return f;
    }

    char canon[512]; size_t i=0;
    for (; path[i] && i+1<sizeof canon; i++){
        char c=path[i]; if(c=='\\')c='/'; if(c>='a'&&c<='z')c=(char)(c-32); canon[i]=c;
    }
    canon[i]=0;
    cos_fetch_file(canon);
    char full[600]; snprintf(full,sizeof full,"/game/%s",canon);
    return fopen(full, mode);
}

static void sh_CreateFileA(void){
    const char *path = (const char*)gp(ARG(0));
    uint32_t access = ARG(1), disp = ARG(4);
    int wantWrite = (access & 0x40000000u) != 0;
    const char *mode;
    switch (disp) {
        case 1: case 2: mode = wantWrite ? "w+b" : "wb"; break;    /* CREATE_NEW/CREATE_ALWAYS */
        case 5:         mode = "w+b"; break;                        /* TRUNCATE_EXISTING */
        default:        mode = wantWrite ? "r+b" : "rb"; break;     /* OPEN_EXISTING(3)/OPEN_ALWAYS(4) */
    }
    FILE *f = guest_fopen(path, mode);
    if (!f && disp == 4) f = guest_fopen(path, wantWrite ? "w+b" : "wb");  /* OPEN_ALWAYS: create if missing */
    if (!f) { g_lasterr = 2 /*ERROR_FILE_NOT_FOUND*/; EAX = 0xFFFFFFFFu; RET_STD(7); return; }
    uint32_t h = (uint32_t)gfile_alloc(f);
    if (!h) { fclose(f); g_lasterr = 4 /*ERROR_TOO_MANY_OPEN_FILES*/; EAX = 0xFFFFFFFFu; RET_STD(7); return; }
    EAX = h; RET_STD(7);
}
static void sh_ReadFile(void){
    FILE *f = gfile_get(ARG(0));
    uint32_t buf = ARG(1), n = ARG(2), pRead = ARG(3);
    size_t got = f ? fread(gp(buf), 1, n, f) : 0;
    if (pRead) w32(pRead, (uint32_t)got);
    EAX = f ? 1u : 0u; RET_STD(5);
}
static void sh_WriteFile(void){
    FILE *f = gfile_get(ARG(0));
    uint32_t buf = ARG(1), n = ARG(2), pWritten = ARG(3);
    size_t did = f ? fwrite(gp(buf), 1, n, f) : 0;
    if (pWritten) w32(pWritten, (uint32_t)did);
    EAX = f ? 1u : 0u; RET_STD(5);
}
static void sh_CloseHandle(void){
    uint32_t h = ARG(0); FILE *f = gfile_get(h);
    if (f) { fclose(f); g_gfile[h-1] = NULL; }
    EAX = 1; RET_STD(1);
}
static void sh_SetFilePointer(void){
    FILE *f = gfile_get(ARG(0));
    int32_t dist = (int32_t)ARG(1); uint32_t method = ARG(3);
    if (f) fseek(f, dist, method==1 ? SEEK_CUR : method==2 ? SEEK_END : SEEK_SET);
    EAX = f ? (uint32_t)ftell(f) : 0xFFFFFFFFu;
    RET_STD(4);
}
static void sh_GetFileType(void){ EAX = gfile_get(ARG(0)) ? 1u/*FILE_TYPE_DISK*/ : 0u; RET_STD(1); }
static void sh_FlushFileBuffers(void){
    FILE *f = gfile_get(ARG(0)); if (f) fflush(f);
    EAX = 1; RET_STD(1);
}
static void sh_SetEndOfFile(void){
    FILE *f = gfile_get(ARG(0));
    if (f) { fflush(f); long pos = ftell(f); int fd = fileno(f); if (fd >= 0) ftruncate(fd, pos); }
    EAX = f ? 1u : 0u; RET_STD(1);
}

/* generic stdcall shim: argc looked up from a table; returns 0. Used for the CRT
 * startup imports we don't model (harmless when the DLL ignores the result). */
static int import_argc(const char *n);
static void sh_generic(void){ int ac=import_argc(g_curname); EAX=0; RET_STD(ac); }
static void sh_generic1(void){ EAX=1; int ac=import_argc(g_curname); RET_STD(ac); }

/* the game_api marshaler (cdecl): look up the registered engine fn, gather argc
 * args, call it, EAX=result. If the name has no registered impl yet, LOG it. */
static void sh_gameapi(void){
    ApiEnt *e = api_find(g_curname);
    if (e) {
        uint32_t args[16];
        for (int i = 0; i < e->argc && i < 16; i++) args[i] = ARG(i);
        EAX = e->fn(args);
    } else {
        static int n=0; if (n++ < 200) fprintf(stderr, "[game_api CALL] %s(0x%x,0x%x,0x%x)\n", g_curname, ARG(0), ARG(1), ARG(2));
        EAX = 0;
    }
    RET_CDECL();
}

/* ---- import argc table (standard Win32 stdcall arg counts) -------------- */
static const struct { const char *n; int argc; } ARGC_TAB[] = {
    {"GetModuleHandleA",1},{"LoadLibraryA",1},{"GetProcAddress",2},{"FreeLibrary",1},
    {"MessageBoxA",4},{"GetProcessHeap",0},{"HeapCreate",3},{"HeapDestroy",1},
    {"HeapAlloc",3},{"HeapFree",3},{"HeapReAlloc",4},{"VirtualAlloc",4},{"VirtualFree",3},
    {"GetLastError",0},{"SetLastError",1},{"GetVersion",0},{"GetVersionExA",1},
    {"ExitProcess",1},{"TerminateProcess",2},{"GetCurrentProcess",0},{"GetCurrentThreadId",0},
    {"TlsAlloc",0},{"TlsFree",1},{"TlsSetValue",2},{"TlsGetValue",1},
    {"InitializeCriticalSection",1},{"EnterCriticalSection",1},{"LeaveCriticalSection",1},{"DeleteCriticalSection",1},
    {"InterlockedIncrement",1},{"InterlockedDecrement",1},{"InterlockedExchange",2},
    {"GetCommandLineA",0},{"GetStartupInfoA",1},{"GetModuleFileNameA",3},
    {"GetStdHandle",1},{"SetHandleCount",1},{"GetFileType",1},{"WriteFile",5},{"CloseHandle",1},
    {"FlushFileBuffers",1},{"SetFilePointer",4},{"SetStdHandle",2},{"CreateFileA",7},{"ReadFile",5},
    {"GetCPInfo",2},{"GetACP",0},{"GetOEMCP",0},{"MultiByteToWideChar",6},{"WideCharToMultiByte",8},
    {"GetStringTypeA",5},{"GetStringTypeW",4},{"LCMapStringA",6},{"LCMapStringW",6},
    {"GetEnvironmentStrings",0},{"GetEnvironmentStringsW",0},{"FreeEnvironmentStringsA",1},
    {"FreeEnvironmentStringsW",1},{"GetEnvironmentVariableA",3},{"SetEnvironmentVariableA",2},
    {"RtlUnwind",4},{"GetTickCount",0},{"QueryPerformanceCounter",1},{"Sleep",1},
    /* --- completed by Unicorn diff-test: the union of ALL Win32 stdcall imports used by
     * any of the 220 mission DLLs. A missing entry => import_argc returns 0 => the stdcall
     * arg is never popped => stack imbalance => `ret` into the stack => derail (this was the
     * root of the "Single70 crash": SetUnhandledExceptionFilter(1) was absent). --- */
    {"SetUnhandledExceptionFilter",1},{"UnhandledExceptionFilter",1},{"RaiseException",4},
    {"CompareStringA",6},{"CompareStringW",6},{"LCMapStringA",6},{"LCMapStringW",6},
    {"GetLocaleInfoA",4},{"GetLocaleInfoW",4},{"EnumSystemLocalesA",2},{"IsValidLocale",2},
    {"IsValidCodePage",1},{"GetUserDefaultLCID",0},{"GetLocalTime",1},{"GetSystemTime",1},
    {"GetTimeZoneInformation",1},{"HeapSize",3},{"HeapValidate",3},
    {"IsBadReadPtr",2},{"IsBadWritePtr",2},{"IsBadCodePtr",1},
    {"OutputDebugStringA",1},{"DebugBreak",0},{"FatalAppExitA",2},
    {"SetConsoleCtrlHandler",2},{"SetEndOfFile",1},{"GetCurrentThread",0},
    {0,0}
};
static int import_argc(const char *n) {
    for (int i = 0; ARGC_TAB[i].n; i++) if (!strcmp(ARGC_TAB[i].n, n)) return ARGC_TAB[i].argc;
    fprintf(stderr, "[cos] UNKNOWN import argc for '%s' — assuming 0 (stack may imbalance)\n", n);
    return 0;
}

/* diagnostic stub for an unresolved guest address: log (stdout=console) and
 * return cdecl (pop only the return addr) so execution continues and the
 * offending address is visible instead of a hard "unreachable" trap. */
static uint32_t g_unknown_addr;
static void sh_unknown(void){
    static int n=0;
    if (n++ < 100) { printf("[cos] CALL unresolved guest addr 0x%08x -> stub (EAX=0)\n", g_unknown_addr); fflush(stdout); }
    EAX = 0; RET_CDECL();
}

/* ---- x86_resolve_fallback: synthetic addr -> shim ---------------------- */
x86fn x86_resolve_fallback(uint32_t addr) {
    const char *nm = cos_sym_name(addr);
    if (!nm) {
        g_unknown_addr = addr;
        static int n=0; if (n++ < 100) { printf("[cos] resolve UNKNOWN addr 0x%08x\n", addr); fflush(stdout); }
        fprintf(stderr, "[cos] resolve_fallback: unknown addr 0x%08x\n", addr);
        return sh_unknown;
    }
    g_curname = nm;   /* generic/gameapi shims read this */
    /* specific OS shims */
    if (!strcmp(nm,"GetModuleHandleA")) return sh_GetModuleHandleA;
    if (!strcmp(nm,"LoadLibraryA"))     return sh_LoadLibraryA;
    if (!strcmp(nm,"GetProcAddress"))   return sh_GetProcAddress;
    if (!strcmp(nm,"MessageBoxA"))      return sh_MessageBoxA;
    if (!strcmp(nm,"GetProcessHeap"))   return sh_GetProcessHeap;
    if (!strcmp(nm,"HeapAlloc"))        return sh_HeapAlloc;
    if (!strcmp(nm,"HeapFree"))         return sh_HeapFree;
    if (!strcmp(nm,"HeapReAlloc"))      return sh_HeapReAlloc;
    if (!strcmp(nm,"VirtualAlloc"))     return sh_VirtualAlloc;
    if (!strcmp(nm,"HeapCreate"))       return sh_HeapCreate;
    if (!strcmp(nm,"HeapDestroy"))      return sh_HeapDestroy;
    if (!strcmp(nm,"GetLastError"))     return sh_GetLastError;
    if (!strcmp(nm,"SetLastError"))     return sh_SetLastError;
    if (!strcmp(nm,"GetVersion"))       return sh_GetVersion;
    if (!strcmp(nm,"GetVersionExA"))    return sh_GetVersionExA;
    if (!strcmp(nm,"TlsAlloc"))         return sh_TlsAlloc;
    if (!strcmp(nm,"TlsFree"))          return sh_TlsFree;
    if (!strcmp(nm,"TlsGetValue"))      return sh_TlsGetValue;
    if (!strcmp(nm,"TlsSetValue"))      return sh_TlsSetValue;
    if (!strcmp(nm,"CreateFileA"))      return sh_CreateFileA;
    if (!strcmp(nm,"ReadFile"))         return sh_ReadFile;
    if (!strcmp(nm,"WriteFile"))        return sh_WriteFile;
    if (!strcmp(nm,"CloseHandle"))      return sh_CloseHandle;
    if (!strcmp(nm,"SetFilePointer"))   return sh_SetFilePointer;
    if (!strcmp(nm,"GetFileType"))      return sh_GetFileType;
    if (!strcmp(nm,"FlushFileBuffers")) return sh_FlushFileBuffers;
    if (!strcmp(nm,"SetEndOfFile"))     return sh_SetEndOfFile;
    /* a registered game_api name -> marshaler; else generic OS stub */
    if (api_find(nm)) return sh_gameapi;
    /* if it looks like a game_api (not in the OS argc table) -> gameapi (log) */
    for (int i = 0; ARGC_TAB[i].n; i++) if (!strcmp(ARGC_TAB[i].n, nm)) return sh_generic;
    return sh_gameapi;
}

/* ---- interpreter import bridge ----------------------------------------------
 * The decode-on-demand interpreter (interp.c) has no static IAT dispatch: when EIP lands on a
 * synthetic import thunk (op_at() returns 0 for addr >= COS_SYNTH_BASE), it calls g_shim_dispatch.
 * We resolve the thunk to the SAME native shim the recompiled path uses (x86_resolve_fallback),
 * run it (reads cdecl/stdcall args off the guest stack, calls the real engine, sets EAX, and its
 * RET pops the caller's return address into EIP), and hand that EIP back so the interpreter
 * continues after the call. This is what makes an INTERPRETED mission DLL's game_api/OS calls
 * reach the live engine, identical to the baked AI DLLs. */
extern uint32_t (*g_shim_dispatch)(uint32_t);   /* defined in interp.c */
static uint32_t cos_shim_dispatch(uint32_t thunk_va) {
    x86fn s = x86_resolve_fallback(thunk_va);
    if (!s) return 0xDEADBEEFu;                  /* unknown -> SENTINEL: halt the interpreter */
    uint32_t ret = r32(ESP);                     /* return address the interpreted CALL pushed.
                                                  * MUST be captured BEFORE the shim runs: the shim's
                                                  * RET_STD/RET_CDECL pops it (ESP += 4 [+ args]) and
                                                  * никто не ставит EIP — returning stale EIP would
                                                  * re-dispatch the same thunk forever (boot freeze). */
    s();                                         /* shim reads args off the guest stack, calls the
                                                  * engine, sets EAX, and pops retaddr(+args) */
    return ret;                                  /* resume the interpreted caller */
}
void cos_install_shim_dispatch(void) { g_shim_dispatch = cos_shim_dispatch; }
