// platform/mmsystem.h
// Stub for Windows Multimedia System API (mmsystem.h) on non-Windows platforms
// Provides type definitions and no-op stubs for compilation

#pragma once

#ifdef _WIN32
    #include_next <mmsystem.h>
#else

#include <stdint.h>
#include <string.h>

#ifndef _PLATFORM_TYPES_H_INCLUDED
#include "platform_types.h"
#endif

// ============================================================================
// Basic multimedia types
// ============================================================================
typedef UINT   MMRESULT;
typedef DWORD  FOURCC;
typedef void*  HMMIO;
typedef void*  HMIXER;
typedef void*  HMIXEROBJ;

// ============================================================================
// Error codes
// ============================================================================
#define MMSYSERR_NOERROR    0
#define MMSYSERR_ERROR      1
#define MMSYSERR_ALLOCATED  4
#define MMSYSERR_NOMEM      7

// ============================================================================
// WAVEFORMATEX
// ============================================================================
#pragma pack(push, 1)
typedef struct tWAVEFORMATEX {
    WORD  wFormatTag;
    WORD  nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD  nBlockAlign;
    WORD  wBitsPerSample;
    WORD  cbSize;
} WAVEFORMATEX, *LPWAVEFORMATEX;
typedef const WAVEFORMATEX *LPCWAVEFORMATEX;
#pragma pack(pop)

#define WAVE_FORMAT_PCM 1

// ============================================================================
// MMIO types and constants
// ============================================================================
typedef struct {
    FOURCC ckid;
    DWORD  cksize;
    FOURCC fccType;
    DWORD  dwDataOffset;
    DWORD  dwFlags;
} MMCKINFO;

#define MMIO_READ       0x00000000
#define MMIO_ALLOCBUF   0x00010000
#define MMIO_FINDRIFF   0x00000020
#define MMIO_FINDCHUNK  0x00000010

#define mmioFOURCC(ch0, ch1, ch2, ch3) \
    ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | \
     ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24))

// MMIO implementation for WAV file loading
#include <stdio.h>
#include <ctype.h>

#ifdef __EMSCRIPTEN__
#ifdef __cplusplus
extern "C" int cos_fetch_file(const char* canon);   // lazy-fetch backend (cos_data.js)
#else
extern int cos_fetch_file(const char* canon);
#endif
#endif

static inline HMMIO mmioOpen(char* fileName, void* info, DWORD flags) {
    (void)info; (void)flags;
    if (!fileName) return NULL;
#ifdef __EMSCRIPTEN__
    // Game sounds (CWave: "Sound\\*.wav") live in the lazy-fetched data tree, not in MEMFS cwd.
    // Canonicalise (UPPER, forward slashes) and route through the same fetch backend as every
    // other asset: /local override first, then fetch -> /game/<canon>. Plain fopen stays as a
    // final fallback for genuinely local temp files.
    {
        char canon[512]; int i = 0;
        const char* s = fileName;
        while (*s == '.' && (s[1] == '/' || s[1] == '\\')) s += 2;
        while (*s == '/' || *s == '\\') s++;
        for (; s[i] && i < 511; i++) {
            char c = s[i];
            canon[i] = (c == '\\') ? '/' : (char)toupper((unsigned char)c);
        }
        canon[i] = 0;
        char p[600];
        snprintf(p, sizeof p, "/local/%s", canon);
        FILE* f = fopen(p, "rb");
        if (!f && cos_fetch_file(canon) == 0) {
            snprintf(p, sizeof p, "/game/%s", canon);
            f = fopen(p, "rb");
        }
        if (f) return (HMMIO)f;
    }
#endif
    FILE* f = fopen(fileName, "rb");
    return (HMMIO)f;
}

static inline MMRESULT mmioDescend(HMMIO h, MMCKINFO* ck, MMCKINFO* parent, UINT flags) {
    FILE* f = (FILE*)h;
    if (!f || !ck) return MMSYSERR_ERROR;

    if (flags & MMIO_FINDRIFF) {
        // Read RIFF header: "RIFF" + size + type
        DWORD riffId, riffSize, riffType;
        if (fread(&riffId, 4, 1, f) != 1) return MMSYSERR_ERROR;
        if (fread(&riffSize, 4, 1, f) != 1) return MMSYSERR_ERROR;
        if (fread(&riffType, 4, 1, f) != 1) return MMSYSERR_ERROR;
        if (riffId != mmioFOURCC('R','I','F','F')) return MMSYSERR_ERROR;
        if (riffType != ck->fccType) return MMSYSERR_ERROR;
        ck->ckid = riffId;
        ck->cksize = riffSize;
        ck->dwDataOffset = 12; // data starts after RIFF header
        return MMSYSERR_NOERROR;
    }

    if (flags & MMIO_FINDCHUNK) {
        // Search for a sub-chunk within parent
        long searchStart = parent ? (long)parent->dwDataOffset : 12;
        long searchEnd = parent ? (long)(parent->dwDataOffset + parent->cksize - 4) : 0x7FFFFFFF;
        fseek(f, searchStart, SEEK_SET);

        while (ftell(f) < searchEnd) {
            DWORD chunkId, chunkSize;
            long pos = ftell(f);
            if (fread(&chunkId, 4, 1, f) != 1) return MMSYSERR_ERROR;
            if (fread(&chunkSize, 4, 1, f) != 1) return MMSYSERR_ERROR;
            if (chunkId == ck->ckid) {
                ck->cksize = chunkSize;
                ck->dwDataOffset = (DWORD)(pos + 8);
                return MMSYSERR_NOERROR;
            }
            // Skip this chunk (pad to even boundary)
            long skip = (long)chunkSize;
            if (skip & 1) skip++;
            fseek(f, skip, SEEK_CUR);
        }
        return MMSYSERR_ERROR;
    }

    return MMSYSERR_ERROR;
}

static inline MMRESULT mmioAscend(HMMIO h, MMCKINFO* ck, UINT flags) {
    (void)flags;
    FILE* f = (FILE*)h;
    if (!f || !ck) return MMSYSERR_ERROR;
    // Seek past the end of this chunk (pad to even)
    long end = (long)(ck->dwDataOffset + ck->cksize);
    if (end & 1) end++;
    fseek(f, end, SEEK_SET);
    return MMSYSERR_NOERROR;
}

static inline long mmioRead(HMMIO h, char* buf, long len) {
    FILE* f = (FILE*)h;
    if (!f || !buf || len <= 0) return -1;
    size_t r = fread(buf, 1, (size_t)len, f);
    return (r == 0 && ferror(f)) ? -1 : (long)r;
}

static inline MMRESULT mmioClose(HMMIO h, UINT flags) {
    (void)flags;
    FILE* f = (FILE*)h;
    if (f) fclose(f);
    return MMSYSERR_NOERROR;
}

// ============================================================================
// Memory allocation macros (used by CWave)
// ============================================================================
#include <stdlib.h>
#define GMEM_MOVEABLE 0x0002
#define GlobalAllocPtr(flags, size) malloc(size)
#define GlobalFreePtr(ptr)          free(ptr)

// ============================================================================
// Mixer types and constants
// ============================================================================
#define MIXER_SHORT_NAME_CHARS  16
#define MIXER_LONG_NAME_CHARS   64
#define MAXPNAMELEN             32

typedef struct tagMIXERLINE {
    DWORD cbStruct;
    DWORD dwDestination;
    DWORD dwSource;
    DWORD dwLineID;
    DWORD fdwLine;
    DWORD dwUser;
    DWORD dwComponentType;
    DWORD cChannels;
    DWORD cConnections;
    DWORD cControls;
    char  szShortName[MIXER_SHORT_NAME_CHARS];
    char  szName[MIXER_LONG_NAME_CHARS];
    struct {
        DWORD dwType;
        DWORD dwDeviceID;
        WORD  wMid;
        WORD  wPid;
        DWORD vDriverVersion;
        char  szPname[MAXPNAMELEN];
    } Target;
} MIXERLINE;

typedef struct tagMIXERCONTROL {
    DWORD cbStruct;
    DWORD dwControlID;
    DWORD dwControlType;
    DWORD fdwControl;
    DWORD cMultipleItems;
    char  szShortName[MIXER_SHORT_NAME_CHARS];
    char  szName[MIXER_LONG_NAME_CHARS];
    union {
        struct { LONG lMinimum; LONG lMaximum; } l;
        struct { DWORD dwMinimum; DWORD dwMaximum; } dw;
        DWORD dwReserved[6];
    } Bounds;
    union {
        DWORD cSteps;
        DWORD cbCustomData;
        DWORD dwReserved[6];
    } Metrics;
} MIXERCONTROL;

typedef struct tagMIXERLINECONTROLS {
    DWORD       cbStruct;
    DWORD       dwLineID;
    union {
        DWORD   dwControlID;
        DWORD   dwControlType;
    };
    DWORD       cControls;
    DWORD       cbmxctrl;
    MIXERCONTROL* pamxctrl;
} MIXERLINECONTROLS;

typedef struct tagMIXERCONTROLDETAILS {
    DWORD cbStruct;
    DWORD dwControlID;
    DWORD cChannels;
    union {
        HWND  hwndOwner;
        DWORD cMultipleItems;
    };
    DWORD cbDetails;
    void* paDetails;
} MIXERCONTROLDETAILS;

typedef struct tagMIXERCONTROLDETAILS_UNSIGNED {
    DWORD dwValue;
} MIXERCONTROLDETAILS_UNSIGNED;

// Mixer component types
#define MIXERLINE_COMPONENTTYPE_DST_FIRST       0x00000000
#define MIXERLINE_COMPONENTTYPE_DST_SPEAKERS     (MIXERLINE_COMPONENTTYPE_DST_FIRST + 4)
#define MIXERLINE_COMPONENTTYPE_SRC_FIRST       0x00001000
#define MIXERLINE_COMPONENTTYPE_SRC_WAVEOUT      (MIXERLINE_COMPONENTTYPE_SRC_FIRST + 8)
#define MIXERLINE_COMPONENTTYPE_SRC_LAST        0x00001FFF

// Mixer flags
#define MIXER_OBJECTF_HMIXER                    0x80000000
#define MIXER_GETLINEINFOF_COMPONENTTYPE        0x00000003
#define MIXER_GETLINEINFOF_SOURCE               0x00000001
#define MIXER_GETLINECONTROLSF_ONEBYTYPE        0x00000002

// Callback flags
#define CALLBACK_NULL   0x00000000
#define CALLBACK_WINDOW 0x00010000

// Mixer function stubs (all return error / no-op)
static inline UINT mixerGetNumDevs(void) { return 0; }
static inline MMRESULT mixerOpen(HMIXER* ph, UINT id, DWORD_PTR cb, DWORD_PTR inst, DWORD flags) {
    (void)ph; (void)id; (void)cb; (void)inst; (void)flags;
    if(ph) *ph = NULL;
    return MMSYSERR_ERROR;
}
static inline MMRESULT mixerClose(HMIXER h) { (void)h; return MMSYSERR_NOERROR; }
static inline MMRESULT mixerGetLineInfo(HMIXEROBJ h, MIXERLINE* ml, DWORD flags) {
    (void)h; (void)ml; (void)flags; return MMSYSERR_ERROR;
}
static inline MMRESULT mixerGetLineControls(HMIXEROBJ h, MIXERLINECONTROLS* mlc, DWORD flags) {
    (void)h; (void)mlc; (void)flags; return MMSYSERR_ERROR;
}
static inline MMRESULT mixerGetControlDetails(HMIXEROBJ h, MIXERCONTROLDETAILS* mcd, DWORD flags) {
    (void)h; (void)mcd; (void)flags; return MMSYSERR_ERROR;
}
static inline MMRESULT mixerSetControlDetails(HMIXEROBJ h, MIXERCONTROLDETAILS* mcd, DWORD flags) {
    (void)h; (void)mcd; (void)flags; return MMSYSERR_ERROR;
}

// ============================================================================
// MCI types (used by DeviceCD — mostly SDL2-replaced, but types still needed)
// ============================================================================
typedef UINT MCIDEVICEID;
typedef DWORD MCIERROR;

#endif // _WIN32
