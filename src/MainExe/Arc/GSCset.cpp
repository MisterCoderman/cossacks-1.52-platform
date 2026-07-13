// GSCset.cpp — WebAssembly loose-file backend for CGSCset.
//
// The original memory-mapped the whole 240 MB "GSCfmt" archive. For the WASM port the
// archive is unpacked into a per-language folder (data/en, data/ru) served over HTTP, and
// files are fetched on demand: gOpenFile() canonicalises the name, asks cos_fetch_file()
// (JS, ASYNCIFY) to make /game/<canon> available, then slurps the WHOLE file into memory.
//
// Reading the whole file up front (rather than fseek/ftell + streaming fread) is deliberate:
// the file size is then the exact byte count returned by fread(), so the engine's GFILE
// block reader always sees a correct EOF. Relying on fseek(SEEK_END)/ftell over a freshly
// FS.writeFile()'d MEMFS file could report a stale/oversized length, which made GFILE read
// past the end and spin forever in scanf-style parse loops (ExConst, LoadRDS, ...).
//
// User-written data (saves/options) goes to /local/<canon> (FILE*, m_Flags==2) and is read
// back from there first. The manifest is loaded once for gFindFirst/gFindNext enumeration.
// The public CGSCset interface is unchanged, so ResFile.cpp (R*), GP_Draw (gMapFile) and
// Interface (gFindFirst *.m3d map lists) keep working verbatim.

#include "platform.h"
#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/stat.h>
#include "GSCtypes.h"
#include "GSCarch.h"
#include "GSCset.h"

extern "C" {
    int  cos_fetch_file(const char* canon); // 0 if /game/<canon> is now available, -1 if it does not exist
    void cos_data_init(void);               // load manifest + pick language (once, in preRun)
}
BOOL isiMatchesMask(LPSTR lpszFile, LPSTR lpszMask); // simple wildcard matcher (Arc/isiMasks.cpp)

// Handle encoding in TGSCfile:
//   read  file: m_Flags==0, m_FileHandle = malloc'd buffer, m_Position = read cursor, m_Arch = size
//   write file: m_Flags==2, m_FileHandle = FILE*
//   mapped    : m_Flags has COS_MAPPED set once gMapFile() handed the buffer to a caller that
//               keeps it (GP_Draw closes the handle but keeps GPH[i]=buffer forever, like the
//               old memory-mapped archive) — gCloseFile must then NOT free it (avoids UAF).
#define COS_WRITE  2
#define COS_MAPPED 4

//////////////////////////////////////////////////////////////////////
// helpers
//////////////////////////////////////////////////////////////////////

// canonical form: drop leading "./" and slashes, '\'->'/', UPPER-case (matches unpacked tree)
static void cos_canon(const char* name, char* out, int n)
{
    const char* s = name ? name : "";
    while (*s == '.' || *s == '/' || *s == '\\') {
        if (*s == '.' && (s[1] == '/' || s[1] == '\\')) s += 2;
        else if (*s == '/' || *s == '\\') s++;
        else break;
    }
    int i = 0;
    for (; s[i] && i < n - 1; i++) {
        char c = s[i];
        if (c == '\\') c = '/';
        out[i] = (char)toupper((unsigned char)c);
    }
    out[i] = 0;
}

// slurp a game-data file into a fresh buffer. Returns buffer (caller frees) + *size, or NULL.
// /local (user data) is tried first, then the fetched /game copy.
static unsigned char* cos_slurp(const char* canon, uint32_t* size)
{
    char p[600];
    FILE* f = NULL;
    snprintf(p, sizeof p, "/local/%s", canon);
    f = fopen(p, "rb");
    if (!f) {
        if (cos_fetch_file(canon) == 0) {
            snprintf(p, sizeof p, "/game/%s", canon);
            f = fopen(p, "rb");
        }
    }
    if (!f) { *size = 0; return NULL; }
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz < 0) sz = 0;
    // Over-allocate + zero-pad. The original engine memory-mapped ONE big archive, so sprite/GP
    // decoders that read slightly past a file's nominal end simply landed in the next file's bytes
    // (never a fault). With per-file exact buffers those over-reads become WASM OOB traps, so pad
    // with 64 KB of zeros. The *reported* size stays exact (fread count).
    const long PAD = 0x10000;
    unsigned char* buf = (unsigned char*)calloc(1, (size_t)sz + PAD);
    size_t got = buf ? fread(buf, 1, (size_t)sz, f) : 0;   // GOT = the true byte count
    fclose(f);
    *size = (uint32_t)got;
    return buf;
}

static void cos_mkparents(char* path) // mkdir -p on the parent dirs of a /local/... path
{
    for (char* q = path + 1; *q; q++) {
        if (*q == '/') { *q = 0; mkdir(path, 0777); *q = '/'; }
    }
}

// --- manifest (loaded once) : list of every UPPER/forward-slash path, for enumeration ---
static char*  g_manbuf = NULL;
static char** g_names  = NULL;
static int    g_nnames = 0;

static void load_manifest()
{
    if (g_names) return;
    g_names = (char**)calloc(1, sizeof(char*)); // non-NULL sentinel even on failure
    FILE* f = fopen("/manifest.txt", "rb");
    if (!f) return;
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz <= 0) { fclose(f); return; }
    g_manbuf = (char*)malloc(sz + 1);
    size_t rd = fread(g_manbuf, 1, sz, f); g_manbuf[rd] = 0; fclose(f);
    (void)rd;
    int cap = 8192; g_nnames = 0;
    char** arr = (char**)malloc(sizeof(char*) * cap);
    for (char* line = strtok(g_manbuf, "\r\n"); line; line = strtok(NULL, "\r\n")) {
        if (!*line) continue;
        if (g_nnames >= cap) { cap *= 2; arr = (char**)realloc(arr, sizeof(char*) * cap); }
        arr[g_nnames++] = line;
    }
    free(g_names); g_names = arr;
}

static const char* base_name(const char* p)
{
    const char* b = p;
    for (const char* q = p; *q; q++) if (*q == '/' || *q == '\\') b = q + 1;
    return b;
}

//////////////////////////////////////////////////////////////////////
// CGSCset
//////////////////////////////////////////////////////////////////////

CGSCset::CGSCset()  { m_ArchList = NULL; }
CGSCset::~CGSCset() {}

BOOL CGSCset::gOpen()
{
    cos_data_init();   // no-op (manifest is loaded in preRun)
    load_manifest();
    // Non-null sentinel: FilesInit() on its InitDone fast-path returns `m_ArchList != nullptr`
    // as "are resources present?". With the loose-file backend there is no archive list, but
    // resources ARE present, so this must read non-null or WinMain aborts with "No resource files".
    // Nothing ever dereferences m_ArchList in this backend (only null-checked in RResetEx).
    m_ArchList = (LPGSCArchList)1;
    return TRUE;
}

VOID CGSCset::gClose() {}

LPGSCfile CGSCset::gOpenFile(LPCSTR lpcsFileName, bool /*Only*/)
{
    char canon[512]; cos_canon(lpcsFileName, canon, sizeof canon);
    uint32_t sz = 0;
    unsigned char* buf = cos_slurp(canon, &sz);
    if (!buf) return NULL;
    LPGSCfile g = new TGSCfile;
    g->m_Flags = 0; g->m_Position = 0;
    g->m_FileHandle = (uintptr_t)buf;
    g->m_Arch = (LPGSCarch)(uintptr_t)sz;   // stash exact size
    return g;
}

LPGSCfile CGSCset::gWriteOpen(LPCSTR lpcsFileName)
{
    char canon[512]; cos_canon(lpcsFileName, canon, sizeof canon);
    char p[600]; snprintf(p, sizeof p, "/local/%s", canon);
    cos_mkparents(p);
    FILE* f = fopen(p, "wb");
    if (!f) return NULL;
    LPGSCfile g = new TGSCfile;
    g->m_Flags = COS_WRITE; g->m_Position = 0; g->m_Arch = NULL;
    g->m_FileHandle = (uintptr_t)f;
    return g;
}

extern "C" void cos_persist_soon(void);   /* cos_data.js: debounce-flush /local to IndexedDB */

VOID CGSCset::gCloseFile(LPGSCfile gFile)
{
    if (!gFile) return;
    if (gFile->m_Flags & COS_WRITE)       { if (gFile->m_FileHandle) { fclose((FILE*)gFile->m_FileHandle); cos_persist_soon(); } }
    else if (gFile->m_Flags & COS_MAPPED) { /* buffer ownership was handed to a gMapFile() caller that
                                               keeps it (GPH[i]=buffer forever); must NOT free -> no UAF */ }
    else                                  { if (gFile->m_FileHandle) free((void*)gFile->m_FileHandle); }
    delete gFile;
}

VOID CGSCset::gReadFile(LPGSCfile gFile, LPBYTE lpbBuffer, DWORD dwSize)
{
    if (!gFile || gFile->m_Flags == COS_WRITE || !gFile->m_FileHandle) return;
    unsigned char* src = (unsigned char*)gFile->m_FileHandle;
    DWORD sz  = (DWORD)(uintptr_t)gFile->m_Arch;
    DWORD pos = gFile->m_Position;
    DWORD avail = (pos < sz) ? (sz - pos) : 0;
    DWORD n = (dwSize < avail) ? dwSize : avail;
    if (n) memcpy(lpbBuffer, src + pos, n);
    gFile->m_Position = pos + n;
}

BOOL CGSCset::gWriteFile(LPGSCfile gFile, LPBYTE lpbBuffer, DWORD dwSize)
{
    if (!gFile || gFile->m_Flags != COS_WRITE || !gFile->m_FileHandle) return FALSE;
    fwrite(lpbBuffer, 1, dwSize, (FILE*)gFile->m_FileHandle);
    return TRUE;
}

VOID CGSCset::gSeekFile(LPGSCfile gFile, DWORD dwPosition)
{
    if (!gFile) return;
    if (gFile->m_Flags == COS_WRITE) { if (gFile->m_FileHandle) fseek((FILE*)gFile->m_FileHandle, (long)dwPosition, SEEK_SET); }
    else                             { gFile->m_Position = dwPosition; }
}

DWORD CGSCset::gFilePos(LPGSCfile gFile)
{
    if (!gFile) return 0;
    if (gFile->m_Flags == COS_WRITE) return gFile->m_FileHandle ? (DWORD)ftell((FILE*)gFile->m_FileHandle) : 0;
    return gFile->m_Position;
}

DWORD CGSCset::gFileSize(LPGSCfile gFile)
{
    if (!gFile) return 0;
    if (gFile->m_Flags == COS_WRITE) {
        if (!gFile->m_FileHandle) return 0;
        FILE* f = (FILE*)gFile->m_FileHandle; long cur = ftell(f);
        fseek(f, 0, SEEK_END); long s = ftell(f); fseek(f, cur, SEEK_SET);
        return (DWORD)(s < 0 ? 0 : s);
    }
    return (DWORD)(uintptr_t)gFile->m_Arch;
}

LPBYTE CGSCset::gMapFile(LPGSCfile gFile)
{
    if (!gFile || (gFile->m_Flags & COS_WRITE)) return NULL;
    // Hand the buffer to the caller and mark it mapped: the engine keeps the returned pointer
    // (e.g. GP_Draw's GPH[i]) alive long after it RClose()s the handle, exactly like the old
    // memory-mapped archive. gCloseFile() must then not free it.
    gFile->m_Flags |= COS_MAPPED;
    return (LPBYTE)gFile->m_FileHandle;   // whole file already resident
}

// --- enumeration (gFindFirst / gFindNext) over the manifest -----------------

LPGSCFindInfo CGSCset::gFindFirst(LPCSTR lpcsMask)
{
    char up[128]; up[0] = 0;
    if (lpcsMask) { strncpy(up, lpcsMask, 127); up[127] = 0; }
    for (char* p = up; *p; p++) { if (*p == '\\') *p = '/'; *p = (char)toupper((unsigned char)*p); }

    load_manifest();

    LPGSCFindInfo fi = NULL;
    LPGSCFileList tail = NULL;
    for (int i = 0; i < g_nnames; i++) {
        if (!isiMatchesMask(g_names[i], up)) continue;
        LPGSCFileList item = new TGSCFileList;
        item->m_NextEntry = NULL;
        strncpy(item->m_FileName, base_name(g_names[i]), 63);
        item->m_FileName[63] = 0;
        if (!fi) {
            fi = new TGSCFindInfo;
            fi->m_FileList = item; fi->m_Pos = item;
        } else {
            tail->m_NextEntry = item;
        }
        tail = item;
    }
    if (!fi) return NULL;
    strncpy(fi->m_FileName, fi->m_Pos->m_FileName, 63);
    fi->m_FileName[63] = 0;
    return fi;
}

BOOL CGSCset::gFindNext(LPGSCFindInfo gFindInfo)
{
    if (!gFindInfo) return FALSE;
    gFindInfo->m_Pos = gFindInfo->m_Pos->m_NextEntry;
    if (gFindInfo->m_Pos) {
        strncpy(gFindInfo->m_FileName, gFindInfo->m_Pos->m_FileName, 63);
        gFindInfo->m_FileName[63] = 0;
        return TRUE;
    }
    LPGSCFileList a, b = gFindInfo->m_FileList;
    while (b) { a = b; b = a->m_NextEntry; delete a; }
    delete gFindInfo;
    return FALSE;
}
