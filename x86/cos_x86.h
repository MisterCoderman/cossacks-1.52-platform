/* cos_x86.h — Cossacks x86 plugin-DLL guest subsystem: public interface.
 * The native engine LoadLibrary's an AI/mission DLL -> we recompile+run it here;
 * the DLL calls game_api back into the native engine via marshaling shims. */
#ifndef COS_X86_H
#define COS_X86_H
#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void cos_mem_init(void);   /* cos_cpu.c: alloc g_mem, reset CPU */

/* ---- loaded guest module ------------------------------------------------ */
typedef struct { char name[64]; uint32_t va; } CosExport;
typedef struct {
    char     path[128];
    uint32_t base;        /* load base in guest memory */
    uint32_t entry;       /* AddressOfEntryPoint VA */
    uint32_t image_end;   /* base + SizeOfImage */
    int      nexports;
    CosExport exports[32];
} CosModule;

/* Load a PE (DLL) from file bytes into g_mem at load_base (relocating if != its
 * preferred ImageBase). Fills IAT slots with synthetic import addresses and
 * records exports. Returns 0 on success. */
int cos_pe_load(const uint8_t *data, size_t dsz, uint32_t load_base, CosModule *mod);
uint32_t cos_export_va(const CosModule *mod, const char *name);

/* ---- synthetic symbol registry (imports + game_api) --------------------- *
 * Every OS import and every GetProcAddress'd game_api name gets a unique
 * synthetic guest address (SYNTH_BASE + n). x86_resolve_fallback maps it to the
 * native shim. */
#define COS_SYNTH_BASE 0xE0000000u
uint32_t cos_sym(const char *name);        /* name -> synthetic addr (alloc if new) */
const char *cos_sym_name(uint32_t addr);   /* synthetic addr -> name (or NULL) */

/* ---- native <-> x86 bridge (cos_bridge.c) ------------------------------- */
/* Run guest function at `va` as `void fn(void)` cdecl with `argc` 32-bit args
 * (pushed right-to-left). Returns guest EAX. Caller-cleanup (cdecl). */
uint32_t cos_call(uint32_t va, int argc, const uint32_t *argv);

/* ---- game_api dispatch (cos_shims.c) ------------------------------------ */
/* Register the native engine's game_api function under `name` so a game_api
 * shim can marshal a cdecl call to it. `argc` = 32-bit arg words the DLL pushes.
 * `fn` receives the args array and returns the value to place in EAX. */
typedef uint32_t (*CosApiFn)(const uint32_t *args);
void cos_api_register(const char *name, int argc, CosApiFn fn);

#ifdef __cplusplus
}
#endif

#endif
