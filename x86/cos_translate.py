#!/usr/bin/env python3
# cos_translate.py - static recompiler driver for a Cossacks plugin DLL.
# Reuses transpile.py's faithful per-instruction emitter (already parameterized
# for the DLL via env in transpile.py). Emits recomp_NNN.c (native f_<va>) +
# resolve.c (O(1) guest-VA -> f_<va> dispatch, fallback -> shims). No interp
# window here: unimplemented/untranslatable funcs become LOUD x86_unimpl stubs
# (fixed by adding mnemonics to transpile.py, never silently wrong).
import os, sys
import transpile as T

DLLDIR   = os.environ.get("COS_DLLDIR", r"C:\cossacks_wasm\x86\dll\England")
OUTDIR   = os.path.join(DLLDIR, "recomp_src")
PER_FILE = 120
FBASE    = T.TEXT_VA
FSIZE    = (T.TEXT_END - T.TEXT_VA) + 16

os.makedirs(OUTDIR, exist_ok=True)
FUNCS = sorted(T.FUNCS, key=lambda f: f[0])
print("translating", len(FUNCS), "functions from", DLLDIR)

ok = fail = nfile = 0
failed = []
for i in range(0, len(FUNCS), PER_FILE):
    chunk = FUNCS[i:i+PER_FILE]
    c = ['#include "recomp.h"', '']
    for va, size, name in chunk:
        try:
            c.append(T.transpile_func(va, size, name)); ok += 1
        except Exception as e:
            msg = (str(e) or type(e).__name__).replace('"', "'").replace("\n", " ")[:60]
            c.append('/* UNTRANSLATED %s @ 0x%08x: %s */' % (name, va, msg))
            c.append('void f_%08x(void){ x86_unimpl("untranslated f_%08x"); }' % (va, va))
            fail += 1; failed.append((va, msg))
        c.append("")
    open(os.path.join(OUTDIR, "recomp_%03d.c" % nfile), "w").write("\n".join(c) + "\n")
    nfile += 1

# resolve.c: O(1) guest-VA -> compiled f_<va>
r = ['#include "recomp.h"', '']
r.append("static const struct { uint32_t va; x86fn fn; } g_funcs[] = {")
for va, size, name in FUNCS:
    r.append("  { 0x%08xu, f_%08x }," % (va, va))
r.append("};")
r.append("#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))")
r.append("#define FBASE 0x%08xu" % FBASE)
r.append("#define FSIZE 0x%08xu" % FSIZE)
r.append("static x86fn g_ftab[FSIZE];")
r.append("static int g_ftab_built = 0;")
r.append("static void ftab_build(void){")
r.append("  for(int i=0;i<NFUNCS;i++){ uint32_t v=g_funcs[i].va;")
r.append("    if(v>=FBASE && v<FBASE+FSIZE) g_ftab[v-FBASE]=g_funcs[i].fn; }")
r.append("  g_ftab_built=1; }")
r.append("extern x86fn x86_resolve_fallback(uint32_t addr);")
r.append("x86fn x86_resolve(uint32_t addr){")
r.append("  if(!g_ftab_built) ftab_build();")
r.append("  if(addr>=FBASE && addr<FBASE+FSIZE){ x86fn f=g_ftab[addr-FBASE]; if(f) return f; }")
r.append("  return x86_resolve_fallback(addr); }")
r.append("x86fn x86_compiled(uint32_t addr){")
r.append("  if(!g_ftab_built) ftab_build();")
r.append("  if(addr>=FBASE && addr<FBASE+FSIZE) return g_ftab[addr-FBASE];")
r.append("  return 0; }")
open(os.path.join(OUTDIR, "resolve.c"), "w").write("\n".join(r) + "\n")

print("DONE: %d files, %d ok, %d untranslated" % (nfile, ok, fail))
if failed:
    print("  untranslated:", [hex(v) for v, _ in failed[:15]])
