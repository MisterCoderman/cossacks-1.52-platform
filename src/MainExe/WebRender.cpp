// WebRender.cpp — native WebGL2 presenter for the web build (replaces the SDL2 renderer).
//
// The engine composes each frame as an 8-bit PALETTED framebuffer (offScreenPtr, pitch = MaxSizeX).
// The old SDL path converted it on the CPU every frame (8-bit -> ARGB SDL_Surface blit -> streaming
// texture -> RenderCopy). Here the indices are uploaded RAW to an R8 texture and a fragment shader
// does the palette lookup on the GPU (palette = 256x1 RGBA texture):
//
//   frame:  texSubImage2D(R8, w x h, GL_RED, indices)          (no CPU conversion at all)
//   draw:   fullscreen triangle, frag = pal[idx]               (letterbox via glViewport)
//
// Context is created directly on #canvas via emscripten's WebGL API — no SDL involvement.

#ifdef __EMSCRIPTEN__

#include <emscripten.h>
#include <emscripten/html5.h>
#include <GLES3/gl3.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

static EMSCRIPTEN_WEBGL_CONTEXT_HANDLE wr_ctx = 0;
static GLuint wr_prog = 0, wr_vao = 0;
static GLuint wr_tex_idx = 0, wr_tex_pal = 0;
static int    wr_tw = 0, wr_th = 0;            // allocated size of the index texture
static int    wr_bw = 0, wr_bh = 0;            // current canvas backing size
static unsigned char wr_pal_copy[1024];        // last palette (re-uploaded after context restore)
static int    wr_pal_valid = 0;

static const char* WR_VS =
    "#version 300 es\n"
    "out vec2 v_uv;\n"
    "void main(){\n"
    "  vec2 p = vec2(float((gl_VertexID<<1)&2), float(gl_VertexID&2));\n"   // fullscreen triangle
    "  v_uv = vec2(p.x, 1.0-p.y);\n"                                        // top-left origin
    "  gl_Position = vec4(p*2.0-1.0, 0.0, 1.0);\n"
    "}\n";
static const char* WR_FS =
    "#version 300 es\n"
    "precision mediump float;\n"
    "uniform sampler2D u_idx;\n"
    "uniform sampler2D u_pal;\n"
    "in vec2 v_uv;\n"
    "out vec4 o_col;\n"
    "void main(){\n"
    "  float i = texture(u_idx, v_uv).r;\n"                                  // 0..1 (index/255)
    "  o_col = texture(u_pal, vec2((i*255.0+0.5)/256.0, 0.5));\n"
    "}\n";

static GLuint wr_compile(GLenum type, const char* src) {
    GLuint s = glCreateShader(type);
    glShaderSource(s, 1, &src, nullptr);
    glCompileShader(s);
    GLint ok = 0; glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) { char log[512]; glGetShaderInfoLog(s, 512, nullptr, log);
               printf("[webgl] shader error: %s\n", log); }
    return s;
}

extern "C" int cos_webgl_init(void) {
    if (wr_ctx) return 1;
    EmscriptenWebGLContextAttributes a;
    emscripten_webgl_init_context_attributes(&a);
    a.majorVersion = 2; a.minorVersion = 0;
    a.alpha = false; a.depth = false; a.stencil = false; a.antialias = false;
    a.premultipliedAlpha = true; a.preserveDrawingBuffer = false;
    a.powerPreference = EM_WEBGL_POWER_PREFERENCE_HIGH_PERFORMANCE;
    wr_ctx = emscripten_webgl_create_context("#canvas", &a);
    if (wr_ctx <= 0) { printf("[webgl] context create FAILED (%d)\n", (int)wr_ctx); wr_ctx = 0; return 0; }
    emscripten_webgl_make_context_current(wr_ctx);

    GLuint vs = wr_compile(GL_VERTEX_SHADER, WR_VS);
    GLuint fs = wr_compile(GL_FRAGMENT_SHADER, WR_FS);
    wr_prog = glCreateProgram();
    glAttachShader(wr_prog, vs); glAttachShader(wr_prog, fs);
    glLinkProgram(wr_prog);
    GLint ok = 0; glGetProgramiv(wr_prog, GL_LINK_STATUS, &ok);
    if (!ok) { char log[512]; glGetProgramInfoLog(wr_prog, 512, nullptr, log);
               printf("[webgl] link error: %s\n", log); return 0; }
    glDeleteShader(vs); glDeleteShader(fs);
    glUseProgram(wr_prog);
    glUniform1i(glGetUniformLocation(wr_prog, "u_idx"), 0);
    glUniform1i(glGetUniformLocation(wr_prog, "u_pal"), 1);

    glGenVertexArrays(1, &wr_vao);           // WebGL2 needs a bound VAO even for attribute-less draws

    glGenTextures(1, &wr_tex_idx);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, wr_tex_idx);
    // PALETTE INDICES ARE CATEGORICAL — never interpolate them. GL_LINEAR here blends neighboring
    // index VALUES (e.g. 10..200 -> some unrelated color) and shreds any scaled frame into noise
    // (seen in fullscreen, where the chosen mode upscales to the screen backing). NEAREST only.
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    glGenTextures(1, &wr_tex_pal);
    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, wr_tex_pal);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, 256, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);

    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);   // 8-bit rows, arbitrary widths
    glDisable(GL_DEPTH_TEST); glDisable(GL_BLEND);

    // A long-backgrounded tab can have its GPU context evicted by the browser ("webglcontextlost").
    // Without preventDefault() the context is never restored -> permanent black screen while the
    // game keeps ticking. Flag lost/restored; cos_webgl_present() rebuilds the pipeline on restore.
    EM_ASM({
        if (!Module.__wrHooked) {
            Module.__wrHooked = 1;
            var c = Module.canvas;
            c.addEventListener('webglcontextlost', function (e) {
                e.preventDefault();
                Module.__wrLost = 1;
                console.warn('[webgl] context LOST (backgrounded tab?) — will rebuild on restore');
            }, false);
            c.addEventListener('webglcontextrestored', function () {
                Module.__wrRestored = 1;
                console.warn('[webgl] context restored — rebuilding pipeline');
            }, false);
        }
    });
    printf("[webgl] context+pipeline ready\n");
    return 1;
}

// Size the canvas BACKING STORE (replaces SDL_SetWindowSize). CSS size stays under shell control.
extern "C" void cos_webgl_backing(int w, int h) {
    if (w < 1 || h < 1) return;
    wr_bw = w; wr_bh = h;
    EM_ASM({ var c=Module.canvas; if (c && (c.width!=$0 || c.height!=$1)){ c.width=$0; c.height=$1; } }, w, h);
}

// Upload the 256-entry palette (engine GPal order: r,g,b,a bytes).
extern "C" void cos_webgl_palette(const unsigned char* rgba256) {
    memcpy(wr_pal_copy, rgba256, 1024);      // keep a copy for context-restore re-upload
    wr_pal_valid = 1;
    if (!wr_ctx) return;
    emscripten_webgl_make_context_current(wr_ctx);
    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, wr_tex_pal);
    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 256, 1, GL_RGBA, GL_UNSIGNED_BYTE, rgba256);
}

// Present one 8-bit paletted frame (w x h, row stride = pitch bytes), letterboxed into the backing.
extern "C" void cos_webgl_present(const unsigned char* idx, int w, int h, int pitch) {
    if (!idx || w < 1 || h < 1) return;

    // Robust context-loss recovery. A long-backgrounded tab gets its GPU context evicted; the
    // browser does NOT reliably fire 'webglcontextrestored', so waiting for that event leaves a
    // permanent black screen. Instead we detect loss LIVE (emscripten_is_webgl_context_lost, plus
    // the JS lost flag as a hint) and actively rebuild every frame: destroy the dead context and
    // create a fresh one. If the browser hasn't released the GPU yet, creation fails and we simply
    // retry on the next frame - so the picture always comes back the instant the GPU is available.
    int lost = (!wr_ctx)
             || EM_ASM_INT({ return Module.__wrLost ? 1 : 0; })
             || emscripten_is_webgl_context_lost(wr_ctx);
    if (lost) {
        EM_ASM({ Module.__wrLost = 0; Module.__wrRestored = 0; });
        if (wr_ctx) emscripten_webgl_destroy_context(wr_ctx);
        wr_ctx = 0; wr_prog = 0; wr_vao = 0; wr_tex_idx = 0; wr_tex_pal = 0;
        wr_tw = wr_th = 0;
        if (!cos_webgl_init()) return;   // GPU not back yet -> retry next frame (wr_ctx stays 0)
        if (wr_pal_valid) {
            emscripten_webgl_make_context_current(wr_ctx);
            glActiveTexture(GL_TEXTURE1);
            glBindTexture(GL_TEXTURE_2D, wr_tex_pal);
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 256, 1, GL_RGBA, GL_UNSIGNED_BYTE, wr_pal_copy);
        }
        printf("[webgl] pipeline rebuilt after context loss\n");
    }
    emscripten_webgl_make_context_current(wr_ctx);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, wr_tex_idx);
    if (w != wr_tw || h != wr_th) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, w, h, 0, GL_RED, GL_UNSIGNED_BYTE, nullptr);
        wr_tw = w; wr_th = h;
    }
    glPixelStorei(GL_UNPACK_ROW_LENGTH, pitch);              // WebGL2: upload directly from pitched buffer
    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, w, h, GL_RED, GL_UNSIGNED_BYTE, idx);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);

    // letterbox the w x h frame into the wr_bw x wr_bh backing store
    int bw = wr_bw > 0 ? wr_bw : w, bh = wr_bh > 0 ? wr_bh : h;
    double s  = (double)bw / w; double sy = (double)bh / h; if (sy < s) s = sy;
    int vw = (int)(w * s + 0.5), vh = (int)(h * s + 0.5);
    int vx = (bw - vw) / 2, vy = (bh - vh) / 2;

    glViewport(0, 0, bw, bh);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(vx, vy, vw, vh);
    glUseProgram(wr_prog);
    glBindVertexArray(wr_vao);
    glDrawArrays(GL_TRIANGLES, 0, 3);
}

#endif // __EMSCRIPTEN__
