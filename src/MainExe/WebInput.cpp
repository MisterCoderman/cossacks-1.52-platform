// WebInput.cpp — NATIVE emscripten HTML5 mouse input for the web build.
//
// Replaces the SDL2 mouse pipeline entirely. Registering our callbacks on the same
// (element, event-type) pairs SDL uses ("#canvas" mousemove/mousedown/wheel, document mouseup)
// REMOVES SDL's handlers (JSEvents.registerOrRemoveHandler keeps ONE handler per pair), so SDL
// stops seeing mouse events and there is exactly one input path:
//
//   HTML5 callback -> logical-coords virtual cursor -> ring buffer of Win32 MSGs
//   -> PeekMessage (SdlEventBridge drains the ring first) -> WindowProc.
//
// Facts this file relies on (verified against emscripten 6.0.0 libhtml5.js + engine audit):
//  * targetX/targetY  = CSS px relative to the canvas rect (no devicePixelRatio).
//  * movementX/Y      = pointer-lock deltas in CSS px.
//  * pointer lock may ONLY be requested from a mousedown/keydown handler (userActivation);
//    deferred requests are BLOCKED inside mousemove handlers.
//  * pointerlockchange must be registered on EMSCRIPTEN_EVENT_TARGET_DOCUMENT.
//  * WheelEvent.deltaY > 0 = scroll DOWN; engine WheelDelta (HIWORD(wParam)) > 0 = scroll UP.
//  * Engine consumes ONLY WM_MOUSEMOVE/WM_[LR]BUTTON*/WM_MOUSEWHEEL; SetMPtr clamps X but NOT Y,
//    so we clamp both to the logical resolution here.
//  * The RealLx x RealLy frame is letterboxed into the canvas backing store by SDL logical size:
//    scale s = min(bw/RealLx, bh/RealLy), centered viewport -> invert that mapping for coords.

#ifdef __EMSCRIPTEN__

#include <emscripten.h>
#include <emscripten/html5.h>
#include <string.h>
#include "platform_types.h"

extern int RealLx, RealLy;   // current logical game resolution (menu: 1024x768)

// ---- ring buffer of ready Win32 messages -------------------------------------------------------
struct WMsg { UINT message; WPARAM wParam; LPARAM lParam; };
#define WI_QLEN 256
static WMsg  wi_q[WI_QLEN];
static int   wi_head = 0, wi_tail = 0;          // single-threaded (callbacks run between ASYNCIFY slices)

static void wi_push(UINT m, WPARAM w, LPARAM l) {
    int next = (wi_head + 1) % WI_QLEN;
    if (next == wi_tail) return;                 // full -> drop oldest-style (drop new, engine replays fine)
    wi_q[wi_head].message = m; wi_q[wi_head].wParam = w; wi_q[wi_head].lParam = l;
    wi_head = next;
}

// ---- state --------------------------------------------------------------------------------------
static double wi_vx = 512, wi_vy = 384;          // virtual cursor, LOGICAL coords
static int    wi_lastx = -1, wi_lasty = -1;      // last pushed int position
static int    wi_locked = 0;                     // document.pointerLockElement == canvas
static int    wi_ingame = 0, wi_fs = 0;          // set by engine (FlipPages poll)
static int    wi_buttons = 0;                    // MK_LBUTTON|MK_RBUTTON mirror

// canvas metrics: backing (bw,bh) + CSS (cw,ch)
static void wi_canvas_metrics(double* bw, double* bh, double* cw, double* ch) {
    *bw = EM_ASM_DOUBLE({ var c=Module.canvas; return c ? c.width  : 0; });
    *bh = EM_ASM_DOUBLE({ var c=Module.canvas; return c ? c.height : 0; });
    *cw = EM_ASM_DOUBLE({ var c=Module.canvas; return c ? (c.clientWidth||1)  : 1; });
    *ch = EM_ASM_DOUBLE({ var c=Module.canvas; return c ? (c.clientHeight||1) : 1; });
}
// letterbox mapping backing->logical (mirror of SDL_RenderSetLogicalSize)
static void wi_lb(double bw, double bh, double* s, double* ox, double* oy) {
    double sx = bw / (double)(RealLx > 0 ? RealLx : 1);
    double sy = bh / (double)(RealLy > 0 ? RealLy : 1);
    *s = sx < sy ? sx : sy;
    if (*s <= 0) *s = 1;
    *ox = (bw - RealLx * *s) * 0.5;
    *oy = (bh - RealLy * *s) * 0.5;
}
static void wi_clamp(void) {
    if (wi_vx < 0) wi_vx = 0; else if (wi_vx > RealLx - 1) wi_vx = RealLx - 1;
    if (wi_vy < 0) wi_vy = 0; else if (wi_vy > RealLy - 1) wi_vy = RealLy - 1;
}
// absolute CSS position (targetX/Y) -> logical virtual cursor
static void wi_abs(double cssx, double cssy) {
    double bw, bh, cw, ch, s, ox, oy;
    wi_canvas_metrics(&bw, &bh, &cw, &ch);
    wi_lb(bw, bh, &s, &ox, &oy);
    double xb = cssx * (bw / cw), yb = cssy * (bh / ch);   // CSS -> backing px
    wi_vx = (xb - ox) / s; wi_vy = (yb - oy) / s;          // backing -> logical
    wi_clamp();
}
// pointer-lock deltas (CSS px) -> logical
static void wi_rel(double dx, double dy) {
    double bw, bh, cw, ch, s, ox, oy;
    wi_canvas_metrics(&bw, &bh, &cw, &ch);
    wi_lb(bw, bh, &s, &ox, &oy);
    wi_vx += dx * (bw / cw) / s; wi_vy += dy * (bh / ch) / s;
    wi_clamp();
}
static void wi_motion(void) {
    int x = (int)wi_vx, y = (int)wi_vy;
    if (x == wi_lastx && y == wi_lasty) return;
    wi_lastx = x; wi_lasty = y;
    wi_push(WM_MOUSEMOVE, (WPARAM)wi_buttons, MAKELPARAM(x, y));
}

// ---- HTML5 callbacks -----------------------------------------------------------------------------
static bool wi_on_move(int, const EmscriptenMouseEvent* e, void*) {
    if (wi_locked) wi_rel((double)e->movementX, (double)e->movementY);
    else           wi_abs((double)e->targetX,   (double)e->targetY);
    wi_motion();
    return true;
}
static bool wi_on_down(int, const EmscriptenMouseEvent* e, void*) {
    if (!wi_locked) { wi_abs((double)e->targetX, (double)e->targetY); wi_motion(); }
    // Engage the pointer lock for in-game play — WINDOWED *and* FULLSCREEN — from a genuine user
    // gesture (the only place the browser allows it). Browser fullscreen does NOT confine the OS
    // cursor by itself (it walks off to the second monitor), so the lock is needed there too.
    // Menus keep the free cursor.
    if (wi_ingame && !wi_locked)
        emscripten_request_pointerlock("#canvas", false);
    if (e->button == 0) {
        fprintf(stderr, "[CLICK-DBG] targetX=%.1f targetY=%.1f -> logical vx=%.1f vy=%.1f (RealLx=%d RealLy=%d)\n",
            e->targetX, e->targetY, wi_vx, wi_vy, RealLx, RealLy);
        wi_buttons |= MK_LBUTTON; wi_push(WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM((int)wi_vx, (int)wi_vy));
    }
    else if (e->button == 2) { wi_buttons |= MK_RBUTTON; wi_push(WM_RBUTTONDOWN, MK_RBUTTON, MAKELPARAM((int)wi_vx, (int)wi_vy)); }
    return true;
}
static bool wi_on_up(int, const EmscriptenMouseEvent* e, void*) {
    if (e->button == 0) { wi_buttons &= ~MK_LBUTTON; wi_push(WM_LBUTTONUP, 0, MAKELPARAM((int)wi_vx, (int)wi_vy)); }
    else if (e->button == 2) { wi_buttons &= ~MK_RBUTTON; wi_push(WM_RBUTTONUP, 0, MAKELPARAM((int)wi_vx, (int)wi_vy)); }
    return false;   // registered on document: don't eat events outside the canvas
}
static bool wi_on_wheel(int, const EmscriptenWheelEvent* e, void*) {
    if (e->deltaY == 0) return true;
    short delta = (e->deltaY < 0) ? 120 : -120;   // browser +down  ->  Windows +up
    wi_push(0x020A /*WM_MOUSEWHEEL*/, MAKELPARAM(0, (WORD)delta), MAKELPARAM((int)wi_vx, (int)wi_vy));
    return true;
}
// ---- native KEYBOARD ------------------------------------------------------------------------------
// Browser KeyboardEvent.keyCode matches the Win32 VK_* space for the keys this game uses
// (A-Z, 0-9, F1-F12, arrows=0x25..0x28, Enter=0x0D, Esc=0x1B, Space, Shift/Ctrl/Alt=0x10/11/12,
// Home/End/PgUp/PgDn, Del/Ins, OEM punctuation), so the mapping is a passthrough.
// Text input for ToAscii/chat comes from e.key pushed into the bridge's text buffer.
extern "C" void cos_bridge_key_state(int vk, int down);       // SdlEventBridge: g_keyState mirror
extern "C" void cos_bridge_text_push(unsigned short wch);     // SdlEventBridge: text-input buffer

static bool wi_on_key(int eventType, const EmscriptenKeyboardEvent* e, void*) {
    int vk = (int)e->keyCode;
    if (vk <= 0 || vk > 255) return false;
    int down = (eventType == EMSCRIPTEN_EVENT_KEYDOWN) ? 1 : 0;
    cos_bridge_key_state(vk, down);
    if (down) {
        wi_push(0x0100 /*WM_KEYDOWN*/, (WPARAM)vk, 0);
        // printable text: e.key holds exactly the produced character(s)
        if (e->key[0] && !e->key[1] && !e->ctrlKey && !e->altKey)
            cos_bridge_text_push((unsigned short)(unsigned char)e->key[0]);
        else if (e->key[0] && e->key[1] && !e->ctrlKey && !e->altKey) {
            // 2-byte UTF-8 single char (cyrillic etc.) -> decode the codepoint
            unsigned char c0 = (unsigned char)e->key[0], c1 = (unsigned char)e->key[1];
            if ((c0 & 0xE0) == 0xC0 && (c1 & 0xC0) == 0x80 && !e->key[2])
                cos_bridge_text_push((unsigned short)(((c0 & 0x1F) << 6) | (c1 & 0x3F)));
        }
    } else {
        wi_push(0x0101 /*WM_KEYUP*/, (WPARAM)vk, 0);
    }
    // Let F5 (reload) / F11 (shell fullscreen) / F12 (devtools) and clipboard combos through;
    // eat everything else (arrows scroll the page, space scrolls, etc.)
    if (vk == 0x74 || vk == 0x7A || vk == 0x7B) return false;
    if (e->ctrlKey && (vk == 'C' || vk == 'V' || vk == 'X' || vk == 'R')) return false;
    return true;
}
static bool wi_on_focus(int eventType, const EmscriptenFocusEvent*, void*) {
    // blur -> release all keys (no stuck Alt/Ctrl after tab-switch) + WM_ACTIVATEAPP
    int gained = (eventType == EMSCRIPTEN_EVENT_FOCUS) ? 1 : 0;
    if (!gained) for (int vk = 0; vk < 256; vk++) cos_bridge_key_state(vk, 0);
    wi_push(0x001C /*WM_ACTIVATEAPP*/, (WPARAM)gained, 0);
    return false;
}

static bool wi_on_lockchange(int, const EmscriptenPointerlockChangeEvent* e, void*) {
    wi_locked = e->isActive ? 1 : 0;
    return false;
}

// ---- engine-facing API ---------------------------------------------------------------------------
// (Re)register our handlers. JSEvents keeps ONE handler per (target,event) pair — whoever registers
// LAST owns the pair. SDL re-registers its canvas handlers whenever it (re)creates the window
// (CreateDDObjects on every mode change / menu<->game transition), so this MUST be called again
// after each CreateDDObjects to displace them. Safe to call any number of times.
extern "C" void cos_webinput_attach(void) {
    // Register EXACTLY ONCE. emscripten's JSEvents does NOT replace a handler on re-registration —
    // it calls addEventListener again and pushes another entry (libhtml5.js registerOrRemoveHandler),
    // so calling this per CreateDDObjects stacked N handlers: every click delivered N times, the
    // engine's double-click detector fired on the duplicated LBUTTONUP and wiped box selections.
    // (With SDL gone there is nothing to displace, so once is also sufficient.)
    static int attached = 0;
    if (attached) return;
    attached = 1;
    emscripten_set_mousemove_callback("#canvas", nullptr, false, wi_on_move);
    emscripten_set_mousedown_callback("#canvas", nullptr, false, wi_on_down);
    emscripten_set_mouseup_callback(EMSCRIPTEN_EVENT_TARGET_DOCUMENT, nullptr, false, wi_on_up);
    emscripten_set_wheel_callback("#canvas", nullptr, false, wi_on_wheel);
    emscripten_set_pointerlockchange_callback(EMSCRIPTEN_EVENT_TARGET_DOCUMENT, nullptr, false, wi_on_lockchange);
    // KEYBOARD + FOCUS are native too (window-level: keys work regardless of canvas focus)
    emscripten_set_keydown_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, nullptr, false, wi_on_key);
    emscripten_set_keyup_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, nullptr, false, wi_on_key);
    emscripten_set_focus_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, nullptr, false, wi_on_focus);
    emscripten_set_blur_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, nullptr, false, wi_on_focus);
}
extern "C" void cos_webinput_init(void) {
    static int done = 0;
    if (done) return; done = 1;
    cos_webinput_attach();
    wi_vx = RealLx * 0.5; wi_vy = RealLy * 0.5;
}
// Called from the engine when the game/fullscreen state flips (FlipPages poll in Ddini.cpp).
extern "C" void cos_webinput_state(int ingame, int fullscreen) {
    wi_ingame = ingame; wi_fs = fullscreen;
    if (!ingame && wi_locked) emscripten_exit_pointerlock();   // menus: always a free cursor
}
// Drain one converted Win32 message; returns 1 if msg filled.
extern "C" int cos_webinput_poll(UINT* message, WPARAM* wParam, LPARAM* lParam) {
    if (wi_tail == wi_head) return 0;
    *message = wi_q[wi_tail].message; *wParam = wi_q[wi_tail].wParam; *lParam = wi_q[wi_tail].lParam;
    wi_tail = (wi_tail + 1) % WI_QLEN;
    return 1;
}

#endif // __EMSCRIPTEN__
