/* cos_interp_compat.c — definitions for the few SM2-only symbols the ported interp.c references.
 * interp.c came from the Spider-Man 2 (UE2) port; a handful of its diagnostic / UE2-object-hash
 * helpers reference SM2-specific symbols. Those code paths are NEVER entered in Cossacks (they are
 * armed only at SM2-specific guest EIPs), but the linker still needs the definitions. */
#include "cpu.h"
#include <stdint.h>
#include <string.h>

/* interp.c reads this on the hot loop to bail out cleanly after an unimplemented-op fault. */
int g_halt = 0;

/* Diagnostic label ("engine.dll+0x..") in SM2; Cossacks has no such table -> plain marker. */
const char *sm2_modname(uint32_t va){ (void)va; return "?"; }

/* Referenced ONLY by interp.c's SM2 UE2 FName-hash helpers (sm2_finda/sm2_findw), which are never
 * reached in Cossacks. Self-contained bump allocator in an unused high slice of g_mem (above the
 * DLL image region ~0x12e.., below G_MEM_SIZE 0x20000000) so the reference resolves safely. */
uint32_t sm2_gheap_alloc(uint32_t n, int zero){
    static uint32_t hp = 0x1F000000u;
    uint32_t p = hp; hp = (hp + n + 15u) & ~15u;
    if (zero && g_mem) memset(g_mem + (p & GMASK), 0, n);
    return p;
}
