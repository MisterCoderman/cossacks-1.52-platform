// ==============================================
// �������� DirectSound �� ���� SDL2 Mixer
// MR.CODERMAN 2025
// ==============================================
#ifndef __CDIRSND_H
#define __CDIRSND_H

#ifdef _WIN32
    #include <windows.h>
#else
    #include "platform.h"
#endif
#include "cwave.h"
#include <mmsystem.h>
#ifdef __EMSCRIPTEN__
    // Native WebAudio backend (WebSound.cpp + web/cos_audio.js): a buffer slot holds a cosa_*
    // handle (int), not an SDL_mixer chunk. No SDL headers on the web build.
    typedef intptr_t SndChunk;
#else
    #include <SDL.h>
    #include <SDL_mixer.h>
    typedef Mix_Chunk* SndChunk;
#endif

#define MAXSND 1024
#define MAXSND1 2048
#define MaxSlider 1000
#define SDL_MAX 1024
#define COSA_MUSIC_CH 2148   /* WebAudio channel reserved for the music track (above all SFX) */

// Reset alignment to default — CDirSound must not inherit pack(1)
// from MapDiscr.h which leaks #pragma pack(1) without pop.
#pragma pack(push)
#pragma pack()

class CDirSound {
protected:
    void* m_pDirectSoundObj; // SDL audio context (opaque)
    HWND m_hWindow;
    SndChunk m_bufferPointers[MAXSND1]; // web: cosa handles; native: SDL_mixer chunks
    DWORD m_bufferSizes[MAXSND1];
    int m_channels[MAXSND1];

public:
    short Volume[MAXSND1];
    short SrcX[MAXSND1];
    short SrcY[MAXSND1];
    byte BufIsRun[MAXSND1];
    UINT m_currentBufferNum;
    void CreateDirSound(HWND hWnd); // Reverted to single argument
    ~CDirSound();
    UINT CreateSoundBuffer(CWave* pWave);
    UINT DuplicateSoundBuffer(UINT bufferNum);
    BOOL DirectSoundOK();
    void SetLastVolume(short Vol);
    BOOL CopyWaveToBuffer(CWave* pWave, UINT bufferNum);
    void SetVolume(UINT bufferNum, int vol);
    void SetPan(UINT bufferNum, int pan);
    BOOL PlaySound(UINT bufferNum);
    BOOL StopSound(UINT bufferNum);
    BOOL PlayCoorSound(UINT bufferNum, int x, int vx);
    void ControlPan(UINT bufferNum);
    bool IsPlaying(UINT bufferNum);
    int GetPos(UINT bufferNum);
    void ProcessSoundSystem();
    void SetGlobalSoundVolume(int vol);
    void SetGlobalMusicVolume(int vol);
    void UpdateMusicVolume(int pos);
    void InitAudio(const char* iniPath);

protected:
    void ReleaseAll();
    char m_iniPath[260];
};

#pragma pack(pop)

#endif

#define MaxSnd 1024