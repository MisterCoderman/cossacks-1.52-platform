/* cpu.c — guest memory + CPU state for the x86->WASM recompilation. */
#include "cpu.h"
#include <stdio.h>
#include <stdlib.h>

uint8_t *g_mem = 0;
Cpu C;

/* pristine copy of the loaded image (sections at their VAs in a flat span up to
 * G_IMAGE_END) so the differential oracle can restore guest memory to its exact
 * initial state between functions (matching Unicorn's fresh map per run).
 * Woody.exe (ImageBase 0x400000): .data VA 0x4b1000 + VSize 0x139278 = 0x5ea278,
 * rounded up to .idata start 0x5eb000 so the pristine span covers .data+.bss. */
#define G_IMAGE_END 0x005eb000u
static uint8_t *g_pristine = 0;

static long load_at(const char *path, uint32_t va, long cap) {
    FILE *f = fopen(path, "rb");
    if (!f) return -1;
    long n = (long)fread(g_mem + va, 1, (size_t)cap, f);
    fclose(f);
    return n;
}

int x86_mem_init(const char *dataDir) {
    char p[1024];
    /* +16 guard pad: a GMASK-masked 32/64/80-bit access whose masked offset sits in
     * the top few bytes (e.g. a wild pointer 0xFFFFFFxx & GMASK ~= top) reads/writes a
     * few bytes past G_MEM_SIZE; the pad makes that a harmless scratch r/w instead of
     * a wasm OOB trap (matches the interpreter's graceful wild-access tolerance). */
    g_mem = (uint8_t *)calloc(1, G_MEM_SIZE + 16);   /* zero => .bss + unused */
    if (!g_mem) return -1;

    snprintf(p, sizeof p, "%s/text.bin", dataDir);
    if (load_at(p, 0x00401000u, 0x000A8000) < 0) return -2;   /* .text  VA 0x401000 raw 0xa8000 */
    snprintf(p, sizeof p, "%s/rdata.bin", dataDir);
    if (load_at(p, 0x004A9000u, 0x00008000) < 0) return -3;   /* .rdata VA 0x4a9000 raw 0x8000 */
    snprintf(p, sizeof p, "%s/data.bin", dataDir);
    if (load_at(p, 0x004B1000u, 0x00012000) < 0) return -4;   /* .data  VA 0x4b1000 raw 0x12000 (.bss stays 0) */

    g_pristine = (uint8_t *)malloc(G_IMAGE_END);
    if (g_pristine) memcpy(g_pristine, g_mem, G_IMAGE_END);

    memset(&C, 0, sizeof C);
    ESP = G_STACK_TOP;
    C.fptop = 8;   /* x87 stack empty (top wraps; pushes pre-decrement) */
    return 0;
}

/* restore guest memory to the exact post-init state (image bytes + everything
 * else zero). Used by the batch oracle between functions. */
void x86_mem_reset(void) {
    memset(g_mem, 0, G_MEM_SIZE);
    if (g_pristine) memcpy(g_mem, g_pristine, G_IMAGE_END);
}

/* x86_unimpl — loud stop for any not-yet-translated mnemonic (never silent). */
void x86_unimpl(const char *what) {
    fprintf(stderr, "x86_unimpl: %s\n", what);
    abort();
}
