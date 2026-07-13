/* cos_multitest.c — load ALL recompiled AI DLLs at their packed bases, run each
 * DllMain (resolve game_api) + InitAI. Validates relocation + coexistence. */
#include "cos_x86.h"
#include "cos_modules.h"
#include "cpu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    cos_mem_init();
    int ok = 0;
    for (int i = 0; i < COS_NMODULES; i++) {
        const CosModDef *m = &COS_MODULES[i];
        FILE *f = fopen(m->dll, "rb");
        if (!f) { fprintf(stderr, "[FAIL] open %s\n", m->dll); continue; }
        fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
        uint8_t *d = (uint8_t *)malloc(sz); fread(d, 1, sz, f); fclose(f);
        CosModule mod; strncpy(mod.path, m->name, sizeof mod.path - 1);
        if (cos_pe_load(d, sz, m->base, &mod)) { fprintf(stderr, "[FAIL] load %s\n", m->name); free(d); continue; }
        uint32_t a[3] = { m->base, 1u, 0u };
        cos_call(m->dllmain, 3, a);                 /* DllMain: resolve game_api */
        uint32_t initai = cos_export_va(&mod, "InitAI");
        if (!initai) { fprintf(stderr, "[FAIL] %s no InitAI\n", m->name); free(d); continue; }
        cos_call(initai, 0, NULL);                  /* register units/upgrades */
        fprintf(stderr, "[OK] %-14s (base %#010x) DllMain+InitAI ran\n", m->name, m->base);
        ok++;
        free(d);
    }
    fprintf(stderr, "\n==== %d / %d AI modules ran InitAI cleanly ====\n", ok, COS_NMODULES);
    return ok == COS_NMODULES ? 0 : 1;
}
