// WebSound.cpp — native WebAudio glue (replaces SDL2_mixer decode path).
// WAV (RIFF PCM 8/16-bit, mono/stereo, any rate) -> PCM16 -> cosa_load_pcm16 (web/cos_audio.js).
// AudioBufferSourceNode resamples per-buffer automatically, so the source rate is kept as-is.

#ifdef __EMSCRIPTEN__

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern "C" {
    // web/cos_audio.js (js-library)
    int  cosa_init(int rate);
    int  cosa_load_pcm16(const int16_t* pcm, int frames, int channels, int rate);
    void cosa_free(int handle);
    int  cosa_play(int channel, int handle, int loops);
    void cosa_halt(int channel);
    int  cosa_playing(int channel);
    void cosa_volume(int channel, float v01);
    void cosa_pan(int channel, float l01, float r01);
    void cosa_pause_all(void);
    void cosa_resume_all(void);
    int  cosa_poll_ended(void);
    void cosa_close(void);
}

// Parse an in-memory RIFF/WAVE (PCM u8 / s16le) and hand the samples to WebAudio.
// Returns a cosa handle (>0) or 0 on failure.
extern "C" int cosw_load_wav(const void* bytes, int len) {
    const uint8_t* p = (const uint8_t*)bytes;
    if (!p || len < 44 || memcmp(p, "RIFF", 4) || memcmp(p + 8, "WAVE", 4)) return 0;
    int fmt = 0, channels = 0, rate = 0, bits = 0;
    const uint8_t* data = nullptr; uint32_t dlen = 0;
    uint32_t off = 12;
    while (off + 8 <= (uint32_t)len) {
        uint32_t sz; memcpy(&sz, p + off + 4, 4);
        const uint8_t* body = p + off + 8;
        if (!memcmp(p + off, "fmt ", 4) && sz >= 16) {
            uint16_t w; memcpy(&w, body + 0, 2); fmt = w;
            memcpy(&w, body + 2, 2); channels = w;
            uint32_t r; memcpy(&r, body + 4, 4); rate = (int)r;
            memcpy(&w, body + 14, 2); bits = w;
        } else if (!memcmp(p + off, "data", 4)) {
            data = body; dlen = sz;
            if (data + dlen > p + len) dlen = (uint32_t)(p + len - data);
        }
        off += 8 + sz + (sz & 1);
    }
    if (fmt != 1 || !data || !dlen || channels < 1 || channels > 2 || (bits != 8 && bits != 16)) {
        static int warned = 0;
        if (warned++ < 10) printf("[websnd] unsupported WAV (fmt=%d bits=%d ch=%d)\n", fmt, bits, channels);
        return 0;
    }
    int frames = (int)(dlen / (channels * (bits / 8)));
    if (frames <= 0) return 0;
    int h;
    if (bits == 16) {
        h = cosa_load_pcm16((const int16_t*)data, frames, channels, rate);
    } else {
        int16_t* tmp = (int16_t*)malloc((size_t)frames * channels * 2);
        if (!tmp) return 0;
        for (int i = 0; i < frames * channels; i++) tmp[i] = (int16_t)((data[i] - 128) << 8);
        h = cosa_load_pcm16(tmp, frames, channels, rate);
        free(tmp);
    }
    return h;
}

// Raw PCM variant (engine-side CWave: format struct + bare sample data, no RIFF container).
extern "C" int cosw_load_pcm(const void* smp, int bytes, int channels, int rate, int bits) {
    if (!smp || bytes <= 0 || channels < 1 || channels > 2 || (bits != 8 && bits != 16)) return 0;
    int frames = bytes / (channels * (bits / 8));
    if (frames <= 0) return 0;
    if (bits == 16) return cosa_load_pcm16((const int16_t*)smp, frames, channels, rate);
    const uint8_t* d = (const uint8_t*)smp;
    int16_t* tmp = (int16_t*)malloc((size_t)frames * channels * 2);
    if (!tmp) return 0;
    for (int i = 0; i < frames * channels; i++) tmp[i] = (int16_t)((d[i] - 128) << 8);
    int h = cosa_load_pcm16(tmp, frames, channels, rate);
    free(tmp);
    return h;
}

#endif // __EMSCRIPTEN__
