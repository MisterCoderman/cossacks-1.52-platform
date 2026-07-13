// SDLStubs.cpp — web build only. The SDL2 LIBRARY is no longer linked (-sUSE_SDL removed from the
// link line); the hot paths run on the native layer instead:
//   render  -> WebRender.cpp (WebGL2 palette shader)      input -> WebInput.cpp (HTML5 events)
//   audio   -> WebSound.cpp + web/cos_audio.js (WebAudio)
// The engine's COLD paths (window management chatter, renderer-loss recovery, display enumeration
// fallbacks) still *reference* SDL symbols, so this file provides inert, success-returning stubs.
// SDL headers are used for TYPES only (compile-time -sUSE_SDL=2 include path; nothing is linked).

#ifdef __EMSCRIPTEN__

#include <SDL.h>
#include <emscripten.h>
#include <string.h>
#include <stdlib.h>

extern "C" {

// ---- init/teardown/diag -------------------------------------------------------------------------
int  SDL_Init(Uint32 flags)                { (void)flags; return 0; }
int  SDL_InitSubSystem(Uint32 flags)       { (void)flags; return 0; }
Uint32 SDL_WasInit(Uint32 flags)           { (void)flags; return SDL_INIT_VIDEO | SDL_INIT_AUDIO; }
void SDL_QuitSubSystem(Uint32 flags)       { (void)flags; }
void SDL_Quit(void)                        {}
const char* SDL_GetError(void)             { return ""; }
void SDL_ClearError(void)                  {}
int  SDL_setenv(const char* a, const char* b, int c) { (void)a;(void)b;(void)c; return 0; }
void SDL_SetMainReady(void)                {}
void SDL_GetVersion(SDL_version* v)        { if (v) { v->major = 2; v->minor = 32; v->patch = 10; } }
Uint32 SDL_GetTicks(void)                  { return (Uint32)emscripten_get_now(); }
void SDL_Delay(Uint32 ms)                  { (void)ms; /* never sleep the ASYNCIFY main loop here */ }

// ---- window management (web: the canvas IS the window; all of this is inert) --------------------
static int wsw = 1024, wsh = 768;          // remembered "window size" for GetWindowSize callers
SDL_Window* SDL_CreateWindow(const char* t, int x, int y, int w, int h, Uint32 f) {
    (void)t;(void)x;(void)y;(void)f; if (w > 0) wsw = w; if (h > 0) wsh = h; return (SDL_Window*)1; }
void SDL_DestroyWindow(SDL_Window* w)      { (void)w; }
void SDL_SetWindowSize(SDL_Window* w, int W, int H) { (void)w; if (W > 0) wsw = W; if (H > 0) wsh = H; }
void SDL_GetWindowSize(SDL_Window* w, int* W, int* H) { (void)w; if (W) *W = wsw; if (H) *H = wsh; }
void SDL_SetWindowPosition(SDL_Window* w, int x, int y) { (void)w;(void)x;(void)y; }
void SDL_GetWindowPosition(SDL_Window* w, int* x, int* y) { (void)w; if (x) *x = 0; if (y) *y = 0; }
int  SDL_SetWindowFullscreen(SDL_Window* w, Uint32 f) { (void)w;(void)f; return 0; }
void SDL_SetWindowBordered(SDL_Window* w, SDL_bool b) { (void)w;(void)b; }
void SDL_SetWindowGrab(SDL_Window* w, SDL_bool g)     { (void)w;(void)g; }
void SDL_SetWindowResizable(SDL_Window* w, SDL_bool r){ (void)w;(void)r; }
int  SDL_SetWindowInputFocus(SDL_Window* w)           { (void)w; return 0; }
void SDL_SetWindowTitle(SDL_Window* w, const char* t) { (void)w;(void)t; }
Uint32 SDL_GetWindowFlags(SDL_Window* w)              { (void)w; return 0; }
int  SDL_ShowCursor(int toggle)                       { (void)toggle; return 0; }
int  SDL_SetRelativeMouseMode(SDL_bool e)             { (void)e; return 0; }
SDL_bool SDL_GetRelativeMouseMode(void)               { return SDL_FALSE; }

// ---- renderer/texture (hot path is WebRender; these only keep cold code paths harmless) ---------
SDL_Renderer* SDL_CreateRenderer(SDL_Window* w, int i, Uint32 f) { (void)w;(void)i;(void)f; return (SDL_Renderer*)1; }
void SDL_DestroyRenderer(SDL_Renderer* r)  { (void)r; }
SDL_Texture* SDL_CreateTexture(SDL_Renderer* r, Uint32 f, int a, int w, int h) {
    (void)r;(void)f;(void)a;(void)w;(void)h; return (SDL_Texture*)1; }
void SDL_DestroyTexture(SDL_Texture* t)    { (void)t; }
int  SDL_RenderSetLogicalSize(SDL_Renderer* r, int w, int h) { (void)r;(void)w;(void)h; return 0; }
int  SDL_RenderSetVSync(SDL_Renderer* r, int v) { (void)r;(void)v; return 0; }
int  SDL_SetRenderDrawColor(SDL_Renderer* r, Uint8 a, Uint8 b, Uint8 c, Uint8 d) { (void)r;(void)a;(void)b;(void)c;(void)d; return 0; }
int  SDL_RenderClear(SDL_Renderer* r)      { (void)r; return 0; }
int  SDL_RenderCopy(SDL_Renderer* r, SDL_Texture* t, const SDL_Rect* s, const SDL_Rect* d) {
    (void)r;(void)t;(void)s;(void)d; return 0; }
void SDL_RenderPresent(SDL_Renderer* r)    { (void)r; }
int  SDL_SetRenderTarget(SDL_Renderer* r, SDL_Texture* t) { (void)r;(void)t; return 0; }
SDL_Texture* SDL_GetRenderTarget(SDL_Renderer* r) { (void)r; return NULL; }
int  SDL_LockTextureToSurface(SDL_Texture* t, const SDL_Rect* rc, SDL_Surface** s) {
    (void)t;(void)rc; if (s) *s = NULL; return -1; }   // cold recovery path only; present is WebGL
void SDL_UnlockTexture(SDL_Texture* t)     { (void)t; }

// ---- surface/palette (palette truth lives in GPal -> cos_webgl_palette) -------------------------
SDL_Surface* SDL_CreateRGBSurfaceWithFormatFrom(void* p, int w, int h, int d, int pt, Uint32 f) {
    (void)p;(void)w;(void)h;(void)d;(void)pt;(void)f; return NULL; }
void SDL_FreeSurface(SDL_Surface* s)       { (void)s; }
int  SDL_UpperBlit(SDL_Surface* a, const SDL_Rect* b, SDL_Surface* c, SDL_Rect* d) {
    (void)a;(void)b;(void)c;(void)d; return -1; }      // SDL_BlitSurface macro target
SDL_Palette* SDL_AllocPalette(int n) {
    SDL_Palette* p = (SDL_Palette*)calloc(1, sizeof(SDL_Palette));
    if (!p) return NULL;
    p->ncolors = n;
    p->colors = (SDL_Color*)calloc(n > 0 ? n : 1, sizeof(SDL_Color));
    return p;
}
int  SDL_SetPaletteColors(SDL_Palette* p, const SDL_Color* c, int first, int n) {
    if (p && p->colors && c && first >= 0 && first + n <= p->ncolors)
        memcpy(p->colors + first, c, (size_t)n * sizeof(SDL_Color));
    return 0;
}
void SDL_FreePalette(SDL_Palette* p)       { if (p) { free(p->colors); free(p); } }
int  SDL_SetSurfacePalette(SDL_Surface* s, SDL_Palette* p) { (void)s;(void)p; return 0; }

// ---- display enumeration fallbacks (EnumModesOnly returns before these on web) ------------------
int  SDL_GetNumDisplayModes(int i)         { (void)i; return 0; }
int  SDL_GetDisplayMode(int d, int m, SDL_DisplayMode* out) {
    (void)d;(void)m; if (out) memset(out, 0, sizeof(*out)); return -1; }
int  SDL_GetCurrentDisplayMode(int d, SDL_DisplayMode* out) {
    (void)d; if (out) memset(out, 0, sizeof(*out)); return -1; }

} // extern "C"

#endif // __EMSCRIPTEN__
