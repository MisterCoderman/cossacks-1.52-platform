// ==============================================
// Эмулятор DirectDraw на базе SDL2
// MR.CODERMAN 2025
// ==============================================
extern void dbglog(const char* fmt, ...);
#include <algorithm>
#include <cstring>
#include <vector>
#include <thread>
#include <mutex>
#ifdef __EMSCRIPTEN__
    #include <emscripten.h>
#endif
#ifdef _WIN32
    #include <windows.h>
    #include <io.h>  // access(), F_OK on Windows/MinGW
#else
    #include "platform.h"
#endif
#include <psapi.h>
#define __ddini_cpp_
#include "ddini.h"
#include "ResFile.h"
#include "FastDraw.h"
#include "mode.h"
#include "MapDiscr.h"
#include "fog.h"
#include "GSound.h"
#include "fonts.h"
#include "VirtScreen.h"
#include <SDL.h>
#include <SDL_syswm.h>
extern byte PlayGameMode;
void Rept(LPSTR sz, ...);
__declspec(dllexport) int ModeLX[32];
__declspec(dllexport) int ModeLY[32];
__declspec(dllexport) int NModes = 0;
__declspec(dllexport) int RealLx = 800;
__declspec(dllexport) int RealLy = 600;
__declspec(dllexport) int SCRSizeX = 800;
__declspec(dllexport) int SCRSizeY = 600;
__declspec(dllexport) int RSCRSizeX = 800;
__declspec(dllexport) int RSCRSizeY = 600;
__declspec(dllexport) int COPYSizeX = 800;
__declspec(dllexport) int Pitch = 800;
int SCRSZY = 600;
extern bool window_mode;
extern HWND hwnd;
LPDIRECTDRAW lpDD = nullptr;
LPDIRECTDRAWSURFACE lpDDSPrimary = nullptr;
LPDIRECTDRAWSURFACE lpDDSBack = nullptr;
#ifdef _WIN32
BOOL bActive = FALSE;
#else
BOOL bActive = TRUE;
#endif
BOOL CurrentSurface = TRUE;
BOOL DDError = FALSE;
DDSURFACEDESC ddsd;
void SERROR();
void SERROR1();
void SERROR2();
void InitRLCWindows();
const int InitLx = 1024;
const int InitLy = 768;
SDL_Window* gWindow = nullptr;
SDL_Renderer* gRenderer = nullptr;
SDL_Texture* gPrimaryTexture = nullptr;
SDL_Texture* gBackTexture = nullptr;
SDL_Palette* gPalette = nullptr;
SDL_Palette* sdlPal = nullptr; // Глобальная палитра SDL
SDL_Color GPal[256];
void* offScreenPtr = nullptr;
std::mutex renderMutex;
extern bool PalDone;
extern word PlayerMenuMode;
bool IsRunningUnderWine_ByNtDll() {
#ifdef _WIN32
    // Use C API instead of std::ifstream to avoid std::locale static init crash
    FILE* f1 = fopen("wine", "r");
    if (f1) { fclose(f1); return true; }
    FILE* f2 = fopen("wine.txt", "r");
    if (f2) { fclose(f2); return true; }

    HMODULE ntdll = GetModuleHandleA("ntdll.dll");
    if (!ntdll) return false;
    FARPROC wineVer = GetProcAddress(ntdll, "wine_get_version");
    return wineVer != nullptr;
#else
    return false;
#endif
}

// Lazy init to avoid static init order issues
static int _isWine_cached = -1;
bool _isWine_get() {
    if (_isWine_cached < 0) _isWine_cached = IsRunningUnderWine_ByNtDll() ? 1 : 0;
    return _isWine_cached != 0;
}
#define isWine (_isWine_get())

// Проверка использования памяти процесса (в байтах)
size_t GetProcessMemoryUsage() {
    PROCESS_MEMORY_COUNTERS pmc;
    if (GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc))) {
        return pmc.WorkingSetSize;
    }
    return 0;
}

// Функция перезапуска текущего процесса
bool RestartProcess() {
    char exePath[MAX_PATH];
    if (!GetModuleFileNameA(NULL, exePath, MAX_PATH)) {
        return false;
    }
    STARTUPINFOA si = { sizeof(si) };
    PROCESS_INFORMATION pi = { 0 };
    BOOL success = CreateProcessA(exePath, GetCommandLineA(), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
    if (!success) {
        return false;
    }
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    ExitProcess(0);
    return true;
}

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

__declspec(dllexport) byte GetPaletteColor(int r, int g, int b) {
    int dmax = 10000;
    int bestc = 0;
    for (int i = 0; i < 256; i++) {
        int d = abs(r - GPal[i].r) + abs(g - GPal[i].g) + abs(b - GPal[i].b);
        if (d < dmax) {
            dmax = d;
            bestc = i;
        }
    }
    return bestc;
}

__declspec(dllexport) void GetPalColor(byte idx, byte* r, byte* g, byte* b) {
    if (idx < 256) {
        *r = GPal[idx].r;
        *g = GPal[idx].g;
        *b = GPal[idx].b;
    }
    else {
        *r = 0;
        *g = 0;
        *b = 0;
    }
}

void ClearRGB() {
    std::lock_guard<std::mutex> lock(renderMutex);
    if (!bActive || !offScreenPtr) return;
    memset(offScreenPtr, 0, RSCRSizeX * SCRSZY);
}

extern bool InGame;
extern bool InEditor;
bool mouseCaptured = false;

#ifdef __EMSCRIPTEN__
// ---- Web viewport policy ---------------------------------------------------------------------
// The <canvas> backing store is ALWAYS sized to the tab's pixel box, so the picture fills 100% of
// the window with no CSS distortion and mouse coordinates map 1:1. The RealLx x RealLy game frame
// is letterboxed INTO that backing by SDL logical-size. Consequence: in a WINDOW the in-game
// resolution auto-tracks the tab (fill + correct mouse); the resolution picker in settings only
// takes effect in BROWSER-FULLSCREEN, where the chosen mode is letterboxed onto the screen.
extern int exRealLx, exRealLy;
void SetGameDisplayModeAnyway(int, int);
extern "C" void cos_webinput_state(int ingame, int fullscreen);   // WebInput.cpp (native mouse layer)
extern "C" int  cos_webgl_init(void);                             // WebRender.cpp (native WebGL2 presenter)
extern "C" void cos_webgl_backing(int w, int h);
extern "C" void cos_webgl_palette(const unsigned char* rgba256);
extern "C" void cos_webgl_present(const unsigned char* idx, int w, int h, int pitch);
int cos_native_w = 0, cos_native_h = 0;                           // monitor's true pixel resolution
extern "C" void cos_webinput_attach(void);                        // WebInput.cpp: re-own canvas events
extern "C" int cos_browser_fullscreen(void){
    return EM_ASM_INT({ return (document.fullscreenElement||document.webkitFullscreenElement)?1:0; });
}
void cos_tab_px(int* w, int* h){
    *w = EM_ASM_INT({ return (Module.canvas && Module.canvas.clientWidth ) ? (Module.canvas.clientWidth  *(window.devicePixelRatio||1))|0 : 0; });
    *h = EM_ASM_INT({ return (Module.canvas && Module.canvas.clientHeight) ? (Module.canvas.clientHeight *(window.devicePixelRatio||1))|0 : 0; });
}
// Re-derive backing + game resolution after a resize / fullscreen toggle. Guarded against the
// reentrancy that SetGameDisplayModeAnyway->DrawAllScreen->FlipPages would otherwise cause.
extern "C" void cos_viewport_changed(void){
    static bool applying = false;
    if (applying || !gWindow || !gRenderer) return;
    if (!(InGame || InEditor)) return;                  // MENU: never touched (stays 1024x768)
    int tw, th; cos_tab_px(&tw, &th);
    if (tw < 320 || th < 240) return;
    SDL_SetWindowSize(gWindow, tw, th);                 // web stub: only records the size
    cos_webgl_backing(tw, th);                          // the REAL backing resize — without it the
                                                        // nw==RealLx path below keeps a stale
                                                        // (menu-letterbox) backing after F11-in-menu
                                                        // and the mission renders stretched
    int nw, nh;
    if (cos_browser_fullscreen()) { nw = exRealLx > 0 ? exRealLx : tw; nh = exRealLy > 0 ? exRealLy : th; }
    else { nw = tw; nh = th; }                          // windowed: fill the tab (1:1 mouse), live
    if (nw != RealLx || nh != RealLy) { applying = true; SetGameDisplayModeAnyway(nw, nh); applying = false; }
    else SDL_RenderSetLogicalSize(gRenderer, RealLx, RealLy);
}
#endif

void CaptureMouseOnce(SDL_Window* gWindow) {
    if (isWine) return;
    if (mouseCaptured) return;

#ifdef _WIN32
    SDL_SysWMinfo wminfo;
    SDL_VERSION(&wminfo.version);
    if (SDL_GetWindowWMInfo(gWindow, &wminfo)) {
        HWND hwnd = wminfo.info.win.window;
        PostMessage(hwnd, WM_ACTIVATEAPP, TRUE, 0);
        PostMessage(hwnd, WM_ACTIVATE, WA_ACTIVE, 0);
        PostMessage(hwnd, WM_SETFOCUS, 0, 0);
        SetForegroundWindow(hwnd);
        BringWindowToTop(hwnd);
        SetActiveWindow(hwnd);

        RECT rc;
        GetClientRect(hwnd, &rc);
        AdjustWindowRect(&rc, GetWindowLong(hwnd, GWL_STYLE), FALSE);
        SetWindowPos(hwnd, NULL, 0, 0, rc.right - rc.left, rc.bottom - rc.top,
            SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_FRAMECHANGED);

        mouseCaptured = true;
    }
#else
    (void)gWindow;
    // On macOS, SDL handles window focus natively
    mouseCaptured = true;
#endif
}

void ResetMouseCapture() {
    mouseCaptured = false;
}
static bool disableVSyncByFile = []() {
    return access("novsync", F_OK) == 0 || access("novsync.txt", F_OK) == 0;
}();
__declspec(dllexport) void FlipPages(void) {
    std::lock_guard<std::mutex> lock(renderMutex);
#ifdef __EMSCRIPTEN__
    // ALWAYS yield to the browser first — before any early-return (backgrounded tab, DDError,
    // skipped frame). The blocking WinMain/AllGame loop calls FlipPages every frame; if a frame
    // returns before yielding (the old sleep was only at the very end, past `if(!bActive)return`),
    // the loop busy-spins and never hands control back -> a minimized/blurred tab freezes and does
    // not resume. One unconditional yield keeps the render+tick loop cooperative in every state.
    emscripten_sleep(0);
    // Poll for a tab resize / fullscreen toggle and re-apply the viewport (backing = tab box; game
    // resolution = tab when windowed, chosen mode when fullscreen). Cheap per-frame check; the heavy
    // surface re-create only runs on an actual change.
    { static int lw=0, lh=0, lfs=-1, lig=-1;
      int tw, th; cos_tab_px(&tw,&th); int fs=cos_browser_fullscreen(); int ig=(InGame||InEditor)?1:0;
      if (ig != lig) {
          lig = ig;
          // Toggle the shell's in-game CSS (canvas fills the window).
          EM_ASM({ window.__cosInGame=$0; try{ document.body.classList.toggle('ingame', !!$0); }catch(e){} }, ig);
          if (ig) { lw=tw; lh=th; lfs=fs; cos_viewport_changed(); }              // entering game: fit to tab
          else    { cos_webgl_backing(1024, 768); }   // back to MENU: restore the fixed 1024x768 backing
                                                      // (no CreateDDObjects runs on exit — the marker
                                                      // window is valid — so reset it here or the menu
                                                      // letterboxes twice and looks squashed)
      } else if (ig && tw>=320 && th>=240 && (tw!=lw || th!=lh || fs!=lfs)) {
          lw=tw; lh=th; lfs=fs; cos_viewport_changed();                          // in-game: live tab-resize
      }
      // Feed the native HTML5 input layer (WebInput.cpp): it pointer-locks on the next in-canvas
      // click during WINDOWED play, releases the lock for menus, and maps coords to RealLx x RealLy.
      { static int li=-1, lf=-1; if (ig!=li || fs!=lf){ li=ig; lf=fs; cos_webinput_state(ig, fs); } }
      // MENU (ig==0): nothing — the 1024x768 view is never touched.
    }
    // NATIVE PRESENT: the engine has just finished composing the 8-bit frame in ScreenPtr
    // (stride = Pitch). Re-upload the palette (GPal is the single source of truth — 1 KB, covers
    // every LoadPalette/fog/flash path with zero per-site hooks) and draw via the WebGL2 palette
    // shader — no SDL, no CPU pixel conversion. Everything below is the old SDL renderer path.
    if (offScreenPtr && ScreenPtr) {
        cos_webgl_palette((const unsigned char*)GPal);
        cos_webgl_present((const unsigned char*)ScreenPtr, RealLx, RealLy, Pitch);
    }
    return;
    // (below: the old SDL renderer path — unreachable on web; compiles against SDLStubs)
#endif
    static bool currentVSync = false;
    static bool needInitialCenter = true;  // Флаг для первоначального центрирования
    static int lastWindowPosX = INT_MIN;   // Последняя известная позиция окна
    static int lastWindowPosY = INT_MIN;
    static int textureRestoreAttempts = 0; // Счетчик попыток восстановления текстур
    static const int MAX_RESTORE_ATTEMPTS = 15; // Максимум попыток перед пересозданием

    // Функция для полного пересоздания рендера и ресурсов
    auto recreateRendererAndResources = [&]() {
        // Уничтожаем существующие ресурсы
        if (gPrimaryTexture) SDL_DestroyTexture(gPrimaryTexture);
        if (gBackTexture) SDL_DestroyTexture(gBackTexture);
        if (gRenderer) SDL_DestroyRenderer(gRenderer);
        gPrimaryTexture = nullptr;
        gBackTexture = nullptr;
        gRenderer = nullptr;

        // Пересоздаем рендер
        gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
        if (!gRenderer) {
            return false; // Не удалось создать рендер
        }
        // Re-apply letterbox scaling after a renderer recreate (loss recovery), else fullscreen
        // draws 1:1 in the top-left. Matches the present dstRect {0,0,RealLx,RealLy}.
        SDL_RenderSetLogicalSize(gRenderer, RealLx, RealLy);

        // Пересоздаем текстуры
        gPrimaryTexture = SDL_CreateTexture(gRenderer, SDL_PIXELFORMAT_ARGB8888,
            SDL_TEXTUREACCESS_STREAMING, RealLx, RealLy);
        gBackTexture = SDL_CreateTexture(gRenderer, SDL_PIXELFORMAT_ARGB8888,
            SDL_TEXTUREACCESS_STREAMING, RealLx, RealLy);

        if (!gPrimaryTexture || !gBackTexture) {
            SDL_DestroyRenderer(gRenderer);
            gRenderer = nullptr;
            return false;
        }

        textureRestoreAttempts = 0; // Сбрасываем счетчик попыток
        return true;
    };

    // Обновление VSync с учетом игры и редактора
    if (gRenderer) {
        bool needVSync = (InGame || InEditor) && !disableVSyncByFile;
        if (currentVSync != needVSync) {
            if (SDL_RenderSetVSync(gRenderer, needVSync ? 1 : 0) == 0) {
                currentVSync = needVSync;
            }
        }
    }
    if (currentVSync) {
        CaptureMouseOnce(gWindow);
    }

    if (!bActive || DDError) return;
    if (!gRenderer) {
        // Попытка пересоздать рендер, если он отсутствует
        if (!recreateRendererAndResources()) {
            return; // Пропускаем кадр, если не удалось пересоздать
        }
    }

    // Проверка и восстановление текстур
    if (!gPrimaryTexture || !gBackTexture) {
        textureRestoreAttempts++;
        if (textureRestoreAttempts >= MAX_RESTORE_ATTEMPTS) {
            // Превышен лимит попыток, пересоздаем рендер и ресурсы
            if (!recreateRendererAndResources()) {
                return; // Пропускаем кадр, если не удалось пересоздать
            }
        }
        else {
            // Мягкое восстановление текстур
            if (gPrimaryTexture) SDL_DestroyTexture(gPrimaryTexture);
            if (gBackTexture) SDL_DestroyTexture(gBackTexture);
            gPrimaryTexture = SDL_CreateTexture(gRenderer, SDL_PIXELFORMAT_ARGB8888,
                SDL_TEXTUREACCESS_STREAMING, RealLx, RealLy);
            gBackTexture = SDL_CreateTexture(gRenderer, SDL_PIXELFORMAT_ARGB8888,
                SDL_TEXTUREACCESS_STREAMING, RealLx, RealLy);

            if (!gPrimaryTexture || !gBackTexture) {
                return; // Пропускаем кадр, чтобы попробовать снова
            }
        }
    }

    // Логика центрирования окна
    if (InGame || InEditor) {
        needInitialCenter = true;  // Разрешаем центрирование при входе в игру/редактор
    }
    else {
        int currentX, currentY;
        SDL_GetWindowPosition(gWindow, &currentX, &currentY);

        if (needInitialCenter || (currentX == lastWindowPosX && currentY == lastWindowPosY)) {
            SDL_SetWindowPosition(gWindow, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
            SDL_GetWindowPosition(gWindow, &lastWindowPosX, &lastWindowPosY);
            needInitialCenter = false;
        }
    }

    // Создаем SDL_Surface из ScreenPtr
    SDL_Surface* srcSurface = SDL_CreateRGBSurfaceWithFormatFrom(
        ScreenPtr, RealLx, RealLy, 8, Pitch, SDL_PIXELFORMAT_INDEX8);
    if (!srcSurface) {
        textureRestoreAttempts++;
        if (textureRestoreAttempts >= MAX_RESTORE_ATTEMPTS) {
            recreateRendererAndResources();
        }
        return; // Пропускаем кадр при ошибке
    }
    SDL_SetSurfacePalette(srcSurface, sdlPal);

    // Обновление текстуры
    SDL_Texture* target = window_mode ? gBackTexture : gPrimaryTexture;
    SDL_Surface* targetSurface;
    if (SDL_LockTextureToSurface(target, nullptr, &targetSurface) != 0) {
        SDL_FreeSurface(srcSurface);
        textureRestoreAttempts++;
        if (textureRestoreAttempts >= MAX_RESTORE_ATTEMPTS) {
            recreateRendererAndResources();
        }
        return; // Пропускаем кадр при ошибке
    }
    SDL_BlitSurface(srcSurface, nullptr, targetSurface, nullptr);
    SDL_UnlockTexture(target);
    SDL_FreeSurface(srcSurface);

    // Рендеринг
    if (SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255) != 0 || SDL_RenderClear(gRenderer) != 0) {
        textureRestoreAttempts++;
        if (textureRestoreAttempts >= MAX_RESTORE_ATTEMPTS) {
            recreateRendererAndResources();
        }
        return; // Пропускаем кадр при ошибке
    }

    SDL_Rect dstRect = { 0, 0, RealLx, RealLy };
    if (SDL_RenderCopy(gRenderer, target, NULL, &dstRect) != 0) {
        textureRestoreAttempts++;
        if (textureRestoreAttempts >= MAX_RESTORE_ATTEMPTS) {
            recreateRendererAndResources();
        }
        return; // Пропускаем кадр при ошибке
    }

    SDL_RenderPresent(gRenderer);
    textureRestoreAttempts = 0; // Сбрасываем счетчик после успешного рендеринга
    // (yield moved to the top of FlipPages so it also runs on skipped/backgrounded frames)
}

void LockSurface(void) {
    std::lock_guard<std::mutex> lock(renderMutex);
    if (DDError) return;
    if (!offScreenPtr || SCRSizeX <= 0 || SCRSZY <= 0) {
        DDError = TRUE;
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "LockSurface: Invalid offScreenPtr or dimensions (SCRSizeX=%d, SCRSZY=%d)", SCRSizeX, SCRSZY);
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "Error", MB_OK | MB_ICONERROR);
        return;
    }
    ScreenPtr = (byte*)offScreenPtr + MaxSizeX * 32;
    RealScreenPtr = ScreenPtr;
    size_t bufferSize = SCRSizeX * SCRSZY;
    if (bufferSize > 0) {
        memset(ScreenPtr, 0, bufferSize);
    }
    else {
        DDError = TRUE;
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "LockSurface: Invalid buffer size (SCRSizeX=%d, SCRSZY=%d)", SCRSizeX, SCRSZY);
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "Error", MB_OK | MB_ICONERROR);
    }
}

void UnlockSurface(void) {
    std::lock_guard<std::mutex> lock(renderMutex);
    if (DDError) return;
}

bool EnumModesOnly() {
    NModes = 0;
#ifdef __EMSCRIPTEN__
    // Emscripten's SDL2 reports only ONE display mode (the current canvas mode) via
    // SDL_GetNumDisplayModes, so the resolution picker was empty (NModes=1). Seed a standard
    // list of >=1024x768 modes (1024x768 first = the app's default/entry resolution; the game's
    // own filter rejects sub-1024x768). Applied in-game via SetGameDisplayMode->CreateDDObjects.
    // Full standard list up to 4K + ultrawide, so a 4K monitor sees its native modes.
    static const int emModes[][2] = {
        {1024, 768}, {1152, 864}, {1280, 720}, {1280, 800}, {1280, 1024}, {1360, 768}, {1366, 768},
        {1440, 900}, {1600, 900}, {1600, 1200}, {1680, 1050}, {1920, 1080}, {1920, 1200},
        {2048, 1152}, {2560, 1080}, {2560, 1440}, {2560, 1600}, {3440, 1440}, {3840, 2160}
    };
    // Add the monitor's ACTUAL resolution first so the user's real native mode is always offered
    // even if it's not in the table above. Native = the TRUE physical desktop resolution =
    // screen.width/height (CSS px) * devicePixelRatio. The DPR factor is REQUIRED because the
    // fullscreen backing store is sized by cos_tab_px() = clientWidth*devicePixelRatio (physical
    // px): if the native game mode is left at the smaller CSS size, the engine composes at that
    // lower resolution and gets upscaled into the bigger backing — blurry, "not native" on every
    // HiDPI / OS-scaled monitor (e.g. 4K@150% reports screen.width 2560 but is physically 3840).
    // Matching DPR makes fullscreen 1:1 pixel-perfect and consistent with the backing.
    int nw = EM_ASM_INT({ return Math.round(screen.width  * (window.devicePixelRatio || 1)); });
    int nh = EM_ASM_INT({ return Math.round(screen.height * (window.devicePixelRatio || 1)); });
    cos_native_w = nw; cos_native_h = nh;    // remembered so the UI can tag the native mode
    if (nw >= 1024 && nh >= 768) { ModeLX[NModes] = nw; ModeLY[NModes] = nh; NModes++; }
    for (int i = 0; i < (int)(sizeof(emModes) / sizeof(emModes[0])) && NModes < 32; i++) {
        int w = emModes[i][0], h = emModes[i][1];
        if (w == nw && h == nh) continue;                 // don't duplicate the native mode
        ModeLX[NModes] = w; ModeLY[NModes] = h; NModes++;
    }
    return NModes > 0;
#endif
#ifdef _WIN32
    DEVMODE devMode;
    devMode.dmSize = sizeof(DEVMODE);
    for (int iMode = 0; EnumDisplaySettings(NULL, iMode, &devMode) != 0 && NModes < 32; ++iMode) {
        if (devMode.dmBitsPerPel == 32 &&
            devMode.dmPelsWidth >= 1024 && devMode.dmPelsHeight >= 768) {
            bool exists = false;
            for (int j = 0; j < NModes; j++) {
                if (ModeLX[j] == devMode.dmPelsWidth && ModeLY[j] == devMode.dmPelsHeight) {
                    exists = true;
                    break;
                }
            }
            if (!exists) {
                ModeLX[NModes] = devMode.dmPelsWidth;
                ModeLY[NModes] = devMode.dmPelsHeight;
                NModes++;
            }
        }
    }
#else
    // Use SDL to enumerate display modes on non-Windows platforms
    bool sdlWasInit = SDL_WasInit(SDL_INIT_VIDEO) != 0;
    if (!sdlWasInit) {
        SDL_Init(SDL_INIT_VIDEO);
    }
    int numModes = SDL_GetNumDisplayModes(0);
    for (int i = 0; i < numModes && NModes < 32; i++) {
        SDL_DisplayMode mode;
        if (SDL_GetDisplayMode(0, i, &mode) != 0) continue;
        if (mode.w < 1024 || mode.h < 768) continue;
        bool exists = false;
        for (int j = 0; j < NModes; j++) {
            if (ModeLX[j] == mode.w && ModeLY[j] == mode.h) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            ModeLX[NModes] = mode.w;
            ModeLY[NModes] = mode.h;
            NModes++;
        }
    }
    if (!sdlWasInit) {
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    }
#endif
    if (NModes == 0) {
        const int fallbackModes[][2] = {
            {1024, 768}, {1280, 720}, {1366, 768}, {1600, 900}, {1920, 1080}
        };
        for (int i = 0; i < 5 && NModes < 32; i++) {
            ModeLX[NModes] = fallbackModes[i][0];
            ModeLY[NModes] = fallbackModes[i][1];
            NModes++;
        }
    }
    return NModes > 0;
}



#ifdef __EMSCRIPTEN__
// Native web video (re)init — replaces the entire SDL window/renderer/texture setup. The canvas is
// the window; frames are presented by WebRender's palette shader. MENU is fixed 1024x768
// (CSS-letterboxed by the shell); GAME fills the tab (windowed) or letterboxes the chosen mode
// (browser fullscreen). Mirrors the SDL path's global-variable setup 1:1.
//
// CRASH-PROOFING (roots of the first attempt's abort):
//  * gWindow/gRenderer/textures are set to non-NULL markers — processMainMenu treats a NULL
//    gWindow as "device lost" and calls CreateDDObjects EVERY frame otherwise.
//  * offScreenPtr is reallocated ONLY when the required size changes (the old free+malloc per
//    call, driven by that recreate loop, exhausted/corrupted the heap -> malloc abort).
static bool CreateDDObjects_Web(HWND hwnd_param) {
    hwnd = hwnd_param;
    if (!cos_webgl_init()) return false;

    // keep RealLx/RealLy inside the mode list for the MENU (game size is tab-driven)
    bool validResolution = false;
    for (int i = 0; i < NModes; i++)
        if (RealLx == ModeLX[i] && RealLy == ModeLY[i]) { validResolution = true; break; }
    if (InGame || InEditor) validResolution = true;
    if (!validResolution && NModes > 0) { RealLx = ModeLX[0]; RealLy = ModeLY[0]; }
    if (RealLx <= 0) RealLx = 800;
    if (RealLy <= 0) RealLy = 600;

    int back_w, back_h;
    // The PlayGame()/EditGame() tails call SetGameDisplayModeAnyway(1024,768) to restore the MENU
    // mode while InGame is STILL true (processMainMenu clears it later). Without this flag the
    // tab-size branch below overwrote the requested 1024x768 with the tab size, leaving stale
    // engine clamps (RSCRSizeX/WindY1) that ate the cursor and clicks along the bottom/right of
    // the menu whenever the window was smaller than 1024x768.
    extern int g_cos_menu_fixed_req;
    if ((!InGame && !InEditor) || g_cos_menu_fixed_req) {
        window_mode = true;
        RealLx = 1024; RealLy = 768;
        back_w = 1024; back_h = 768;                     // menu: fixed, CSS letterboxes the canvas
    } else {
        int tw, th; cos_tab_px(&tw, &th);
        if (tw < 320 || th < 240) { tw = 1024; th = 768; }
        if (!cos_browser_fullscreen()) { RealLx = tw; RealLy = th; }               // windowed: fill tab
        else if (exRealLx >= 640 && exRealLy >= 480) { RealLx = exRealLx; RealLy = exRealLy; } // fs: chosen mode
        back_w = tw; back_h = th;                        // backing always = tab pixel box
    }

    // engine globals (exact mirror of the SDL path)
    SCRSizeX = RealLx;  SCRSizeY = RealLy;
    RSCRSizeX = RealLx; RSCRSizeY = RealLy;
    COPYSizeX = RealLx; SCRSZY = RealLy;
    Pitch = RealLx;
    ScrWidth = RealLx;  ScrHeight = RealLy;
    WindLx = RealLx;    WindLy = RealLy;
    WindX = 0; WindY = 0; WindX1 = RealLx - 1; WindY1 = RealLy - 1;
    SVSC.SetSize(RealLx, RealLy);                        // computes MaxSizeX/MaxSizeY

    // 8-bit offscreen composition buffer (stride = MaxSizeX, like the SDL path);
    // reallocate ONLY on size change
    SCRSizeX = MaxSizeX;
    SCRSizeY = MaxSizeY;
    Pitch = SCRSizeX;
    BytesPerPixel = 1;
    size_t bufferSize = (size_t)SCRSizeX * (size_t)SCRSizeY;
    static size_t web_buf_size = 0;
    if (!bufferSize) return false;
    if (!offScreenPtr || bufferSize != web_buf_size) {
        if (offScreenPtr) free(offScreenPtr);
        offScreenPtr = malloc(bufferSize);
        web_buf_size = offScreenPtr ? bufferSize : 0;
        if (!offScreenPtr) return false;
        memset(offScreenPtr, 0, bufferSize);
    }

    // non-NULL device markers so engine "device lost / recreate" checks stay quiet
    gWindow = (SDL_Window*)1;
    gRenderer = (SDL_Renderer*)1;
    gPrimaryTexture = (SDL_Texture*)1;
    gBackTexture = (SDL_Texture*)1;
    if (!sdlPal) sdlPal = SDL_AllocPalette(256);

    cos_webgl_backing(back_w, back_h);
    cos_webgl_palette((const unsigned char*)GPal);       // palette truth = GPal
    InitRLCWindows();
    cos_webinput_attach();                               // (idempotent) own the canvas events
    return true;
}
#endif

bool CreateDDObjects(HWND hwnd_param) {
#ifdef __EMSCRIPTEN__
    return CreateDDObjects_Web(hwnd_param);
#endif
    std::lock_guard<std::mutex> lock(renderMutex);
    static int callCount = 0;
    static bool wasInGameOrEditor = false;
    callCount++;

    // Сброс wasInGameOrEditor при выходе в меню
    if (!InGame && !InEditor && wasInGameOrEditor) {
        wasInGameOrEditor = false;
    }

    // Проверка использования памяти перед входом в игру или редактор
    if ((InGame || InEditor) && !wasInGameOrEditor) {
        size_t memoryUsage = GetProcessMemoryUsage();
        if (memoryUsage > 1ULL * 1024 * 1024 * 1024) {
            RestartProcess();
        }
    }

    wasInGameOrEditor = InGame || InEditor;

   
    bool needRecreateWindow = (callCount > 1 && (wasInGameOrEditor && !InGame && !InEditor) && !isWine);

    DDError = FALSE;
    CurrentSurface = TRUE;

    // Освобождение существующих ресурсов
    free(offScreenPtr);
    offScreenPtr = nullptr;
    if (gPrimaryTexture) SDL_DestroyTexture(gPrimaryTexture);
    if (gBackTexture) SDL_DestroyTexture(gBackTexture);
    gPrimaryTexture = nullptr;
    gBackTexture = nullptr;
    if (gRenderer) SDL_DestroyRenderer(gRenderer);
    gRenderer = nullptr;
    if (gWindow && needRecreateWindow) {
        SDL_DestroyWindow(gWindow);
        gWindow = nullptr;
    }
    if (gPalette) SDL_FreePalette(gPalette);
    gPalette = nullptr;
    if (sdlPal) SDL_FreePalette(sdlPal);
    sdlPal = nullptr;

    if (!hwnd_param) {
        dbglog("  CreateDDObjects: hwnd is NULL!\n");
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "Invalid HWND: hwnd is NULL");
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
        return false;
    }

    dbglog("  CreateDDObjects: SDL_Init(SDL_INIT_VIDEO)...\n");
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        dbglog("  CreateDDObjects: SDL_Init FAILED: %s\n", SDL_GetError());
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "SDL_Init failed: %s", SDL_GetError());
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
        return false;
    }
    dbglog("  CreateDDObjects: SDL_Init OK\n");

    bool validResolution = false;
    for (int i = 0; i < NModes; i++) {
        if (RealLx == ModeLX[i] && RealLy == ModeLY[i]) {
            validResolution = true;
            break;
        }
    }
    if (!validResolution && NModes > 0) {
        RealLx = ModeLX[0];
        RealLy = ModeLY[0];
    }
    if (RealLx <= 0) RealLx = 800;
    if (RealLy <= 0) RealLy = 600;

    if (!gWindow) {
#ifdef _WIN32
        dbglog("  CreateDDObjects: SDL_CreateWindowFrom(hwnd=%p)...\n", hwnd_param);
        gWindow = SDL_CreateWindowFrom(hwnd_param);
#else
        fprintf(stderr, "[DMCR] SDL_CreateWindow(%dx%d)\n", RealLx, RealLy);
        gWindow = SDL_CreateWindow("Cossacks", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
            RealLx, RealLy, SDL_WINDOW_SHOWN);
        fprintf(stderr, "[DMCR] SDL_CreateWindow returned %p\n", (void*)gWindow);
#endif
        if (!gWindow) {
            dbglog("  CreateDDObjects: SDL_CreateWindow/From FAILED: %s\n", SDL_GetError());
            char errorMsg[256], convertedMsg[256];
            sprintf(errorMsg, "SDL_CreateWindow failed: %s", SDL_GetError());
            ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
            MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
            SDL_Quit();
            return false;
        }
        dbglog("  CreateDDObjects: gWindow=%p OK\n", (void*)gWindow);
    }

    hwnd = hwnd_param;

    if (!InGame && !InEditor) {
        window_mode = true;
        RealLx = 1024;
        RealLy = 768;
        SDL_SetWindowFullscreen(gWindow, 0);
        SDL_SetWindowBordered(gWindow, SDL_TRUE);
        SDL_SetWindowSize(gWindow, RealLx, RealLy);
        SDL_SetWindowPosition(gWindow, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
        SDL_SetWindowGrab(gWindow, SDL_FALSE);
        SDL_ShowCursor(SDL_ENABLE);
        SDL_SetWindowResizable(gWindow, SDL_FALSE);
        LONG style = GetWindowLong(hwnd_param, GWL_STYLE);
        style &= ~WS_MAXIMIZEBOX;
        style |= WS_MINIMIZEBOX;
        style |= WS_CAPTION;
        style |= WS_SYSMENU;
        SetWindowLong(hwnd_param, GWL_STYLE, style);
        SetWindowPos(hwnd_param, NULL, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_FRAMECHANGED);
    }
    if ((InGame || InEditor) && window_mode) {
#ifdef __EMSCRIPTEN__
        // Web: WINDOWED -> game resolution auto-follows the tab (fills 100%, mouse maps 1:1).
        // BROWSER-FULLSCREEN -> honor the resolution chosen in settings (letterboxed to the screen).
        // Do NOT grab the window (grab = pointer-lock/relative mouse, which breaks RTS absolute input);
        // the canvas backing is forced to the tab box at the end of this function.
        if (!cos_browser_fullscreen()) {
            int tw, th; cos_tab_px(&tw, &th);
            if (tw >= 640 && th >= 480) { RealLx = tw; RealLy = th; }
        }
        SDL_SetWindowGrab(gWindow, SDL_FALSE);
        SDL_ShowCursor(SDL_DISABLE);
        SDL_SetWindowResizable(gWindow, SDL_FALSE);
#else
#ifndef _WIN32
        // macOS: always use FULLSCREEN_DESKTOP to avoid Cocoa NSView issues
        SDL_SetWindowFullscreen(gWindow, SDL_WINDOW_FULLSCREEN_DESKTOP);
        SDL_Delay(300);
#else
        if (isWine) {
            SDL_SetWindowFullscreen(gWindow, SDL_WINDOW_FULLSCREEN_DESKTOP);
            SDL_Delay(300);
        }
        else {
            SDL_SetWindowFullscreen(gWindow, SDL_WINDOW_FULLSCREEN);
            SDL_Delay(300);
            ResetMouseCapture();
  
        }
#endif
        SDL_SetWindowSize(gWindow, RealLx, RealLy);
        SDL_SetWindowPosition(gWindow, 0, 0);
        SDL_SetWindowGrab(gWindow, SDL_TRUE);
        SDL_ShowCursor(SDL_DISABLE);
        SDL_SetWindowResizable(gWindow, SDL_FALSE);
        if (!isWine) {
            LONG style = GetWindowLong(hwnd_param, GWL_STYLE);
            style &= ~WS_CAPTION;
            style &= ~WS_SYSMENU;
            style &= ~WS_MINIMIZEBOX;
            style &= ~WS_MAXIMIZEBOX;
            style &= ~WS_THICKFRAME;
            SetWindowLong(hwnd_param, GWL_STYLE, style);
            SetWindowPos(hwnd_param, NULL, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_FRAMECHANGED);
        }
#endif  // in-game window setup: __EMSCRIPTEN__ web path vs native fullscreen
    }
    else if (!window_mode) {
        SDL_SetWindowSize(gWindow, RealLx, RealLy);
        if (SDL_SetWindowFullscreen(gWindow, SDL_WINDOW_FULLSCREEN_DESKTOP) < 0) {
            char errorMsg[256], convertedMsg[256];
            sprintf(errorMsg, "SDL_SetWindowFullscreen_DESKTOP failed: %s", SDL_GetError());
            ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
            MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
            window_mode = true;
            SDL_SetWindowFullscreen(gWindow, 0);
            SDL_SetWindowSize(gWindow, RealLx, RealLy);
            SDL_SetWindowPosition(gWindow, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
        }
        else {
            int w, h;
            SDL_GetWindowSize(gWindow, &w, &h);
            RealLx = w;
            RealLy = h;
            SDL_SetWindowGrab(gWindow, SDL_TRUE);
            SDL_ShowCursor(SDL_DISABLE);
        }
    }
    else {
        SDL_SetWindowSize(gWindow, RealLx, RealLy);
        SDL_SetWindowPosition(gWindow, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
        SDL_SetWindowBordered(gWindow, SDL_TRUE);
        SDL_SetWindowGrab(gWindow, SDL_FALSE);
        SDL_ShowCursor(SDL_ENABLE);
        SDL_SetWindowResizable(gWindow, SDL_FALSE);
        LONG style = GetWindowLong(hwnd_param, GWL_STYLE);
        style |= WS_MINIMIZEBOX;
        style |= WS_MAXIMIZEBOX;
        style |= WS_CAPTION;
        style |= WS_SYSMENU;
        SetWindowLong(hwnd_param, GWL_STYLE, style);
        SetWindowPos(hwnd_param, NULL, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_FRAMECHANGED);
    }

    Uint32 rendererFlags = SDL_RENDERER_ACCELERATED;
    dbglog("  CreateDDObjects: SDL_CreateRenderer...\n");
    gRenderer = SDL_CreateRenderer(gWindow, -1, rendererFlags);
    if (!gRenderer) {
        dbglog("  CreateDDObjects: SDL_CreateRenderer FAILED: %s\n", SDL_GetError());
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "SDL_CreateRenderer failed: %s", SDL_GetError());
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
        SDL_DestroyWindow(gWindow);
        SDL_Quit();
        return false;
    }

    // Letterbox-scale the RealLx×RealLy framebuffer to the actual (possibly fullscreen) window for
    // EVERY renderer, not just the menu — otherwise in-game / fullscreen draws 1:1 in the top-left
    // instead of scaling. The present loop's dstRect is {0,0,RealLx,RealLy}, so a logical size of
    // RealLx×RealLy keeps them consistent. (The menu block below forces RealLx/Ly back to 1024/768.)
    SDL_RenderSetLogicalSize(gRenderer, RealLx, RealLy);

    if (!InGame && !InEditor) {
        RealLx = 1024;
        RealLy = 768;
        SCRSizeX = 1024;
        SCRSizeY = 768;
        RSCRSizeX = 1024;
        RSCRSizeY = 768;
        COPYSizeX = 1024;
        SCRSZY = 768;
        Pitch = 1024;
        ScrWidth = 1024;
        ScrHeight = 768;
        WindLx = 1024;
        WindLy = 768;
        WindX = 0;
        WindY = 0;
        WindX1 = 1023;
        WindY1 = 767;
        SVSC.SetSize(1024, 768);
    }
    else if (window_mode) {
        SCRSizeX = RealLx;
        SCRSizeY = RealLy;
        RSCRSizeX = RealLx;
        RSCRSizeY = RealLy;
        COPYSizeX = RealLx;
        SCRSZY = RealLy;
        Pitch = RealLx;
        ScrWidth = RealLx;
        ScrHeight = RealLy;
        WindLx = RealLx;
        WindLy = RealLy;
        WindX = 0;
        WindY = 0;
        WindX1 = RealLx - 1;
        WindY1 = RealLy - 1;
        SVSC.SetSize(RealLx, RealLy);
    }
    else {
        SCRSizeX = RealLx;
        SCRSizeY = RealLy;
        RSCRSizeX = RealLx;
        RSCRSizeY = RealLy;
        COPYSizeX = RealLx;
        SCRSZY = RealLy;
        Pitch = RealLx;
        ScrWidth = RealLx;
        ScrHeight = RealLy;
        WindLx = RealLx;
        WindLy = RealLy;
        WindX = 0;
        WindY = 0;
        WindX1 = RealLx - 1;
        WindY1 = RealLy - 1;
        SVSC.SetSize(RealLx, RealLy);
    }

    gPrimaryTexture = SDL_CreateTexture(gRenderer, SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STREAMING, RSCRSizeX, RSCRSizeY);
    gBackTexture = SDL_CreateTexture(gRenderer, SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STREAMING, RSCRSizeX, RSCRSizeY);
    if (!gPrimaryTexture || !gBackTexture) {
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "SDL_CreateTexture failed: %s", SDL_GetError());
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
        SDL_DestroyRenderer(gRenderer);
        SDL_DestroyWindow(gWindow);
        SDL_Quit();
        return false;
    }

    // Явная очистка текстур при возвращении в меню
    if (!InGame && !InEditor) {
        SDL_SetRenderTarget(gRenderer, gPrimaryTexture);
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
        SDL_RenderClear(gRenderer);
        SDL_SetRenderTarget(gRenderer, gBackTexture);
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
        SDL_RenderClear(gRenderer);
        SDL_SetRenderTarget(gRenderer, nullptr);
    }

    sdlPal = SDL_AllocPalette(256);
    if (!sdlPal) {
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "SDL_AllocPalette failed: %s", SDL_GetError());
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
        SDL_DestroyTexture(gBackTexture);
        SDL_DestroyTexture(gPrimaryTexture);
        SDL_DestroyRenderer(gRenderer);
        SDL_DestroyWindow(gWindow);
        SDL_Quit();
        return false;
    }

    // Инициализация палитры sdlPal
    for (int i = 0; i < 256; ++i) {
        SDL_Color color = { GPal[i].r, GPal[i].g, GPal[i].b, GPal[i].a };
        SDL_SetPaletteColors(sdlPal, &color, i, 1);
    }

    SCRSizeX = MaxSizeX;
    SCRSizeY = MaxSizeY;
    Pitch = SCRSizeX;
    BytesPerPixel = 1;
    size_t bufferSize = (size_t)SCRSizeX * (size_t)SCRSizeY;
    if (bufferSize == 0) {
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "Invalid buffer size: SCRSizeX=%d, SCRSizeY=%d", SCRSizeX, SCRSizeY);
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
        SDL_DestroyTexture(gBackTexture);
        SDL_DestroyTexture(gPrimaryTexture);
        SDL_DestroyRenderer(gRenderer);
        SDL_DestroyWindow(gWindow);
        SDL_Quit();
        return false;
    }

    offScreenPtr = malloc(bufferSize);
    if (!offScreenPtr) {
        char errorMsg[256], convertedMsg[256];
        sprintf(errorMsg, "Failed to allocate offScreenPtr (size: %zu bytes)", bufferSize);
        ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
        MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
        SDL_DestroyTexture(gBackTexture);
        SDL_DestroyTexture(gPrimaryTexture);
        SDL_DestroyRenderer(gRenderer);
        SDL_DestroyWindow(gWindow);
        SDL_FreePalette(sdlPal);
        SDL_Quit();
        return false;
    }

    InitRLCWindows();
#ifdef __EMSCRIPTEN__
    // GAME ONLY: force the canvas backing to the tab's pixel box (100% fill, 1:1 mouse). The MENU is
    // left EXACTLY as the engine set it (1024x768, CSS-letterboxed) and is never touched here.
    if (InGame || InEditor) { int tw, th; cos_tab_px(&tw, &th);
      if (tw >= 320 && th >= 240) { SDL_SetWindowSize(gWindow, tw, th);
        if (gRenderer) SDL_RenderSetLogicalSize(gRenderer, RealLx, RealLy); } }
    // SDL just (re)registered its canvas mouse handlers (window/renderer create) — take the mouse
    // back for the native HTML5 input layer (last registration owns the pair).
    cos_webinput_attach();
#endif
    return true;
}

int CreateRGBDDObjects(HWND hwnd) {
    RealLx = 800;
    RealLy = 600;
    SCRSizeX = 800;
    SCRSizeY = 600;
    RSCRSizeX = 800;
    RSCRSizeY = 600;
    COPYSizeX = 800;
    SCRSZY = SCRSizeY;
    return CreateDDObjects(hwnd) ? 1 : 0;
}

int CreateRGB640DDObjects(HWND hwnd) {
    RealLx = 640;
    RealLy = 480;
    SCRSizeX = 640;
    SCRSizeY = 480;
    RSCRSizeX = 640;
    RSCRSizeY = 480;
    COPYSizeX = 640;
    SCRSZY = SCRSizeY;
    return CreateDDObjects(hwnd) ? 1 : 0;
}

void FreeDDObjects(void) {
    std::lock_guard<std::mutex> lock(renderMutex);
    if (offScreenPtr) {
        free(offScreenPtr);
        offScreenPtr = nullptr;
    }
    if (gPrimaryTexture) {
        SDL_DestroyTexture(gPrimaryTexture);
        gPrimaryTexture = nullptr;
    }
    if (gBackTexture) {
        SDL_DestroyTexture(gBackTexture);
        gBackTexture = nullptr;
    }
    if (gRenderer) {
        SDL_DestroyRenderer(gRenderer);
        gRenderer = nullptr;
    }
    if (gWindow) {
        SDL_DestroyWindow(gWindow);
        gWindow = nullptr;
    }
    if (gPalette) {
        SDL_FreePalette(gPalette);
        gPalette = nullptr;
    }
    if (sdlPal) {
        SDL_FreePalette(sdlPal);
        sdlPal = nullptr;
    }
    SDL_Quit();
}

void LoadPalette(LPCSTR lpFileName) {
    if (DDError) return;
    ResFile pf = RReset(lpFileName);
    if (pf != INVALID_HANDLE_VALUE) {
        for (int i = 0; i < 256; i++) {
            RBlockRead(pf, &GPal[i].r, 1);
            RBlockRead(pf, &GPal[i].g, 1);
            RBlockRead(pf, &GPal[i].b, 1);
            GPal[i].a = 255;
        }
        RClose(pf);
        sdlPal = SDL_AllocPalette(256);
        if (!sdlPal) {
            char errorMsg[256], convertedMsg[256];
            sprintf(errorMsg, "SDL_AllocPalette failed: %s", SDL_GetError());
            ConvertUTF8ToWindows1251(errorMsg, convertedMsg, 256);
            MessageBoxA(NULL, convertedMsg, "SDL Error", MB_OK | MB_ICONERROR);
            return;
        }
        for (int i = 0; i < 256; ++i) {
            SDL_Color color = { GPal[i].r, GPal[i].g, GPal[i].b, GPal[i].a };
            SDL_SetPaletteColors(sdlPal, &color, i, 1);
        }
        if (!strcmp(lpFileName, "agew_1.pal")) {
            int C0 = 65;
            for (int i = 0; i < 12; i++) {
                int gray = 0;
                if (i > 2) gray = (i - 2) * 2;
                if (i > 7) gray += (i - 7) * 8;
                if (i > 9) gray += (i - 10) * 10;
                if (i > 10) gray += 50;
                gray = gray * 6 / 3;
                int rr = 0 * C0 / 150 + gray * 8 / 2;
                int gg = 80 * C0 / 150 + gray * 6 / 2;
                int bb = 132 * C0 / 150 + gray * 4 / 2;
                if (rr > 255) rr = 255;
                if (gg > 255) gg = 255;
                if (bb > 255) bb = 255;
                if (i < 5) {
                    rr -= (rr * (5 - i)) / 6;
                    gg -= (gg * (5 - i)) / 6;
                    bb -= (bb * (5 - i)) / 6;
                }
                if (i < 3) {
                    rr -= (rr * (3 - i)) / 4;
                    gg -= (gg * (3 - i)) / 4;
                    bb -= (bb * (3 - i)) / 4;
                }
                if (i < 2) {
                    rr -= (rr * (2 - i)) / 3;
                    gg -= (gg * (2 - i)) / 3;
                    bb -= (bb * (2 - i)) / 3;
                }
                GPal[0xB0 + i].r = rr;
                GPal[0xB0 + i].g = gg;
                GPal[0xB0 + i].b = bb;
                SDL_Color color = { (Uint8)rr, (Uint8)gg, (Uint8)bb, 255 };
                SDL_SetPaletteColors(sdlPal, &color, 0xB0 + i, 1);
                C0 += 5;
            }
            ResFile pf = RRewrite(lpFileName);
            for (int i = 0; i < 256; i++) {
                RBlockWrite(pf, &GPal[i].r, 1);
                RBlockWrite(pf, &GPal[i].g, 1);
                RBlockWrite(pf, &GPal[i].b, 1);
            }
            RClose(pf);
        }
    }
}

__declspec(dllexport) void SlowLoadPalette(LPCSTR lpFileName) {
    if (DDError) return;
    SDL_Color tempPal[256];
    ResFile pf = RReset(lpFileName);
    if (pf != INVALID_HANDLE_VALUE) {
        for (int i = 0; i < 256; i++) {
            RBlockRead(pf, &tempPal[i].r, 1);
            RBlockRead(pf, &tempPal[i].g, 1);
            RBlockRead(pf, &tempPal[i].b, 1);
            tempPal[i].a = 255;
        }
        RClose(pf);
        const int steps = 20;
        Uint32 startTime = SDL_GetTicks();
        for (int step = 0; step <= steps; step++) {
            Uint32 currentTime = SDL_GetTicks();
            float t = (float)(currentTime - startTime) / 400.0f;
            if (t > 1.0f) t = 1.0f;
            for (int i = 0; i < 256; i++) {
                GPal[i].r = GPal[i].r + (tempPal[i].r - GPal[i].r) * t;
                GPal[i].g = GPal[i].g + (tempPal[i].g - GPal[i].g) * t;
                GPal[i].b = GPal[i].b + (tempPal[i].b - GPal[i].b) * t;
                SDL_Color color = { GPal[i].r, GPal[i].g, GPal[i].b, GPal[i].a };
                SDL_SetPaletteColors(sdlPal, &color, i, 1);
            }
            FlipPages();
            if (t >= 1.0f) break;
            SDL_Delay(10);
        }
    }
}

__declspec(dllexport) void SlowUnLoadPalette(LPCSTR lpFileName) {
    if (DDError) return;
    SDL_Color tempPal[256];
    for (int i = 0; i < 256; i++) {
        tempPal[i].r = 0;
        tempPal[i].g = 0;
        tempPal[i].b = 0;
        tempPal[i].a = 255;
    }
    const int steps = 20;
    Uint32 startTime = SDL_GetTicks();
    for (int step = 0; step <= steps; step++) {
        Uint32 currentTime = SDL_GetTicks();
        float t = (float)(currentTime - startTime) / 400.0f;
        if (t > 1.0f) t = 1.0f;
        for (int i = 0; i < 256; i++) {
            GPal[i].r = GPal[i].r + (tempPal[i].r - GPal[i].r) * t;
            GPal[i].g = GPal[i].g + (tempPal[i].g - GPal[i].g) * t;
            GPal[i].b = GPal[i].b + (tempPal[i].b - GPal[i].b) * t;
            SDL_Color color = { GPal[i].r, GPal[i].g, GPal[i].b, GPal[i].a };
            SDL_SetPaletteColors(sdlPal, &color, i, 1);
        }
        FlipPages();
        if (t >= 1.0f) break;
        SDL_Delay(10);
    }
    LoadPalette(lpFileName);
}

void SetDarkPalette(void) {
    if (DDError) return;
    for (int i = 0; i < 256; i++) {
        GPal[i].r = GPal[i].r * 2 / 3;
        GPal[i].g = GPal[i].g * 2 / 3;
        GPal[i].b = GPal[i].b * 2 / 3;
        SDL_Color color = { GPal[i].r, GPal[i].g, GPal[i].b, GPal[i].a };
        SDL_SetPaletteColors(sdlPal, &color, i, 1);
    }
}

void SetDebugMode() {}
void NoDebugMode() {}