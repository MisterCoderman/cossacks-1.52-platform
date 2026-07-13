// ==============================================
// Ёмул€тор MCI на базе SDL2 Mixer
// MR.CODERMAN 2025
// ==============================================
#include "windows.h"
#pragma pack(1)
#include "DeviceCD.h"
#include "TMixer.h"
#include <stdio.h>
#include "ResFile.h"
#include "gFile.h"
#ifdef __EMSCRIPTEN__
// Native WebAudio backend: the track plays on the reserved music channel; "track finished" is
// POLLED from the main loop (PollCDPlayback) via cosa_poll_ended - no audio-thread callback.
#include "cdirsnd.h"              /* COSA_MUSIC_CH */
extern "C" {
    int  cosa_init(int rate);
    void cosa_free(int handle);
    int  cosa_play(int channel, int handle, int loops);
    void cosa_halt(int channel);
    int  cosa_playing(int channel);
    void cosa_volume(int channel, float v01);
    void cosa_pause_all(void);
    void cosa_resume_all(void);
    int  cosa_poll_ended(void);
    int  cosw_load_wav(const void* bytes, int len);
    int  cosa_music_play(const char* canon, int musicCh);   /* ASYNC fetch+decode+start */
    void cosa_music_cancel(int musicCh);                    /* invalidate pending async + halt */
    int  cosa_music_active(int musicCh);                    /* playing OR still downloading */
    void cosa_music_prefetch(const char* canon);            /* warm the decoded cache, no start */
}
typedef intptr_t TrkChunk;
#define MIX_MAX_VOLUME 128
#else
#include <SDL.h>
#include <SDL_mixer.h>
typedef Mix_Chunk* TrkChunk;
#endif

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// √лобальный экземпл€р проигрывател€
CDeviceCD CDPLAY;

//  онфигураци€ треков
int StartTrack = 2;
int NTracks = 19;
byte TracksMask[32] = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

// Ѕуферы загруженных WAV
static TrkChunk chunkTracks[32] = { 0 };
static int currentChannel = -1;
static DWORD currentVolume = 5000;
static bool currentVolumeApplied = false;
static bool SDL_Mixer_Initialized = false;

// ѕеременные дл€ плейлиста
static int PrevTrack1 = -1, PrevTrack2 = -1, PrevTrack3 = -1;
static int NextCommand = -1;

// Deferred playback Ч set by channelFinished callback, consumed by main thread
static volatile int _cd_pending_action = 0; // 0=none, 1=PlayRandomTrack, 2=PlayCDTrack(NextCommand-1000), 3=PlayCDTrack(NextCommand)
static volatile bool _cd_halt_in_progress = false; // suppress callback during explicit halt

// ѕредварительные объ€влени€
static void channelFinished(int channel);
void PlayCDTrack(int Id);
void PlayRandomTrack();
extern HWND hwnd;
extern int CurrentNation, PlayMode;
extern "C" int cos_fetch_file(const char* canon);  // lazy-fetch backend (cos_data.js): 0 ok, -1 absent

/////////////////////////////////////////////////////////////////////////////
// –еализаци€ CDeviceCD

CDeviceCD::CDeviceCD()
{
    // »нициализаци€ SDL_mixer (один раз)
#ifdef __EMSCRIPTEN__
    if (!SDL_Mixer_Initialized) {
        cosa_init(22050);                 /* shared WebAudio context; finished-poll in PollCDPlayback */
        SDL_Mixer_Initialized = true;
    }
#else
    if (!SDL_Mixer_Initialized) {
        if (Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 4096) < 0) {
            SDL_QuitSubSystem(SDL_INIT_AUDIO);
            SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
            SDL_InitSubSystem(SDL_INIT_AUDIO);
            Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 4096);
        }
        Mix_ChannelFinished(channelFinished);

        SDL_Mixer_Initialized = true;
    }
#endif

    // «агрузка конфигурации треков
    if (GFILE* f = Gopen("Tracks.cd", "r")) {
        Gscanf(f, "%d%d", &StartTrack, &NTracks);
        for (int i = 0; i < NTracks; ++i)
            Gscanf(f, "%d", TracksMask + i);
        Gclose(f);
    }

    Open();
}


CDeviceCD::~CDeviceCD()
{
    Close();
}

// Fetch (lazy) + decode a single track chunk on first use. The 18 tracks are ~11.6 MB each
// (~209 MB total), so we must NOT preload them Ч each is pulled from the network only when it is
// first played. Returns true if chunkTracks[idx] is ready. cos_fetch_file routes through the same
// synchronous lazy-fetch backend as every other asset (safe from any thread/callback).
static bool EnsureTrackLoaded(int idx, int trackNum)
{
    if (idx < 0 || idx >= 32) return false;
    if (chunkTracks[idx]) return true;
    char canon[260], memfs[300];
    sprintf(canon, "TRACKS/TRACK_%d.WAV", trackNum);        // canonical (UPPER, forward-slash)
    if (cos_fetch_file(canon) != 0) return false;           // not shipped / 404
    sprintf(memfs, "/game/%s", canon);
#ifdef __EMSCRIPTEN__
    {
        FILE* f = fopen(memfs, "rb");
        if (!f) return false;
        fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
        char* bytes = (char*)malloc(sz > 0 ? (size_t)sz : 1);
        if (!bytes) { fclose(f); return false; }
        fread(bytes, 1, (size_t)sz, f); fclose(f);
        chunkTracks[idx] = (TrkChunk)(intptr_t)cosw_load_wav(bytes, (int)sz);
        free(bytes);
        return chunkTracks[idx] != 0;
    }
#else
    chunkTracks[idx] = Mix_LoadWAV(memfs);                  // decode via SDL_mixer/WebAudio
    return chunkTracks[idx] != nullptr;
#endif
}

bool CDeviceCD::Open()
{
    FOpened = FALSE;
    // Reset any previously-decoded chunks; tracks are (re)loaded lazily in Play().
    for (int i = 0; i < 32; ++i) {
#ifdef __EMSCRIPTEN__
        if (chunkTracks[i]) { cosa_free((int)(intptr_t)chunkTracks[i]); chunkTracks[i] = 0; }
#else
        if (chunkTracks[i]) { Mix_FreeChunk(chunkTracks[i]); chunkTracks[i] = nullptr; }
#endif
    }
    // Do NOT preload here: Open() runs from the static-init CDPLAY constructor, and eagerly
    // fetching all 18 WAV tracks would pull ~209 MB at boot. Mark the device open when the
    // playlist is non-empty; each track is fetched+decoded on demand in Play()/EnsureTrackLoaded.
    FOpened = (NTracks > 0);
    fprintf(stderr, "[CD] Open: NTracks=%d StartTrack=%d FOpened=%d (tracks load on demand)\n", NTracks, StartTrack, FOpened);
    return FOpened;
}

bool CDeviceCD::Close()
{
    if (!FOpened)
        return FALSE;

    // ќстановка всех каналов и очистка
    _cd_halt_in_progress = true;
#ifdef __EMSCRIPTEN__
    cosa_music_cancel(COSA_MUSIC_CH);   /* also invalidates a track still downloading/decoding */
#else
    Mix_HaltChannel(-1);
#endif
    _cd_halt_in_progress = false;
    _cd_pending_action = 0;
    for (int i = 0; i < NTracks; ++i) {
        if (chunkTracks[i]) {
#ifdef __EMSCRIPTEN__
            cosa_free((int)(intptr_t)chunkTracks[i]); chunkTracks[i] = 0;
#else
            Mix_FreeChunk(chunkTracks[i]);
            chunkTracks[i] = nullptr;
#endif
        }
    }

    FOpened = FALSE;
    return TRUE;
}

bool CDeviceCD::Pause()
{
    if (FOpened && currentChannel != -1) {
#ifdef __EMSCRIPTEN__
        cosa_pause_all();
#else
        Mix_Pause(currentChannel);
#endif
        return TRUE;
    }
    return FALSE;
}

bool CDeviceCD::Resume()
{
    if (FOpened && currentChannel != -1) {
#ifdef __EMSCRIPTEN__
        cosa_resume_all();
#else
        Mix_Resume(currentChannel);
#endif
        return TRUE;
    }
    return FALSE;
}

bool CDeviceCD::Stop()
{
    if (FOpened && currentChannel != -1) {
        _cd_halt_in_progress = true;
#ifdef __EMSCRIPTEN__
        cosa_music_cancel(currentChannel);   /* halt + invalidate pending async start */
#else
        Mix_HaltChannel(currentChannel);
#endif
        _cd_halt_in_progress = false;
        _cd_pending_action = 0; // clear any action set by callback during halt
        currentChannel = -1;
        return TRUE;
    }
    return FALSE;
}

DWORD CDeviceCD::GetVolume()
{
    return currentVolume;
}

bool CDeviceCD::SetVolume(DWORD Volume)
{
    // Options calls SetCDVolume(slider) every frame while the tab is open. Keep the dedupe, but
    // do not skip the first call: C++ starts with 5000 while WebAudio starts with gain 1.0.
    if (currentVolumeApplied && Volume == currentVolume) return TRUE;
    currentVolume = Volume;
    int sdlVol = (Volume * MIX_MAX_VOLUME) / 10000;
#ifdef __EMSCRIPTEN__
    cosa_volume(COSA_MUSIC_CH, sdlVol / 128.0f);   /* music only (SDL's -1 hit every channel) */
#else
    Mix_Volume(-1, sdlVol);
#endif
    currentVolumeApplied = true;
    return TRUE;
}

bool CDeviceCD::Play(DWORD Track)
{
    if (!FOpened)
        return FALSE;

    if (Track < StartTrack || Track >= (DWORD)(StartTrack + NTracks))
        return FALSE;

    int idx = Track - StartTrack;

#ifdef __EMSCRIPTEN__
    // ASYNC path: menu-tab transitions call this on the main thread; the old synchronous
    // 11.6 MB XHR + PCM decode froze the UI (and the current track) on every transition.
    // cosa_music_play downloads + decodes off the main thread, keeps the CURRENT track playing
    // until the new one is ready, and drops the request if a newer track is asked for meanwhile.
    (void)idx;
    {
        char canon[64];
        sprintf(canon, "TRACKS/TRACK_%d.WAV", (int)Track);
        _cd_pending_action = 0;
        cosa_music_play(canon, COSA_MUSIC_CH);
        currentChannel = COSA_MUSIC_CH;         /* Stop()/Pause() stay valid while it loads */
        return TRUE;
    }
#else
    if (!chunkTracks[idx] && !EnsureTrackLoaded(idx, (int)Track))  // lazy fetch+decode on first play
        return FALSE;

    // ќстановка предыдущего трека (suppress callback to avoid re-trigger)
    if (currentChannel != -1) {
        _cd_halt_in_progress = true;
        Mix_HaltChannel(currentChannel);
        _cd_halt_in_progress = false;
        _cd_pending_action = 0;
    }

    // ¬оспроизведение нового трека
    currentChannel = Mix_PlayChannel(-1, chunkTracks[idx], 0);
    return (currentChannel >= 0);
#endif
}

/////////////////////////////////////////////////////////////////////////////
// Callback при окончании канала

static void channelFinished(int channel)
{
    if (channel != currentChannel)
        return;

    // Suppress callback during explicit halt (Play/Stop from main thread)
    if (_cd_halt_in_progress)
        return;

    // IMPORTANT: This callback runs inside SDL_mixer's audio thread with the
    // audio lock held. Calling Mix_PlayChannel here would deadlock.
    // Instead, set a flag and let the main thread handle it.

    if (!PlayMode)
    {
        NextCommand = -1;
        return;
    }

    if (NextCommand == -1)
    {
        _cd_pending_action = 1; // request PlayRandomTrack on main thread
    }
    else if (NextCommand >= 1000)
    {
        _cd_pending_action = 2; // request PlayCDTrack(NextCommand - 1000)
    }
    else
    {
        _cd_pending_action = 3; // request PlayCDTrack(NextCommand)
    }
}

// Called from the main thread (e.g. ProcessMessages) to handle deferred track changes
void PollCDPlayback()
{
#ifdef __EMSCRIPTEN__
    /* Native WebAudio: drain channels that finished naturally and run the same playlist logic the
       SDL build got from its audio-thread callback (safe here - main thread). */
    for (int ch; (ch = cosa_poll_ended()) >= 0; )
        channelFinished(ch);
#endif
    int action = _cd_pending_action;
    if (!action) return;
    _cd_pending_action = 0;

    switch (action)
    {
    case 1:
        PlayRandomTrack();
        break;
    case 2:
        PlayCDTrack(NextCommand - 1000);
        NextCommand = -1;
        break;
    case 3:
        PlayCDTrack(NextCommand);
        NextCommand = -1;
        break;
    }
}


/////////////////////////////////////////////////////////////////////////////
// √лобальные функции

void PlayCDTrack(int Id)
{
    CDPLAY.Play(Id);
}

static int PickRandomTrack()
{
    int Track;
    do {
        Track = (((GetTickCount() & 4095) * NTracks) >> 12) + StartTrack;
    } while (Track == PrevTrack1 || Track == PrevTrack2 || Track == PrevTrack3);
    return Track;
}

void PlayRandomTrack()
{
#ifdef __EMSCRIPTEN__
    // Menu-tab transitions call this on EVERY entry. Restarting (= re-downloading + re-decoding)
    // a random track each time is what made the music stutter alongside the UI. If music is
    // already playing (or a track is still on its way), keep it Ч the NEXT track still starts
    // naturally via PollCDPlayback when this one ends. Explicit PlayCDTrack callers (per-nation
    // battle music) bypass this gate.
    if (cosa_music_active(COSA_MUSIC_CH)) return;
    static int s_next = -1;   // pre-picked & prefetched next track (kills the gap at track ends)
#endif
    if (PlayMode == 1 && CurrentNation != -1) {
        PlayCDTrack(TracksMask[CurrentNation]);
        return;
    }

#ifdef __EMSCRIPTEN__
    int Track = (s_next >= StartTrack && s_next < StartTrack + NTracks) ? s_next : PickRandomTrack();
#else
    int Track = PickRandomTrack();
#endif

    PrevTrack3 = PrevTrack2;
    PrevTrack2 = PrevTrack1;
    PrevTrack1 = Track;

    PlayCDTrack(Track);

#ifdef __EMSCRIPTEN__
    // Announce the NEXT pick now so JS decodes it in the background: the track boundary becomes
    // a cache hit instead of a ~0.5 s "silence while fetching" gap.
    s_next = PickRandomTrack();
    {
        char canon[64];
        sprintf(canon, "TRACKS/TRACK_%d.WAV", s_next);
        cosa_music_prefetch(canon);
    }
#endif
}

void StopPlayCD()
{
    CDPLAY.Stop();
    NextCommand = -1;
}

int GetCDVolume()
{
    return CDPLAY.GetVolume() / 100;
}

void SetCDVolume(int Vol)
{
    // SCALE FIX: the slider is 0..100 but CDeviceCD::SetVolume divides by 10000 Ч the old *10
    // mapped slider 100 to gain 0.094 (-20 dB) and slider <=7 to EXACTLY 0 (music muted forever
    // after opening Options). *100 maps the full slider to the full 0..10000 device range.
    if (Vol < 0) Vol = 0;
    if (Vol > 100) Vol = 100;
    CDPLAY.SetVolume(Vol * 100);
}

// Legacy callback for MCINotify
LRESULT CD_MCINotify(UINT wFlags, LONG lDevId)
{
    return 0;
}