#!/usr/bin/env python3
# translate_all.py - AUTOMATIC static recompiler driver: translate EVERY guest
# x86 function of Woody.exe -> C (flat-memory model, native compilation, NO manual
# reverse). Reuses transpile.py's faithful per-instruction emitter. Splits the
# output into many small TUs (a single giant TU OOMs the compiler) + emits the
# O(1) x86_resolve table (guest VA -> f_<va>) for indirect calls/jumps/vtables.
import os, sys, traceback
import transpile as T

OUTDIR   = r"C:\CODE\woody_wasm\x86\recomp_src"
PER_FILE = 120                     # functions per .c (keeps each TU small)
FBASE    = T.TEXT_VA
FSIZE     = (T.TEXT_END - T.TEXT_VA) + 16

# HYBRID: functions whose STATIC translation diverges from the oracle are emitted
# as a thin trampoline into the known-good interpreter (interp.c x86_trampoline),
# which runs that function + its whole subtree correctly. Everything else compiles
# to native C.
#
# The statically-linked MSVC CRT (heap init, _ioinit/stdio, _cinit global ctors,
# locale, setjmp/SEH, printf family) is large, intricate, and the first thing that
# runs; a single mistranslation there corrupts global state for EVERYTHING after.
# So we interpret the WHOLE CRT VA window [CRT_LO, TEXT_END) — correctness first.
# The ONE exception is the CRT entry f_00499d02 itself: it must stay compiled so it
# tail-calls the native WinMain (f_00405d40) and the game runs at native speed.
# (Game/engine code lives below CRT_LO and is unaffected.) Hot CRT leaves can later
# be moved back to native once individually validated against the oracle.
CRT_LO    = 0x00499000
CRT_ENTRY = 0x00499d02
# NOTE: trampolining the per-frame tick 0x00401590 made it WORSE (interpreted tick
# returned 1=quit on frame 1) -> the divergence is UPSTREAM in the compiled INIT
# (it corrupts engine state that both the compiled AND interpreted tick then
# misread). So the fix is a real transpile.py codegen correctness pass on the init
# path, not a tick trampoline. Keep INTERP_SET = CRT-only (best demonstrable build:
# reaches the WinMain main loop + intro at native speed).
INTERP_SET = set()                 # explicit extras outside the CRT window
def want_interp(va):
    if va == CRT_ENTRY:            return False
    if CRT_LO <= va < T.TEXT_END:  return True
    return va in INTERP_SET

os.makedirs(OUTDIR, exist_ok=True)
FUNCS = sorted(T.FUNCS, key=lambda f: f[0])    # (va, size, name)
print("translating", len(FUNCS), "functions ...")

# ---- recomp.h: forward declarations -------------------------------------------
h = ['#ifndef RECOMP_H', '#define RECOMP_H', '#include "cpu.h"', '#include <stdio.h>', '',
     'void x86_trampoline(uint32_t va);   /* interp.c: hybrid bridge for divergent fns */',
     '#ifdef FTRACE_ON',
     'void ftrace_rec(uint32_t va);       /* shims.c: per-function entry ring (diag) */',
     '#define FTRACE(v) ftrace_rec(v)',
     '#else',
     '#define FTRACE(v) ((void)0)',
     '#endif',
     '#ifdef ESPCHK_ON',
     '/* stack-balance assert: at a function ret, ESP must equal its entry ESP (all',
     ' * internal pushes popped). A mismatch pinpoints a function that corrupts the',
     ' * stack (dropped pop, wrong ret N in a callee, mistranslated SEH/string op). */',
     '#define ESPCHK(va, e0) do{ if(ESP!=(e0)){ static int _n=0; if(_n++<40) '
       'fprintf(stderr,"[espimbal] f_%08x ret ESP=%08x entry=%08x (d=%d)\\n",(va),ESP,(e0),(int)((e0)-ESP)); } }while(0)',
     '#else',
     '#define ESPCHK(va, e0) ((void)0)',
     '#endif', '']
for va, size, name in FUNCS:
    h.append("void f_%08x(void);" % va)
h += ['', '#endif']
open(os.path.join(OUTDIR, "recomp.h"), "w").write("\n".join(h) + "\n")

# ---- recomp_NNN.c: the translated function bodies -----------------------------
nfile = 0; ok = 0; fail = 0; failed = []
for i in range(0, len(FUNCS), PER_FILE):
    chunk = FUNCS[i:i+PER_FILE]
    c = ['#include "recomp.h"', '']
    for va, size, name in chunk:
        if want_interp(va):
            c.append('/* HYBRID: interpret %s @ 0x%08x (CRT/divergent) */' % (name, va))
            c.append('void f_%08x(void){ x86_trampoline(0x%08xu); }' % (va, va))
            ok += 1
            c.append("")
            continue
        try:
            c.append(T.transpile_func(va, size, name))
            ok += 1
        except Exception as e:
            # untranslatable function -> a loud stub (faithful: abort if reached,
            # never silently mistranslate). Most are tiny/edge cases.
            msg = (str(e) or type(e).__name__).replace('"', "'").replace("\n", " ")[:60]
            c.append('/* UNTRANSLATED %s @ 0x%08x: %s */' % (name, va, msg))
            c.append('void f_%08x(void){ x86_unimpl("untranslated f_%08x"); }' % (va, va))
            fail += 1; failed.append((va, msg))
        c.append("")
    open(os.path.join(OUTDIR, "recomp_%03d.c" % nfile), "w").write("\n".join(c) + "\n")
    nfile += 1

# ---- resolve.c: O(1) guest-VA -> compiled-function dispatch --------------------
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
r.append("  g_ftab_built=1;")
r.append("}")
r.append("extern x86fn x86_resolve_fallback(uint32_t addr);   /* shims / unknown (cpu.c) */")
r.append("x86fn x86_resolve(uint32_t addr){")
r.append("  if(!g_ftab_built) ftab_build();")
r.append("  if(addr>=FBASE && addr<FBASE+FSIZE){ x86fn f=g_ftab[addr-FBASE]; if(f) return f; }")
r.append("  return x86_resolve_fallback(addr);")
r.append("}")
r.append("/* Compiled-only lookup: returns the native f_<va> if `addr` has one, else 0.")
r.append(" * Lets the interpreter (inside an interp-fallback trampoline) CALL a compiled")
r.append(" * function natively instead of interpreting its whole subtree -> the fallback")
r.append(" * then only interprets the missing function's own instructions. */")
r.append("x86fn x86_compiled(uint32_t addr){")
r.append("  if(!g_ftab_built) ftab_build();")
r.append("  if(addr>=FBASE && addr<FBASE+FSIZE) return g_ftab[addr-FBASE];")
r.append("  return 0;")
r.append("}")
open(os.path.join(OUTDIR, "resolve.c"), "w").write("\n".join(r) + "\n")

print("DONE: %d files, %d ok, %d untranslated" % (nfile, ok, fail))
if failed:
    from collections import Counter
    print("  first untranslated:", [hex(v) for v, _ in failed[:10]])
