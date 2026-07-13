// SdlEventBridge.cpp
// Bridges SDL2 events to Win32 message pump API (PeekMessage, DispatchMessage, etc.)
// Used on non-Windows platforms to feed the existing WindowProc-based game code.

#ifndef _MSC_VER

#ifndef __EMSCRIPTEN__
#ifdef _WIN32
    #include <SDL.h>
#else
    #include <SDL2/SDL.h>
#endif
#endif
#include <string.h>
#include "platform_types.h"

// NOTE (mouse capture, from SDL 2.32.10 sources): the bridge deliberately passes event.motion.x/y
// and event.button.x/y through UNTOUCHED. In relative-mouse mode (enabled by Ddini for in-game
// windowed play) SDL core ALREADY integrates the pointer-lock deltas into mouse->x/y CLAMPED to the
// window (SDL_mouse.c: SDL_PrivateSendMouseMotion), the renderer's event watch converts them into
// SDL_RenderSetLogicalSize logical coordinates (SDL_render.c: SDL_RendererEventWatch), and the
// emscripten driver re-requests the pointer lock on every mousedown while unlocked
// (SDL_emscriptenevents.c:669). A second integration layer here double-scales and fights that.

// --- Registered WindowProc callback ---
static WNDPROC g_registeredWndProc = nullptr;
static HWND g_registeredHwnd = nullptr;

// --- Keyboard state (indexed by VK code) ---
static BYTE g_keyState[256] = {};

// --- Modifier key tracking ---
static bool g_ctrlPressed = false;
static bool g_shiftPressed = false;
static bool g_altPressed = false;
static bool g_capsLock = false;

// --- Text input from SDL_TEXTINPUT (for ToAscii/ToUnicode) ---
static WCHAR g_lastTextInput[32] = {};
static int g_lastTextInputLen = 0;
static bool g_hasTextInput = false;

// --- Quit flag ---
static bool g_quitRequested = false;

#ifdef __EMSCRIPTEN__
// =============================================================================
// Native web build: keyboard state + text buffer are fed by WebInput.cpp (HTML5
// keydown/keyup callbacks). No SDL anywhere in this translation unit.
// =============================================================================
extern "C" void cos_bridge_key_state(int vk, int down) {
    if (vk < 0 || vk > 255) return;
    g_keyState[vk] = down ? 0x80 : 0;
    if (vk == VK_CONTROL) g_ctrlPressed  = !!down;
    if (vk == VK_SHIFT)   g_shiftPressed = !!down;
    if (vk == VK_MENU)    g_altPressed   = !!down;
    if (vk == VK_CAPITAL && down) { g_capsLock = !g_capsLock; g_keyState[VK_CAPITAL] = g_capsLock ? 0x01 : 0x80; }
}
extern "C" void cos_bridge_text_push(unsigned short wch) {
    g_lastTextInput[0] = (WCHAR)wch;
    g_lastTextInputLen = 1;
    g_hasTextInput = true;
}
#endif

#ifndef __EMSCRIPTEN__
// =============================================================================
// SDL Keycode → Windows VK code mapping
// =============================================================================
static int sdl_keycode_to_vk(SDL_Keycode key) {
    // Letters: SDL uses lowercase, VK uses uppercase
    if (key >= SDLK_a && key <= SDLK_z)
        return key - 32; // 'a'(97) → 'A'(65)

    // Digits: same codes
    if (key >= SDLK_0 && key <= SDLK_9)
        return key;

    switch (key) {
        case SDLK_ESCAPE:    return VK_ESCAPE;
        case SDLK_RETURN:    return VK_RETURN;
        case SDLK_BACKSPACE: return VK_BACK;
        case SDLK_TAB:       return VK_TAB;
        case SDLK_SPACE:     return ' ';
        case SDLK_DELETE:    return VK_DELETE;
        case SDLK_INSERT:    return VK_INSERT;
        case SDLK_HOME:      return VK_HOME;
        case SDLK_END:       return VK_END;
        case SDLK_PAGEUP:    return VK_PRIOR;
        case SDLK_PAGEDOWN:  return VK_NEXT;
        case SDLK_LEFT:      return VK_LEFT;
        case SDLK_RIGHT:     return VK_RIGHT;
        case SDLK_UP:        return VK_UP;
        case SDLK_DOWN:      return VK_DOWN;

        case SDLK_LSHIFT:
        case SDLK_RSHIFT:   return VK_SHIFT;
        case SDLK_LCTRL:
        case SDLK_RCTRL:    return VK_CONTROL;
        case SDLK_LALT:
        case SDLK_RALT:     return VK_MENU;

        case SDLK_CAPSLOCK:  return VK_CAPITAL;
        case SDLK_SCROLLLOCK:return VK_SCROLL;

        case SDLK_F1:  return VK_F1;
        case SDLK_F2:  return VK_F2;
        case SDLK_F3:  return VK_F3;
        case SDLK_F4:  return VK_F4;
        case SDLK_F5:  return VK_F5;
        case SDLK_F6:  return VK_F6;
        case SDLK_F7:  return VK_F7;
        case SDLK_F8:  return VK_F8;
        case SDLK_F9:  return VK_F9;
        case SDLK_F10: return VK_F10;
        case SDLK_F11: return VK_F11;
        case SDLK_F12: return VK_F12;

        case SDLK_KP_0: return VK_NUMPAD0;
        case SDLK_KP_1: return VK_NUMPAD1;
        case SDLK_KP_2: return VK_NUMPAD2;
        case SDLK_KP_3: return VK_NUMPAD3;
        case SDLK_KP_4: return VK_NUMPAD4;
        case SDLK_KP_5: return VK_NUMPAD5;
        case SDLK_KP_6: return VK_NUMPAD6;
        case SDLK_KP_7: return VK_NUMPAD7;
        case SDLK_KP_8: return VK_NUMPAD8;
        case SDLK_KP_9: return VK_NUMPAD9;

        case SDLK_KP_ENTER: return VK_RETURN;

        // Punctuation — use Windows VK_OEM codes to avoid collisions
        // (e.g. '.' ASCII 0x2E == VK_DELETE, '-' ASCII 0x2D == VK_INSERT)
        case SDLK_MINUS:        return 0xBD; // VK_OEM_MINUS
        case SDLK_EQUALS:       return 0xBB; // VK_OEM_PLUS (= key)
        case SDLK_LEFTBRACKET:  return 0xDB; // VK_OEM_4
        case SDLK_RIGHTBRACKET: return 0xDD; // VK_OEM_6
        case SDLK_BACKSLASH:    return 0xDC; // VK_OEM_5
        case SDLK_SEMICOLON:    return 0xBA; // VK_OEM_1
        case SDLK_QUOTE:        return 0xDE; // VK_OEM_7
        case SDLK_BACKQUOTE:    return 0xC0; // VK_OEM_3
        case SDLK_COMMA:        return 0xBC; // VK_OEM_COMMA
        case SDLK_PERIOD:       return 0xBE; // VK_OEM_PERIOD
        case SDLK_SLASH:        return 0xBF; // VK_OEM_2

        default: return 0;
    }
}

// =============================================================================
// Update modifier key tracking from SDL event
// =============================================================================
static void update_modifiers(Uint16 mod) {
    g_ctrlPressed  = (mod & (KMOD_LCTRL | KMOD_RCTRL)) != 0;
    g_shiftPressed = (mod & (KMOD_LSHIFT | KMOD_RSHIFT)) != 0;
    g_altPressed   = (mod & (KMOD_LALT | KMOD_RALT)) != 0;
    g_capsLock     = (mod & KMOD_CAPS) != 0;

    // Update key state array for modifier keys
    g_keyState[VK_CONTROL] = g_ctrlPressed  ? 0x80 : 0;
    g_keyState[VK_SHIFT]   = g_shiftPressed ? 0x80 : 0;
    g_keyState[VK_MENU]    = g_altPressed   ? 0x80 : 0;
    // Caps lock toggle state in low bit
    g_keyState[VK_CAPITAL] = g_capsLock ? 0x01 : 0;
}
#endif  // !__EMSCRIPTEN__ (SDL keycode mapping + modifiers)

// =============================================================================
// PeekMessage — polls SDL events and translates to Win32 MSG
// =============================================================================
#ifdef __EMSCRIPTEN__
// Native HTML5 mouse layer (WebInput.cpp): the mouse bypasses SDL entirely.
extern "C" void cos_webinput_init(void);
extern "C" int  cos_webinput_poll(UINT* message, WPARAM* wParam, LPARAM* lParam);
#endif

int PeekMessage(MSG* msg, HWND h, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
    (void)h; (void)wMsgFilterMin; (void)wMsgFilterMax; (void)wRemoveMsg;

#ifdef __EMSCRIPTEN__
    // Pure native path: ALL input (mouse + keyboard + focus) comes from WebInput.cpp's HTML5
    // callbacks through one ring buffer. There is no SDL event queue on the web build at all.
    cos_webinput_init();
    {
        UINT m; WPARAM w; LPARAM l;
        if (cos_webinput_poll(&m, &w, &l)) {
            memset(msg, 0, sizeof(MSG));
            msg->hwnd = g_registeredHwnd;
            msg->message = m; msg->wParam = w; msg->lParam = l;
            return 1;
        }
    }
    if (g_quitRequested) {
        memset(msg, 0, sizeof(MSG));
        msg->message = WM_QUIT;
        g_quitRequested = false;
        return 1;
    }
    return 0;
#else
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        memset(msg, 0, sizeof(MSG));
        msg->hwnd = g_registeredHwnd;

        switch (event.type) {
        case SDL_QUIT:
            msg->message = WM_QUIT;
            return 1;

#ifdef __EMSCRIPTEN__
        // Mouse comes from the native HTML5 layer; if any SDL mouse event still slips through
        // (e.g. synthesized), drop it so there is exactly ONE input path.
        case SDL_MOUSEMOTION:
        case SDL_MOUSEBUTTONDOWN:
        case SDL_MOUSEBUTTONUP:
        case SDL_MOUSEWHEEL:
            continue;
#else
        case SDL_MOUSEMOTION:
            msg->message = WM_MOUSEMOVE;
            msg->lParam = MAKELPARAM(event.motion.x, event.motion.y);
            msg->wParam = 0;
            if (event.motion.state & SDL_BUTTON_LMASK) msg->wParam |= MK_LBUTTON;
            if (event.motion.state & SDL_BUTTON_RMASK) msg->wParam |= MK_RBUTTON;
            return 1;

        case SDL_MOUSEBUTTONDOWN:
            if (event.button.button == SDL_BUTTON_LEFT) {
                msg->message = WM_LBUTTONDOWN;
                msg->wParam = MK_LBUTTON;
            } else if (event.button.button == SDL_BUTTON_RIGHT) {
                msg->message = WM_RBUTTONDOWN;
                msg->wParam = MK_RBUTTON;
            } else {
                continue; // ignore middle/other buttons, poll next
            }
            msg->lParam = MAKELPARAM(event.button.x, event.button.y);
            return 1;

        case SDL_MOUSEBUTTONUP:
            if (event.button.button == SDL_BUTTON_LEFT) {
                msg->message = WM_LBUTTONUP;
            } else if (event.button.button == SDL_BUTTON_RIGHT) {
                msg->message = WM_RBUTTONUP;
            } else {
                continue;
            }
            msg->lParam = MAKELPARAM(event.button.x, event.button.y);
            msg->wParam = 0;
            return 1;

        case SDL_MOUSEWHEEL:
            msg->message = 0x020A; // WM_MOUSEWHEEL
            // Windows: HIWORD(wParam) = wheel delta (multiples of 120)
            {
                short delta = (short)(event.wheel.y * 120);
                msg->wParam = ((WPARAM)(WORD)(delta)) << 16;
            }
            return 1;
#endif

        case SDL_KEYDOWN:
            update_modifiers(event.key.keysym.mod);
            {
                int vk = sdl_keycode_to_vk(event.key.keysym.sym);
                if (vk > 0 && vk < 256) {
                    g_keyState[vk] = 0x80;
                    msg->message = WM_KEYDOWN;
                    msg->wParam = (WPARAM)vk;
                    msg->lParam = (LPARAM)event.key.keysym.scancode;
                    // SDL generates SDL_TEXTINPUT right after SDL_KEYDOWN
                    // for printable keys. Peek ahead so ToAscii() has text
                    // available when WM_KEYDOWN is dispatched.
                    SDL_Event peekEv;
                    while (SDL_PeepEvents(&peekEv, 1, SDL_GETEVENT, SDL_TEXTINPUT, SDL_TEXTINPUT) == 1) {
                        const char* text = peekEv.text.text;
                        g_lastTextInputLen = 0;
                        int ti = 0;
                        while (text[ti] && g_lastTextInputLen < 30) {
                            unsigned char c = (unsigned char)text[ti];
                            if (c < 0x80) {
                                g_lastTextInput[g_lastTextInputLen++] = c;
                                ti++;
                            } else if (c < 0xE0) {
                                if (text[ti+1]) {
                                    g_lastTextInput[g_lastTextInputLen++] =
                                        ((c & 0x1F) << 6) | (text[ti+1] & 0x3F);
                                    ti += 2;
                                } else break;
                            } else if (c < 0xF0) {
                                if (text[ti+1] && text[ti+2]) {
                                    g_lastTextInput[g_lastTextInputLen++] =
                                        ((c & 0x0F) << 12) | ((text[ti+1] & 0x3F) << 6) | (text[ti+2] & 0x3F);
                                    ti += 3;
                                } else break;
                            } else {
                                ti += 4;
                            }
                        }
                        g_hasTextInput = (g_lastTextInputLen > 0);
                        break;
                    }
                    return 1;
                }
            }
            continue; // unmapped key, poll next

        case SDL_KEYUP:
            update_modifiers(event.key.keysym.mod);
            {
                int vk = sdl_keycode_to_vk(event.key.keysym.sym);
                if (vk > 0 && vk < 256) {
                    g_keyState[vk] = 0;
                }
            }
            // Game doesn't handle WM_KEYUP, just update state and continue
            continue;

        case SDL_TEXTINPUT:
            // Store for ToAscii/ToUnicode — consumed by WM_KEYDOWN handler
            {
                const char* text = event.text.text;
                g_lastTextInputLen = 0;
                int i = 0;
                while (text[i] && g_lastTextInputLen < 30) {
                    unsigned char c = (unsigned char)text[i];
                    if (c < 0x80) {
                        g_lastTextInput[g_lastTextInputLen++] = c;
                        i++;
                    } else if (c < 0xE0) {
                        if (text[i+1]) {
                            g_lastTextInput[g_lastTextInputLen++] =
                                ((c & 0x1F) << 6) | (text[i+1] & 0x3F);
                            i += 2;
                        } else break;
                    } else if (c < 0xF0) {
                        if (text[i+1] && text[i+2]) {
                            g_lastTextInput[g_lastTextInputLen++] =
                                ((c & 0x0F) << 12) | ((text[i+1] & 0x3F) << 6) | (text[i+2] & 0x3F);
                            i += 3;
                        } else break;
                    } else {
                        i += 4; // skip 4-byte (beyond BMP)
                    }
                }
                g_hasTextInput = (g_lastTextInputLen > 0);
            }
            continue; // no Win32 message for this

        case SDL_WINDOWEVENT:
            switch (event.window.event) {
            case SDL_WINDOWEVENT_FOCUS_GAINED:
                msg->message = WM_ACTIVATEAPP;
                msg->wParam = TRUE;
                return 1;
            case SDL_WINDOWEVENT_FOCUS_LOST:
                msg->message = WM_ACTIVATEAPP;
                msg->wParam = FALSE;
                return 1;
            case SDL_WINDOWEVENT_CLOSE:
                msg->message = WM_CLOSE;
                return 1;
            case SDL_WINDOWEVENT_RESTORED:
                msg->message = WM_SIZE;
                msg->wParam = SIZE_RESTORED;
                return 1;
            case SDL_WINDOWEVENT_SIZE_CHANGED:
                msg->message = WM_SIZE;
                msg->wParam = SIZE_RESTORED;
                msg->lParam = MAKELPARAM(event.window.data1, event.window.data2);
                return 1;
            default:
                continue;
            }
            break;

        default:
            continue; // unhandled SDL event, poll next
        }
    }

    // Check deferred quit
    if (g_quitRequested) {
        memset(msg, 0, sizeof(MSG));
        msg->message = WM_QUIT;
        g_quitRequested = false;
        return 1;
    }

    return 0; // no events
#endif  // !__EMSCRIPTEN__ (SDL event pump)
}

// =============================================================================
// TranslateMessage — mostly a no-op; text input comes via SDL_TEXTINPUT
// =============================================================================
int TranslateMessage(const MSG* msg) {
    (void)msg;
    return 0;
}

// =============================================================================
// DispatchMessage — calls the registered WindowProc
// =============================================================================
LRESULT DispatchMessage(const MSG* msg) {
    if (g_registeredWndProc && msg->message != WM_QUIT) {
        return g_registeredWndProc(msg->hwnd, msg->message, msg->wParam, msg->lParam);
    }
    return 0;
}

// =============================================================================
// DefWindowProc — default handler, returns 0
// =============================================================================
LRESULT DefWindowProc(HWND h, UINT m, WPARAM w, LPARAM l) {
    (void)h; (void)m; (void)w; (void)l;
    return 0;
}

// =============================================================================
// PostQuitMessage — enqueues a WM_QUIT for next PeekMessage call
// =============================================================================
void PostQuitMessage(int code) {
    (void)code;
    g_quitRequested = true;
}

// =============================================================================
// RegisterClassA — captures the WndProc callback
// =============================================================================
ATOM RegisterClassA(const WNDCLASSA* wc) {
    if (wc && wc->lpfnWndProc) {
        g_registeredWndProc = wc->lpfnWndProc;
    }
    return (ATOM)(uintptr_t)1;
}

// =============================================================================
// GetKeyState — returns key state (high bit = pressed, low bit = toggled)
// =============================================================================
short GetKeyState(int nVirtKey) {
    if (nVirtKey < 0 || nVirtKey >= 256) return 0;
    short result = 0;
    if (g_keyState[nVirtKey] & 0x80) result |= (short)0x8000;
    if (g_keyState[nVirtKey] & 0x01) result |= 0x0001; // toggle state (caps lock etc.)
    return result;
}

// =============================================================================
// GetKeyboardState — fills 256-byte key state array
// =============================================================================
int GetKeyboardState(BYTE* keys) {
    if (keys) {
        memcpy(keys, g_keyState, 256);
    }
    return 1;
}

// =============================================================================
// ToAscii — converts virtual key to ASCII using last SDL_TEXTINPUT
// =============================================================================
int ToAscii(UINT uVirtKey, UINT uScanCode, const BYTE* lpKeyState, WORD* lpChar, UINT uFlags) {
    (void)uVirtKey; (void)uScanCode; (void)lpKeyState; (void)uFlags;
    if (!lpChar) return 0;

    if (g_hasTextInput && g_lastTextInputLen > 0) {
        WCHAR wc = g_lastTextInput[0];
        if (wc < 256) {
            *lpChar = (WORD)wc;
            return 1;
        }
        // Non-ASCII — still set it, WindowProc handles cyrillic via ToUnicode
        *lpChar = (WORD)(wc & 0xFF);
        return 1;
    }

    *lpChar = 0;
    return 0;
}

// =============================================================================
// ToUnicode — converts virtual key to Unicode using last SDL_TEXTINPUT
// =============================================================================
int ToUnicode(UINT wVirtKey, UINT wScanCode, const BYTE* lpKeyState,
              WCHAR* pwszBuff, int cchBuff, UINT wFlags) {
    (void)wVirtKey; (void)wScanCode; (void)lpKeyState; (void)wFlags;
    if (!pwszBuff || cchBuff <= 0) return 0;

    if (g_hasTextInput && g_lastTextInputLen > 0) {
        int count = g_lastTextInputLen < cchBuff ? g_lastTextInputLen : cchBuff;
        for (int i = 0; i < count; i++) {
            pwszBuff[i] = g_lastTextInput[i];
        }
        // Consume the text input so it's only used once per keypress
        g_hasTextInput = false;
        g_lastTextInputLen = 0;
        return count;
    }

    pwszBuff[0] = 0;
    return 0;
}

#endif // !_MSC_VER
