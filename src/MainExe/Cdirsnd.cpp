// ==============================================
// Эмулятор DirectSound на базе SDL2 Mixer
// MR.CODERMAN 2025
// ==============================================
#include "cdirsnd.h"
#include <stdio.h>
#include <math.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include "platform.h"
#endif

extern void dbglog(const char* fmt, ...);
#include <string>

#ifdef __EMSCRIPTEN__
// Native WebAudio backend (WebSound.cpp / web/cos_audio.js). Channel == bufferNum; volumes are
// 0..1 gains; panning is L/R weights 0..1. No SDL anywhere in this path.
extern "C" {
    int  cosa_init(int rate);
    void cosa_free(int handle);
    int  cosa_play(int channel, int handle, int loops);
    void cosa_halt(int channel);
    int  cosa_playing(int channel);
    void cosa_volume(int channel, float v01);
    void cosa_pan(int channel, float l01, float r01);
    void cosa_close(void);
    int  cosw_load_pcm(const void* smp, int bytes, int channels, int rate, int bits);
}
#endif

static void ConvertUTF8ToWindows1251(const char* utf8Str, char* outBuf, int outBufSize) {
    WCHAR wideBuf[256];
    int wideLen = MultiByteToWideChar(CP_UTF8, 0, utf8Str, -1, wideBuf, 256);
    if (wideLen == 0) {
        strncpy(outBuf, utf8Str, outBufSize - 1);
        outBuf[outBufSize - 1] = '\0';
        return;
    }
    WideCharToMultiByte(1251, 0, wideBuf, -1, outBuf, outBufSize, NULL, NULL);
}

static void CreateWAVHeader(LPWAVEFORMATEX format, DWORD dataSize, char* headerBuf, DWORD* headerSize) {
    *headerSize = 44;
    char* buf = headerBuf;

    memcpy(buf, "RIFF", 4); buf += 4;
    DWORD chunkSize = 36 + dataSize;
    memcpy(buf, &chunkSize, 4); buf += 4;
    memcpy(buf, "WAVE", 4); buf += 4;

    memcpy(buf, "fmt ", 4); buf += 4;
    DWORD subchunk1Size = 16;
    memcpy(buf, &subchunk1Size, 4); buf += 4;
    memcpy(buf, &format->wFormatTag, 2); buf += 2;
    memcpy(buf, &format->nChannels, 2); buf += 2;
    memcpy(buf, &format->nSamplesPerSec, 4); buf += 4;
    memcpy(buf, &format->nAvgBytesPerSec, 4); buf += 4;
    memcpy(buf, &format->nBlockAlign, 2); buf += 2;
    memcpy(buf, &format->wBitsPerSample, 2); buf += 2;

    memcpy(buf, "data", 4); buf += 4;
    memcpy(buf, &dataSize, 4); buf += 4;
}

void CDirSound::CreateDirSound(HWND hWnd) {
    dbglog("    CreateDirSound: entered, this=%p, sizeof(CDirSound)=%u\n", (void*)this, (unsigned)sizeof(CDirSound));
    m_hWindow = hWnd;
    dbglog("    CreateDirSound: m_hWindow set\n");
    m_pDirectSoundObj = NULL;
    m_currentBufferNum = 0;
    dbglog("    CreateDirSound: before m_iniPath assignment\n");
    strncpy(m_iniPath, "dd.ini", sizeof(m_iniPath) - 1);
    m_iniPath[sizeof(m_iniPath) - 1] = '\0';
    dbglog("    CreateDirSound: m_iniPath set, starting array init (%d elements)\n", MAXSND1);

    for (UINT x = 0; x < MAXSND1; ++x) {
        m_bufferPointers[x] = NULL;
        m_bufferSizes[x] = 0;
        BufIsRun[x] = 0;
        m_channels[x] = -1;
        Volume[x] = 0;
        SrcX[x] = 0;
        SrcY[x] = 0;
    }
    dbglog("    CreateDirSound: arrays init done\n");

#ifdef __EMSCRIPTEN__
    if (cosa_init(22050) != 0) { dbglog("    CreateDirSound: WebAudio unavailable\n"); return; }
    m_pDirectSoundObj = (void*)1;
    InitAudio(m_iniPath);
#else
    dbglog("    CreateDirSound: SDL_Init(SDL_INIT_AUDIO)...\n");
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        dbglog("    CreateDirSound: SDL_Init(AUDIO) failed: %s, trying dummy...\n", SDL_GetError());
        SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
        if (SDL_Init(SDL_INIT_AUDIO) < 0) {
            dbglog("    CreateDirSound: SDL_Init(AUDIO) dummy also failed: %s\n", SDL_GetError());
            return;
        }
    }
    dbglog("    CreateDirSound: SDL_Init(AUDIO) OK\n");

    dbglog("    CreateDirSound: Mix_OpenAudio...\n");
    if (Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 2048) < 0) {
        dbglog("    CreateDirSound: Mix_OpenAudio failed: %s, trying dummy...\n", Mix_GetError());
        SDL_QuitSubSystem(SDL_INIT_AUDIO);
        SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
        if (SDL_InitSubSystem(SDL_INIT_AUDIO) < 0 ||
            Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 2048) < 0) {
            dbglog("    CreateDirSound: dummy audio also failed\n");
            SDL_Quit();
            return;
        }
    }
    dbglog("    CreateDirSound: Mix_OpenAudio OK\n");

    m_pDirectSoundObj = (void*)1;
    Mix_AllocateChannels(MAXSND1);
    InitAudio(m_iniPath);
#endif
}


void CDirSound::InitAudio(const char* iniPath) {
    // ROOT CAUSE of "saved sound settings don't apply on restart": this used to unconditionally
    // read dd.ini's "MusicVolume" key and apply it via UpdateMusicVolume(), clobbering the
    // volume that WinMain already applied from the REAL settings file (mode2.dat/MidiSound) a
    // moment earlier. dd.ini's MusicVolume is DEAD DATA — SetGlobalMusicVolume (its only writer)
    // is never called anywhere in the codebase, and dd.ini doesn't even ship in the data tree, so
    // GetPrivateProfileIntA always fell through to its fallback (MaxSlider = 100%), silently
    // resetting the music to full volume right after boot applied the user's real saved value.
    // mode2.dat's SetCDVolume(MidiSound) (called in WinMain, before this) is the single source
    // of truth now — nothing else may touch the music gain at startup.
    (void)iniPath;
}

void CDirSound::UpdateMusicVolume(int pos) {
    if (pos < 0) pos = 0;
    if (pos > MaxSlider) pos = MaxSlider;

    float f = static_cast<float>(pos) / MaxSlider;
#ifdef __EMSCRIPTEN__
    cosa_volume(COSA_MUSIC_CH, f);                 // music channel gain 0..1
#else
    int sdlVol = static_cast<int>(f * SDL_MAX);
    Mix_VolumeMusic(sdlVol);
#endif
}

CDirSound::~CDirSound() {
    if (m_pDirectSoundObj != NULL)
        ReleaseAll();
}

void CDirSound::ReleaseAll() {
#ifdef __EMSCRIPTEN__
    for (UINT x = 1; x <= m_currentBufferNum && x < MAXSND1; ++x) cosa_halt(x);
    cosa_halt(COSA_MUSIC_CH);
    for (UINT x = 1; x <= m_currentBufferNum && x < MAXSND1; ++x) {
        intptr_t h = (intptr_t)m_bufferPointers[x];
        if (h) {
            for (UINT y = x + 1; y <= m_currentBufferNum && y < MAXSND1; ++y)
                if ((intptr_t)m_bufferPointers[y] == h) m_bufferPointers[y] = 0;   /* shared dup */
            cosa_free((int)h);
        }
        m_bufferPointers[x] = 0; m_bufferSizes[x] = 0; m_channels[x] = -1;
        Volume[x] = 0; BufIsRun[x] = 0; SrcX[x] = 0; SrcY[x] = 0;
    }
    m_currentBufferNum = 0;
    m_pDirectSoundObj = NULL;
    memset(BufIsRun, 0, sizeof(BufIsRun));
#else
    // Останавливаем всё воспроизведение
    Mix_HaltChannel(-1);
    Mix_HaltMusic();

    // Небольшая пауза, даём внутренним потокам миксера завершить работу
    SDL_Delay(30);

    // Защитный предел — реальный размер массива m_bufferPointers
    size_t maxBuffers = sizeof(m_bufferPointers) / sizeof(m_bufferPointers[0]);

    // Временные массивы для уникальных чанков (максимум maxBuffers уникальных)
    Mix_Chunk** uniq = new Mix_Chunk * [maxBuffers];
    int* uniqCount = new int[maxBuffers];
    for (size_t i = 0; i < maxBuffers; ++i) { uniq[i] = NULL; uniqCount[i] = 0; }

    // Собираем уникальные чанки и считаем вхождения
    size_t uniqN = 0;
    for (UINT x = 1; x <= m_currentBufferNum && x < maxBuffers; ++x) {
        Mix_Chunk* chunk = m_bufferPointers[x];
        if (chunk == NULL) continue;

        // грубая проверка на явно неверные указатели
        size_t addr = (size_t)chunk;
        if (addr <= 0x10000) {
            // считаем как невалидный — просто зануляем слот и продолжим
            m_bufferPointers[x] = NULL;
            m_channels[x] = -1;
            continue;
        }

        // ищем в уже добавленных
        size_t found = SIZE_MAX;
        for (size_t j = 0; j < uniqN; ++j) {
            if (uniq[j] == chunk) { found = j; break; }
        }
        if (found != SIZE_MAX) {
            uniqCount[found] += 1;
        }
        else {
            // добавляем новый уникальный
            uniq[uniqN] = chunk;
            uniqCount[uniqN] = 1;
            uniqN++;
        }
    }

    // Для каждого уникального чанка: сперва освободим внутренний буфер abuf (если есть),
    // затем освободим сам chunk через Mix_FreeChunk. Это предотвращает утечки и double-free.
    for (size_t j = 0; j < uniqN; ++j) {
        Mix_Chunk* ch = uniq[j];
        if (!ch) continue;

        // Если есть внутренний abuf — освободим его корректно через SDL_FreeWAV
        // (он предназначен для освобождения wav-буферов, используемых SDL/SDL_mixer).
        // Проверяем существование поля abuf и освобождаем, затем зануляем поля.
        if (ch->abuf != NULL) {
            // Освобождаем WAV-буфер через SDL API (внутренний аллокатор SDL)
            SDL_FreeWAV(ch->abuf);
            ch->abuf = NULL;
            ch->alen = 0;
            ch->allocated = 0; // чтобы Mix_FreeChunk не пытался снова free(abuf)
        }

        // Если аудио всё ещё инициализировано — освобождаем сам chunk
        if (SDL_WasInit(SDL_INIT_AUDIO) != 0) {
            Mix_FreeChunk(ch);
        }
        else {
            // Если аудио уже не инициализировано — пропускаем free, ОС очистит память при закрытии процесса.
        }
    }

    // Очистим слоты и каналы
    for (UINT x = 1; x <= m_currentBufferNum && x < maxBuffers; ++x) {
        m_bufferPointers[x] = NULL;
        m_bufferSizes[x] = 0;
        m_channels[x] = -1;
        Volume[x] = 0;
        BufIsRun[x] = 0;
        SrcX[x] = 0;
        SrcY[x] = 0;
    }
    m_currentBufferNum = 0;

    // Закрываем аудио и SDL
    if (m_pDirectSoundObj) {
        Mix_CloseAudio();
        SDL_Quit();
        m_pDirectSoundObj = NULL;
    }

    // освобождаем временные массивы
    delete[] uniq;
    delete[] uniqCount;

    memset(BufIsRun, 0, sizeof(BufIsRun));
#endif
}


UINT CDirSound::CreateSoundBuffer(CWave* pWave) {
    if (m_currentBufferNum == MAXSND)
        return 0;

    ++m_currentBufferNum;

    char* waveData = pWave->GetWaveDataPtr();
    DWORD waveSize = pWave->GetWaveSize();
    LPWAVEFORMATEX waveFormat = pWave->GetWaveFormatPtr();
    if (!waveData || waveSize == 0 || !waveFormat) {
        return 0;
    }

#ifdef __EMSCRIPTEN__
    int h = cosw_load_pcm(waveData, (int)waveSize, waveFormat->nChannels,
                          (int)waveFormat->nSamplesPerSec, waveFormat->wBitsPerSample);
    if (!h) return 0;
    m_bufferPointers[m_currentBufferNum] = (SndChunk)(intptr_t)h;
#else
    char headerBuf[44];
    DWORD headerSize;
    CreateWAVHeader(waveFormat, waveSize, headerBuf, &headerSize);
    char* wavData = new char[headerSize + waveSize];
    memcpy(wavData, headerBuf, headerSize);
    memcpy(wavData + headerSize, waveData, waveSize);

    SDL_RWops* rw = SDL_RWFromMem(wavData, headerSize + waveSize);
    if (!rw) {
        delete[] wavData;
        return 0;
    }

    Mix_Chunk* chunk = Mix_LoadWAV_RW(rw, 0);
    SDL_RWclose(rw);
    delete[] wavData;
    if (!chunk) {
        return 0;
    }

    m_bufferPointers[m_currentBufferNum] = chunk;
#endif
    m_bufferSizes[m_currentBufferNum] = waveSize;
    Volume[m_currentBufferNum] = 0;
    return m_currentBufferNum;
}

UINT CDirSound::DuplicateSoundBuffer(UINT bufferNum) {
    if (m_currentBufferNum == MAXSND || bufferNum == 0 || bufferNum > m_currentBufferNum)
        return 0;

    ++m_currentBufferNum;
    SndChunk srcChunk = m_bufferPointers[bufferNum];
    if (!srcChunk)
        return 0;

    m_bufferPointers[m_currentBufferNum] = srcChunk;   /* duplicates SHARE the decoded buffer */
#ifdef __EMSCRIPTEN__
    m_bufferSizes[m_currentBufferNum] = m_bufferSizes[bufferNum];
#else
    m_bufferSizes[m_currentBufferNum] = srcChunk->alen;
#endif
    Volume[m_currentBufferNum] = Volume[bufferNum];
    return m_currentBufferNum;
}

BOOL CDirSound::CopyWaveToBuffer(CWave* pWave, UINT bufferNum) {
    if (bufferNum > m_currentBufferNum || bufferNum == 0)
        return FALSE;

#ifdef __EMSCRIPTEN__
    if (m_bufferPointers[bufferNum]) cosa_free((int)(intptr_t)m_bufferPointers[bufferNum]);
#else
    if (m_bufferPointers[bufferNum])
        Mix_FreeChunk(m_bufferPointers[bufferNum]);
#endif

    char* waveData = pWave->GetWaveDataPtr();
    DWORD waveSize = pWave->GetWaveSize();
    LPWAVEFORMATEX waveFormat = pWave->GetWaveFormatPtr();
    if (!waveData || waveSize == 0 || !waveFormat) {
        return FALSE;
    }

#ifdef __EMSCRIPTEN__
    {
        int h = cosw_load_pcm(waveData, (int)waveSize, waveFormat->nChannels,
                              (int)waveFormat->nSamplesPerSec, waveFormat->wBitsPerSample);
        if (!h) { m_bufferPointers[bufferNum] = 0; return FALSE; }
        m_bufferPointers[bufferNum] = (SndChunk)(intptr_t)h;
        m_bufferSizes[bufferNum] = waveSize;
        return TRUE;
    }
#else
    char headerBuf[44];
    DWORD headerSize;
    CreateWAVHeader(waveFormat, waveSize, headerBuf, &headerSize);
    char* wavData = new char[headerSize + waveSize];
    memcpy(wavData, headerBuf, headerSize);
    memcpy(wavData + headerSize, waveData, waveSize);

    SDL_RWops* rw = SDL_RWFromMem(wavData, headerSize + waveSize);
    if (!rw) {
        delete[] wavData;
        return FALSE;
    }

    Mix_Chunk* chunk = Mix_LoadWAV_RW(rw, 0);
    SDL_RWclose(rw);
    delete[] wavData;
    if (!chunk) {
        return FALSE;
    }

    m_bufferPointers[bufferNum] = chunk;
#endif
    m_bufferSizes[bufferNum] = waveSize;
    return TRUE;
}

BOOL CDirSound::DirectSoundOK() {
    return m_pDirectSoundObj != NULL;
}

BOOL CDirSound::PlaySound(UINT bufferNum) {
    if (bufferNum > m_currentBufferNum || bufferNum == 0)
        return FALSE;

    SndChunk chunk = m_bufferPointers[bufferNum];
    if (!chunk)
        return FALSE;

#ifdef __EMSCRIPTEN__
    int channel = cosa_play((int)bufferNum, (int)(intptr_t)chunk, 0);
#else
    int channel = Mix_PlayChannel(bufferNum, chunk, 0);
#endif
    if (channel < 0) {
        return FALSE;
    }

    m_channels[bufferNum] = channel;
    BufIsRun[bufferNum] = 0;
    if (bufferNum != 1) {
        SetVolume(bufferNum, Volume[bufferNum]);
    }
    return TRUE;
}

BOOL CDirSound::PlayCoorSound(UINT bufferNum, int x, int vx) {
    if (bufferNum > m_currentBufferNum || bufferNum == 0)
        return FALSE;

    SndChunk chunk = m_bufferPointers[bufferNum];
    if (!chunk)
        return FALSE;

#ifdef __EMSCRIPTEN__
    int channel = cosa_play((int)bufferNum, (int)(intptr_t)chunk, 0);
#else
    int channel = Mix_PlayChannel(bufferNum, chunk, 0);
#endif
    if (channel < 0) {
        return FALSE;
    }

    m_channels[bufferNum] = channel;
    BufIsRun[bufferNum] = 1;
    SrcX[bufferNum] = x;
    SrcY[bufferNum] = vx;
    if (bufferNum != 1) {
        SetVolume(bufferNum, Volume[bufferNum]);
    }
    ControlPan(bufferNum);
    return TRUE;
}

extern int CenterX;

void CDirSound::ControlPan(UINT bufferNum) {
    static DWORD lastUpdate[MAXSND1] = { 0 };
    DWORD currentTime = GetTickCount();   /* platform shim; no SDL on the web build */
    if (BufIsRun[bufferNum] && (currentTime - lastUpdate[bufferNum] > 100)) {
        SrcX[bufferNum] += SrcY[bufferNum];
        int pan = (SrcX[bufferNum] - CenterX) << 1;

        if (pan < -4000) pan = -4000;
        if (pan > 4000) pan = 4000;

        SetPan(bufferNum, pan);

        if (rand() < 350) {
            IsPlaying(bufferNum);
        }
        lastUpdate[bufferNum] = currentTime;
    }
}

void CDirSound::SetVolume(UINT bufferNum, int vol) {
    if (bufferNum > m_currentBufferNum || bufferNum == 0)
        return;

    if (vol < -10000) vol = -10000;
    if (vol > 0) vol = 0;

    int sdlVol = 0;
    if (vol > -10000) {
        double db = vol / 100.0;
        double linear = pow(10.0, db / 20.0);
        sdlVol = static_cast<int>(linear * 128.0);
        if (sdlVol < 0) sdlVol = 0;
        if (sdlVol > 128) sdlVol = 128;
        if (vol <= -4000) sdlVol = 0;
    }

#ifdef __EMSCRIPTEN__
    // v1.42 parity: volume belongs to the BUFFER and sticks even before the first Play.
    // Channels are fixed 1:1 to buffer numbers in the WebAudio backend, so apply directly —
    // waiting for m_channels (>=0 only after the first Play) silently dropped pre-play volume.
    cosa_volume((int)bufferNum, sdlVol / 128.0f);
#else
    int channel = m_channels[bufferNum];
    if (channel >= 0) {
        Mix_Volume(channel, sdlVol);
    }
#endif

    Volume[bufferNum] = vol;
}

void CDirSound::SetPan(UINT bufferNum, int pan) {
    if (bufferNum > m_currentBufferNum || bufferNum == 0)
        return;

    if (pan < -10000) pan = -10000;
    if (pan > 10000) pan = 10000;

    int left, right;
    if (pan <= -10000) {
        left = 255; right = 0;
    }
    else if (pan >= 10000) {
        left = 0; right = 255;
    }
    else {
        double normalizedPan = (pan + 10000.0) / 20000.0;
        left = static_cast<int>(255.0 * (1.0 - normalizedPan));
        right = static_cast<int>(255.0 * normalizedPan);
    }

#ifdef __EMSCRIPTEN__
    // v1.42 parity: pan sticks to the buffer/channel even before the first Play (PlayEffect sets
    // pan BEFORE PlaySound — the old m_channels gate lost the pan of every first playback).
    cosa_pan((int)bufferNum, left / 255.0f, right / 255.0f);
#else
    int channel = m_channels[bufferNum];
    if (channel >= 0) {
        Mix_SetPanning(channel, left, right);
    }
#endif
}

void CDirSound::ProcessSoundSystem() {
    for (int i = 0; i < MAXSND1; i++) {
        if (BufIsRun[i]) {
            ControlPan(i);
        }
    }
}

BOOL CDirSound::StopSound(UINT bufferNum) {
    if (bufferNum > m_currentBufferNum || bufferNum == 0)
        return FALSE;

    int channel = m_channels[bufferNum];
    if (channel >= 0) {
#ifdef __EMSCRIPTEN__
        cosa_halt(channel);
#else
        Mix_HaltChannel(channel);
#endif
        m_channels[bufferNum] = -1;
    }
    BufIsRun[bufferNum] = 0;
    return TRUE;
}

int CDirSound::GetPos(UINT bufferNum) {
    return 0;
}

bool CDirSound::IsPlaying(UINT bufferNum) {
    if (bufferNum > m_currentBufferNum || bufferNum == 0)
        return false;

    int channel = m_channels[bufferNum];
    if (channel < 0) {
        BufIsRun[bufferNum] = 0;   // never played -> certainly not running
        return false;
    }

#ifdef __EMSCRIPTEN__
    bool play = cosa_playing(channel) != 0;
#else
    bool play = Mix_Playing(channel) != 0;
#endif
    // v1.42 parity: when a buffer has finished, drop its coordinate-pan flag. 1.52 lost this
    // reset, so every PlayCoorSound buffer stayed "running" forever — ProcessSoundSystem kept
    // panning dead buffers and smeared their pan onto whatever played next on those channels.
    if (!play)
        BufIsRun[bufferNum] = 0;
    return play;
}

void CDirSound::SetGlobalSoundVolume(int vol) {
    if (vol < -10000) vol = -10000;
    if (vol > 0) vol = 0;

    for (UINT i = 2; i <= m_currentBufferNum; ++i) {
        Volume[i] = vol;
        if (IsPlaying(i)) {
            SetVolume(i, vol);
        }
    }
}

void CDirSound::SetGlobalMusicVolume(int vol) {
    WritePrivateProfileStringA("Audio Options", "MusicVolume", std::to_string(vol).c_str(), m_iniPath);
    UpdateMusicVolume(vol);
}

void CDirSound::SetLastVolume(short Vol) {
    if (m_currentBufferNum != 1) {
        Volume[m_currentBufferNum] = Vol;
    }
}