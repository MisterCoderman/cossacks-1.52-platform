/* cos_bridge.c — native <-> x86 bridge: call a recompiled guest function from
 * native C with cdecl args, get EAX back. */
#include "cos_x86.h"
#include "cpu.h"
#include <stdio.h>

#define COS_SENTINEL   0xC0DE0000u
#define INTERP_SENTINEL 0xDEADBEEFu       /* == interp.c SENTINEL: x86_run halts when the guest
                                           * ret pops this into EIP */

extern x86fn x86_compiled(uint32_t addr); /* cos_dispatch.c: statically-recompiled body, or 0 */
extern void  x86_run(void);               /* interp.c: decode-on-demand interpreter (runs at EIP) */

/* Call a guest function from native C (cdecl args) and return EAX. HYBRID: statically
 * recompiled functions (the baked AI DLLs) run as native C; everything else (mission DLLs,
 * which are NOT baked — 367 MB of C won't fit the wasm) is INTERPRETED decode-on-demand from
 * its image bytes in g_mem. Both conventions place a sentinel return address on the stack that
 * the guest's own `ret` pops to hand control back here. */
uint32_t cos_call(uint32_t va, int argc, const uint32_t *argv) {
    uint32_t saved_esp = ESP;
    for (int i = argc - 1; i >= 0; i--) push32(argv[i]);
    x86fn fn = x86_compiled(va);
    if (fn) {
        push32(COS_SENTINEL);              /* native: placeholder return (guest ret pops it) */
        fn();                              /* recomp: C returns when the top-level ret executes */
    } else {
        push32(INTERP_SENTINEL);           /* interpret: x86_run stops when guest ret pops this */
        EIP = va;
        x86_run();
    }
    uint32_t ret = EAX;
    ESP = saved_esp;                       /* cdecl caller cleanup */
    return ret;
}

/* ---- standalone England.dll bridge test (native build) ------------------ */
#ifdef COS_TEST
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv) {
    const char *path = argc > 1 ? argv[1]
        : "C:/123/Cossacks/Cossacks Back to War v1.52 Classic Edition/ai/England.dll";
    FILE *f = fopen(path, "rb");
    if (!f) { fprintf(stderr, "cannot open %s\n", path); return 1; }
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *d = (uint8_t *)malloc(sz); fread(d, 1, sz, f); fclose(f);

    cos_mem_init();
    CosModule mod; strncpy(mod.path, "England.dll", sizeof mod.path - 1);
    if (cos_pe_load(d, sz, 0x10000000u, &mod)) { fprintf(stderr, "load failed\n"); return 1; }
    for (int i = 0; i < mod.nexports; i++)
        fprintf(stderr, "  export %-20s @ 0x%08x\n", mod.exports[i].name, mod.exports[i].va);

    /* 1) DllMain(hinst, DLL_PROCESS_ATTACH=1, 0) resolves game_api -> slots */
    uint32_t dllmain = 0x100027f0u;   /* verified: 118 game_api slot writes */
    uint32_t a[3] = { 0x00400000u, 1u, 0u };
    fprintf(stderr, "== calling DllMain(reason=1) to resolve game_api ==\n");
    cos_call(dllmain, 3, a);

    /* 2) InitAI() — registers units/upgrades via resolved game_api pointers */
    uint32_t initai = cos_export_va(&mod, "InitAI");
    fprintf(stderr, "== calling InitAI() @ 0x%08x ==\n", initai);
    cos_call(initai, 0, NULL);

    /* 3) ProcessAI() — one per-tick AI pass (reads state via game_api stubs) */
    uint32_t proc = cos_export_va(&mod, "ProcessAI");
    fprintf(stderr, "== calling ProcessAI() @ 0x%08x ==\n", proc);
    cos_call(proc, 0, NULL);

    fprintf(stderr, "== England.dll bridge test DONE (InitAI + ProcessAI) ==\n");
    return 0;
}
#endif
