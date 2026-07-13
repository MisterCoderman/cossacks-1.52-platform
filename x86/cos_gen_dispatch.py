#!/usr/bin/env python3
# cos_gen_dispatch.py — combine all recompiled DLLs into ONE global dispatch.
# Reads dll/manifest.json + each module's functions.csv, emits:
#   cos_dispatch.c : global x86_resolve (VA -> f_<va> across ALL modules) + fallback
#   cos_modules.h  : the module table (name, base, entry, dllmain_va)
# DllMain of each DLL is detected as the function with the most game_api slot
# writes ( w32((uint32_t)(0x1xxxxxxx), (EAX)) ) — the GetProcAddress resolve loop.
import json, csv, os, re, glob

ROOT = r"C:\cossacks_wasm\x86\dll"
man = json.load(open(os.path.join(ROOT, "manifest.json")))

all_funcs = []          # (va) across all modules
mods = []
for m in man:
    d = os.path.join(ROOT, m["name"])
    fcsv = os.path.join(d, "functions.csv")
    if not os.path.exists(fcsv): print("skip (no funcs):", m["name"]); continue
    is_ai = m["name"].startswith("AI_")   # ONLY baked AI functions enter the dispatch G[] (they are
                                          # linked natively); the 220 mission DLLs are interpreted
                                          # decode-on-demand, so x86_compiled() must return 0 for them.
    vas = []
    for row in csv.DictReader(open(fcsv)):
        try: va = int(row["address"], 16)
        except: continue
        vas.append(va)
        if is_ai: all_funcs.append(va)
    # detect DllMain: recomp function with the most EAX-slot writes
    best_va, best_n = 0, -1
    for cf in glob.glob(os.path.join(d, "recomp_src", "recomp_*.c")):
        s = open(cf, encoding="latin-1").read()
        for fm in re.finditer(r'void (f_[0-9a-f]{8})\(void\) \{(.*?)\n\}', s, re.S):
            n = len(re.findall(r'w32\(\(uint32_t\)\(0x1[0-9a-f]{6,7}\), \(EAX\)\)', fm.group(2)))
            if n > best_n: best_n = n; best_va = int(fm.group(1)[2:], 16)
    mods.append({**m, "dllmain": best_va, "nfuncs": len(vas)})
    print("%-16s base=%#010x entry=%#x dllmain=f_%08x (%d slot-writes) funcs=%d"
          % (m["name"], m["base"], m["entry"], best_va, best_n, len(vas)))

# cos_dispatch.c  (G[] MUST be sorted by va for binary search)
all_sorted = sorted(set(all_funcs))
lines = ['#include "cpu.h"', '']
for va in all_sorted: lines.append("void f_%08x(void);" % va)
lines.append("")
lines.append("static const struct { uint32_t va; x86fn fn; } G[] = {")
for va in all_sorted: lines.append("  {0x%08xu, f_%08x}," % (va, va))
lines.append("};")
lines.append("#define NG ((int)(sizeof G/sizeof G[0]))")
lines.append("extern x86fn x86_resolve_fallback(uint32_t);")
lines.append("x86fn x86_resolve(uint32_t addr){")
lines.append("  int lo=0,hi=NG-1; while(lo<=hi){int mid=(lo+hi)/2; uint32_t v=G[mid].va; if(v==addr)return G[mid].fn; if(v<addr)lo=mid+1; else hi=mid-1;}")
lines.append("  return x86_resolve_fallback(addr); }")
lines.append("x86fn x86_compiled(uint32_t addr){")
lines.append("  int lo=0,hi=NG-1; while(lo<=hi){int mid=(lo+hi)/2; uint32_t v=G[mid].va; if(v==addr)return G[mid].fn; if(v<addr)lo=mid+1; else hi=mid-1;} return 0; }")
open(os.path.join(r"C:\cossacks_wasm\x86", "cos_dispatch.c"), "w").write("\n".join(lines) + "\n")

# cos_modules.h  (module registry)
h = ['#ifndef COS_MODULES_H', '#define COS_MODULES_H', '#include <stdint.h>',
     'typedef struct { const char *name; const char *dll; uint32_t base, entry, dllmain; } CosModDef;',
     'static const CosModDef COS_MODULES[] = {']
for m in mods:
    h.append('  {"%s", "%s", 0x%08xu, 0x%08xu, 0x%08xu},'
             % (m["name"], m["dll"].replace("\\","/"), m["base"], m["entry"], m["dllmain"]))
h.append('};')
h.append('#define COS_NMODULES ((int)(sizeof COS_MODULES/sizeof COS_MODULES[0]))')
h.append('#endif')
open(os.path.join(r"C:\cossacks_wasm\x86", "cos_modules.h"), "w").write("\n".join(h) + "\n")

# note: G[] must be sorted for binary search — sort here
all_sorted = sorted(set(all_funcs))
print("TOTAL functions across %d modules: %d (unique %d)" % (len(mods), len(all_funcs), len(all_sorted)))
