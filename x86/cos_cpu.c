/* cos_cpu.c — CPU/memory substrate for the Cossacks x86 plugin-DLL guest world.
 * The native engine is the host; AI/mission DLLs are recompiled x86 running over
 * this flat guest memory (cpu.h model). */
#include "cpu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

uint8_t *g_mem = 0;
Cpu C;

/* write-watchpoint hooks (g_watchw_active/lo/hi + lk2_watch_hit) are now defined by interp.c,
 * which is linked in for the mission interpreter; cpu.h declares them extern. */

/* loud stop for a not-yet-translated mnemonic (never silent).
 * Logs to BOTH stdout (browser console) and stderr (dmcr_stderr.log). */
void x86_unimpl(const char *what) {
    printf("[cos x86_unimpl] %s\n", what); fflush(stdout);
    fprintf(stderr, "[cos x86_unimpl] %s\n", what);
    abort();
}

void cos_mem_init(void) {
    if (g_mem) return;
    g_mem = (uint8_t *)calloc(1, G_MEM_SIZE + 16);   /* zero => .bss + unused */
    if (!g_mem) { fprintf(stderr, "[cos] g_mem calloc(%u) failed\n", (unsigned)G_MEM_SIZE); abort(); }
    memset(&C, 0, sizeof C);
    ESP = G_STACK_TOP;
    C.fptop = 8;   /* x87 stack empty */
}
