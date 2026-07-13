// platform/platform.cpp
// Cross-platform implementations
// Each function has a Windows and POSIX path

#include "platform.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ============================================================================
// NETWORKING
// ============================================================================

#ifdef _WIN32
    #include <Winsock2.h>
    #include <WS2tcpip.h>
    #include <iphlpapi.h>
    #pragma comment(lib, "ws2_32.lib")
    #pragma comment(lib, "iphlpapi.lib")

int platform_net_init(void) {
    WSADATA wsaData;
    return WSAStartup(MAKEWORD(2, 2), &wsaData) == 0 ? 0 : -1;
}

void platform_net_cleanup(void) {
    WSACleanup();
}

int platform_set_nonblocking(PlatformSocket sock, int enable) {
    u_long mode = enable ? 1 : 0;
    return ioctlsocket(sock, FIONBIO, &mode) == 0 ? 0 : -1;
}

int platform_bytes_available(PlatformSocket sock) {
    u_long bytes = 0;
    if (ioctlsocket(sock, FIONREAD, &bytes) != 0)
        return -1;
    return (int)bytes;
}

int platform_get_local_addresses(uint32_t* addrs, int max_count) {
    PIP_ADAPTER_ADDRESSES pAddresses = NULL;
    ULONG outBufLen = 15000;
    ULONG flags = GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST | GAA_FLAG_SKIP_DNS_SERVER;
    int count = 0;

    pAddresses = (PIP_ADAPTER_ADDRESSES)malloc(outBufLen);
    if (!pAddresses) return 0;

    if (GetAdaptersAddresses(AF_INET, flags, NULL, pAddresses, &outBufLen) != NO_ERROR) {
        free(pAddresses);
        pAddresses = (PIP_ADAPTER_ADDRESSES)malloc(outBufLen);
        if (!pAddresses) return 0;
        if (GetAdaptersAddresses(AF_INET, flags, NULL, pAddresses, &outBufLen) != NO_ERROR) {
            free(pAddresses);
            return 0;
        }
    }

    PIP_ADAPTER_ADDRESSES pCurr = pAddresses;
    while (pCurr && count < max_count) {
        if (pCurr->IfType != IF_TYPE_SOFTWARE_LOOPBACK &&
            pCurr->OperStatus == IfOperStatusUp) {
            PIP_ADAPTER_UNICAST_ADDRESS pUnicast = pCurr->FirstUnicastAddress;
            while (pUnicast && count < max_count) {
                struct sockaddr_in* sa = (struct sockaddr_in*)pUnicast->Address.lpSockaddr;
                if (sa->sin_family == AF_INET) {
                    addrs[count++] = sa->sin_addr.s_addr;
                }
                pUnicast = pUnicast->Next;
            }
        }
        pCurr = pCurr->Next;
    }

    free(pAddresses);
    return count;
}

#else // POSIX (macOS, Linux)

int platform_net_init(void) {
    // BSD sockets don't need initialization
    return 0;
}

void platform_net_cleanup(void) {
    // Nothing to do
}

int platform_set_nonblocking(PlatformSocket sock, int enable) {
#ifdef __EMSCRIPTEN__
    // `sock` here is never a real OS file descriptor: under __EMSCRIPTEN__, CommCore's socket()/
    // bind()/etc are macro-redirected (src/CommCore/cos_net.h) to cos_net.js's virtual-socket
    // table, whose ids are small integers from an independent counter. Calling the REAL fcntl()
    // on that id operates on whatever Emscripten's OWN fd table happens to have at that number -
    // ids 0-2 coincide with stdin/stdout/stderr (so fcntl "succeeds" by pure accident, on the
    // wrong object), and any id 3+ has no backing fd at all and fcntl reliably fails with EBADF
    // (verified empirically). That silent failure is why InitDiscoverySocket() would return
    // FALSE and SendLanQuery() never even ran - not a timing issue, a real bug. The virtual
    // transport (web/cos_net.js) is non-blocking by construction (recvfrom always returns
    // immediately, never blocks), exactly like cos_net_ioctl already treats FIONBIO as a no-op -
    // so there is nothing to actually set here.
    (void)sock; (void)enable;
    return 0;
#else
    int flags = fcntl(sock, F_GETFL, 0);
    if (flags == -1) return -1;
    if (enable)
        flags |= O_NONBLOCK;
    else
        flags &= ~O_NONBLOCK;
    return fcntl(sock, F_SETFL, flags) == 0 ? 0 : -1;
#endif
}

int platform_bytes_available(PlatformSocket sock) {
    int bytes = 0;
    if (ioctl(sock, FIONREAD, &bytes) < 0)
        return -1;
    return bytes;
}

int platform_get_local_addresses(uint32_t* addrs, int max_count) {
    struct ifaddrs* ifaddr;
    int count = 0;

    if (getifaddrs(&ifaddr) == -1)
        return 0;

    for (struct ifaddrs* ifa = ifaddr; ifa && count < max_count; ifa = ifa->ifa_next) {
        if (!ifa->ifa_addr) continue;
        if (ifa->ifa_addr->sa_family != AF_INET) continue;
        if (ifa->ifa_flags & IFF_LOOPBACK) continue;
        if (!(ifa->ifa_flags & IFF_UP)) continue;

        struct sockaddr_in* sa = (struct sockaddr_in*)ifa->ifa_addr;
        addrs[count++] = sa->sin_addr.s_addr;
    }

    freeifaddrs(ifaddr);
    return count;
}

#endif // _WIN32

// ============================================================================
// TIME
// ============================================================================

#ifdef _WIN32

uint32_t platform_get_ticks_ms(void) {
    return GetTickCount();
}

#elif defined(__APPLE__)

    #include <mach/mach_time.h>

static uint64_t _timebase_numer = 0;
static uint64_t _timebase_denom = 0;

uint32_t platform_get_ticks_ms(void) {
    if (_timebase_numer == 0) {
        mach_timebase_info_data_t info;
        mach_timebase_info(&info);
        _timebase_numer = info.numer;
        _timebase_denom = info.denom;
    }
    uint64_t now = mach_absolute_time();
    uint64_t ns = now * _timebase_numer / _timebase_denom;
    return (uint32_t)(ns / 1000000ULL);
}

#else // Linux

    #include <time.h>

uint32_t platform_get_ticks_ms(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint32_t)(ts.tv_sec * 1000 + ts.tv_nsec / 1000000);
}

#endif

// ============================================================================
// SYSTEM
// ============================================================================

#ifdef _WIN32

void platform_get_hostname(char* buf, int max_len) {
    DWORD size = (DWORD)max_len;
    if (!GetComputerNameA(buf, &size)) {
        strncpy(buf, "Unknown", max_len - 1);
        buf[max_len - 1] = '\0';
    }
}

#else

    #include <unistd.h>

void platform_get_hostname(char* buf, int max_len) {
    if (gethostname(buf, max_len) != 0) {
        strncpy(buf, "Unknown", max_len - 1);
        buf[max_len - 1] = '\0';
    }
}

#endif

// ============================================================================
// CONFIG (Registry on Windows, file-based on POSIX)
// ============================================================================

#ifdef _WIN32

int platform_config_read(const char* key, char* value, int max_len) {
    HKEY hKey;
    DWORD type, size = (DWORD)max_len;
    if (RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\GSC Game World", 0, KEY_READ, &hKey) != ERROR_SUCCESS)
        return 0;
    LONG result = RegQueryValueExA(hKey, key, NULL, &type, (LPBYTE)value, &size);
    RegCloseKey(hKey);
    return (result == ERROR_SUCCESS) ? 1 : 0;
}

int platform_config_write(const char* key, const char* value) {
    HKEY hKey;
    if (RegCreateKeyExA(HKEY_CURRENT_USER, "Software\\GSC Game World", 0, NULL, 0,
                        KEY_WRITE, NULL, &hKey, NULL) != ERROR_SUCCESS)
        return 0;
    LONG result = RegSetValueExA(hKey, key, 0, REG_SZ, (const BYTE*)value, (DWORD)(strlen(value) + 1));
    RegCloseKey(hKey);
    return (result == ERROR_SUCCESS) ? 1 : 0;
}

#else

    #include <sys/stat.h>

// Config directory path
static const char* _get_config_dir(void) {
    static char path[512] = {0};
    if (path[0] == '\0') {
        const char* home = getenv("HOME");
        if (!home) home = "/tmp";
#ifdef __APPLE__
        snprintf(path, sizeof(path), "%s/Library/Application Support/GSC", home);
#else
        snprintf(path, sizeof(path), "%s/.config/gsc", home);
#endif
        mkdir(path, 0755);
    }
    return path;
}

int platform_config_read(const char* key, char* value, int max_len) {
    char filepath[600];
    snprintf(filepath, sizeof(filepath), "%s/%s", _get_config_dir(), key);

    FILE* f = fopen(filepath, "r");
    if (!f) return 0;

    char* result = fgets(value, max_len, f);
    fclose(f);

    if (result) {
        // Strip trailing newline
        size_t len = strlen(value);
        if (len > 0 && value[len - 1] == '\n')
            value[len - 1] = '\0';
        return 1;
    }
    return 0;
}

int platform_config_write(const char* key, const char* value) {
    char filepath[600];
    snprintf(filepath, sizeof(filepath), "%s/%s", _get_config_dir(), key);

    FILE* f = fopen(filepath, "w");
    if (!f) return 0;

    fputs(value, f);
    fclose(f);
    return 1;
}

// ---- INI settings, persisted under /local (survives reload via IDBFS) --------------------------
// The game uses bare filenames like "dd.ini"; we always keep them under /local so the periodic
// FS.syncfs() flush (cos_data.js) writes them into IndexedDB. Real read/modify/write of a simple
// [section] key=value format -> audio volumes, video mode and game options now actually persist.
static void cos_ini_path(const char* file, char* out, size_t n) {
    const char* base = (file && *file) ? file : "cossacks.ini";
    const char* b = base; for (const char* q = base; *q; q++) if (*q == '/' || *q == '\\') b = q + 1;
    snprintf(out, n, "/local/%s", b);
}
static char* cos_ini_slurp(const char* path) {
    FILE* f = fopen(path, "rb"); if (!f) return 0;
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz < 0) { fclose(f); return 0; }
    char* buf = (char*)malloc((size_t)sz + 1); if (!buf) { fclose(f); return 0; }
    size_t got = fread(buf, 1, (size_t)sz, f); buf[got] = 0; fclose(f); return buf;
}
static int cos_ini_get(const char* text, const char* section, const char* key, char* out, size_t outsz) {
    if (!text) return 0;
    char sec[128]; snprintf(sec, sizeof sec, "[%s]", section); size_t seclen = strlen(sec), klen = strlen(key);
    const char* p = text; int inSec = 0;
    while (*p) {
        const char* eol = p; while (*eol && *eol != '\n') eol++;
        const char* s = p; while (s < eol && (*s == ' ' || *s == '\t' || *s == '\r')) s++;
        if (*s == '[') inSec = (strncmp(s, sec, seclen) == 0);
        else if (inSec && *s && *s != ';') {
            const char* eq = s; while (eq < eol && *eq != '=') eq++;
            if (eq < eol) {
                size_t kl = eq - s; while (kl > 0 && (s[kl-1] == ' ' || s[kl-1] == '\t')) kl--;
                if (kl == klen && strncasecmp(s, key, kl) == 0) {
                    const char* v = eq + 1; while (v < eol && (*v == ' ' || *v == '\t')) v++;
                    const char* ve = eol; while (ve > v && (ve[-1]==' '||ve[-1]=='\t'||ve[-1]=='\r')) ve--;
                    size_t vl = (size_t)(ve - v); if (vl >= outsz) vl = outsz ? outsz - 1 : 0;
                    memcpy(out, v, vl); out[vl] = 0; return 1;
                }
            }
        }
        p = *eol ? eol + 1 : eol;
    }
    return 0;
}
extern "C" UINT GetPrivateProfileIntA(const char* section, const char* key, int def, const char* file) {
    char path[300]; cos_ini_path(file, path, sizeof path);
    char* t = cos_ini_slurp(path); char v[64]; int r = def;
    if (t && cos_ini_get(t, section, key, v, sizeof v)) r = atoi(v);
    free(t); return (UINT)r;
}
extern "C" DWORD GetPrivateProfileStringA(const char* section, const char* key, const char* def,
    char* out, DWORD size, const char* file) {
    char path[300]; cos_ini_path(file, path, sizeof path);
    char* t = cos_ini_slurp(path);
    if (!t || !cos_ini_get(t, section, key, out, size)) { size_t d = def ? strlen(def) : 0;
        if (size && d >= size) d = size - 1; if (def) memcpy(out, def, d); if (size) out[d] = 0; }
    free(t); return (DWORD)(size ? strlen(out) : 0);
}
extern "C" int WritePrivateProfileStringA(const char* section, const char* key, const char* val, const char* file) {
    char path[300]; cos_ini_path(file, path, sizeof path);
    char* t = cos_ini_slurp(path);
    // build the new file text: copy through, replacing the key inside [section]; add section/key if absent
    size_t cap = (t ? strlen(t) : 0) + strlen(section) + strlen(key) + strlen(val ? val : "") + 64;
    char* out = (char*)malloc(cap); if (!out) { free(t); return 0; }
    out[0] = 0; size_t ol = 0;
    char sec[128]; snprintf(sec, sizeof sec, "[%s]", section); size_t seclen = strlen(sec), klen = strlen(key);
    int inSec = 0, wroteKey = 0, sawSec = 0;
    #define APP(str) do{ size_t L=strlen(str); memcpy(out+ol,str,L); ol+=L; out[ol]=0; }while(0)
    const char* p = t ? t : "";
    while (*p) {
        const char* eol = p; while (*eol && *eol != '\n') eol++;
        const char* nl = *eol ? eol + 1 : eol;
        const char* s = p; while (s < eol && (*s == ' ' || *s == '\t' || *s == '\r')) s++;
        int emit = 1;
        if (*s == '[') {
            if (inSec && !wroteKey) { APP(key); APP("="); APP(val ? val : ""); APP("\n"); wroteKey = 1; }
            inSec = (strncmp(s, sec, seclen) == 0); if (inSec) sawSec = 1;
        } else if (inSec && *s && *s != ';') {
            const char* eq = s; while (eq < eol && *eq != '=') eq++;
            size_t kl = (eq < eol) ? (size_t)(eq - s) : 0; while (kl > 0 && (s[kl-1]==' '||s[kl-1]=='\t')) kl--;
            if (kl == klen && strncasecmp(s, key, kl) == 0) {
                APP(key); APP("="); APP(val ? val : ""); APP("\n"); wroteKey = 1; emit = 0;
            }
        }
        if (emit) { memcpy(out + ol, p, (size_t)(nl - p)); ol += (size_t)(nl - p); out[ol] = 0; }
        p = nl;
    }
    if (inSec && !wroteKey) { APP(key); APP("="); APP(val ? val : ""); APP("\n"); wroteKey = 1; }
    if (!sawSec) { if (ol && out[ol-1] != '\n') APP("\n"); APP(sec); APP("\n"); APP(key); APP("="); APP(val ? val : ""); APP("\n"); }
    #undef APP
    FILE* f = fopen(path, "wb"); if (f) { fwrite(out, 1, ol, f); fclose(f); }
    free(out); free(t);
#ifdef __EMSCRIPTEN__
    if (f) { extern void cos_persist_soon(void); cos_persist_soon(); }   /* flush /local -> IndexedDB */
#endif
    return f ? 1 : 0;
}

#endif
