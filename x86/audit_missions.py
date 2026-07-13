#!/usr/bin/env python3
# Definitive mission-recompile audit: reconcile the game's mission DLLs, the manifest,
# and the recompiled recomp_src/ dirs. Report genuine gaps (a DLL with no recompiled C)
# vs. duplicate manifest entries (e.g. Mission.dll + Mission_ru.dll sharing one module dir).
import os, glob, json, hashlib

X = r"C:\cossacks_wasm\x86"
GAME = r"C:\123\Cossacks\Cossacks Back to War v1.52 Classic Edition"

man = json.load(open(os.path.join(X, 'dll', 'manifest.json')))
miss = [m for m in man if m['name'].startswith('M_')]
ai = [m for m in man if m['name'].startswith('AI_')]

def has_c(nm):
    return sorted(glob.glob(os.path.join(X, 'dll', nm, 'recomp_src', '*.c')))

# 1) every mission DLL that physically exists in the game tree
game_dlls = []
for root, _, files in os.walk(GAME):
    for fn in files:
        if fn.lower().startswith('mission') and fn.lower().endswith('.dll'):
            game_dlls.append(os.path.join(root, fn))
print("mission DLLs physically in game tree:", len(game_dlls))

# 2) manifest coverage
man_dlls = {os.path.normcase(m['dll'].replace('/', '\\')): m for m in miss}
print("manifest M_ entries:", len(miss))

# duplicate module names (same recomp dir used by >1 dll)
from collections import defaultdict
byname = defaultdict(list)
for m in miss:
    byname[m['name']].append(m['dll'])
dups = {k: v for k, v in byname.items() if len(v) > 1}
print("unique module names:", len(byname), " names with >1 dll (duplicates):", len(dups))

# 3) which game DLLs are NOT in the manifest at all
not_in_man = [d for d in game_dlls if os.path.normcase(d) not in man_dlls]
print("\n=== game mission DLLs NOT in manifest (%d) ===" % len(not_in_man))
for d in not_in_man:
    print("  MISSING FROM MANIFEST:", d)

# 4) manifest modules with NO recompiled C (genuine failures)
genuine_fail = [m for m in miss if not has_c(m['name'])]
print("\n=== manifest modules with NO recomp_src/*.c (%d) ===" % len(genuine_fail))
for m in genuine_fail:
    print("  NO RECOMP:", m['name'], "|", m['dll'])

# 5) duplicates: are the paired DLLs byte-identical (safe to share) or different (risk)?
def md5(p):
    try:
        return hashlib.md5(open(p, 'rb').read()).hexdigest()
    except Exception:
        return None
print("\n=== duplicate names — are the DLLs identical? (%d) ===" % len(dups))
diff_dups = []
for k, v in dups.items():
    hs = [(p, md5(p)) for p in v]
    uniq = set(h for _, h in hs if h)
    same = len(uniq) <= 1
    print("  %s: %d dlls, identical=%s" % (k, len(v), same))
    if not same:
        diff_dups.append((k, v))
        for p, h in hs:
            print("      %s  md5=%s" % (p, h))

print("\n=== SUMMARY ===")
print("AI recompiled:", sum(1 for m in ai if has_c(m['name'])), "/", len(ai))
print("mission modules recompiled:", sum(1 for m in miss if has_c(m['name'])), "/", len(miss))
print("game DLLs missing from manifest:", len(not_in_man))
print("genuine no-recomp modules:", len(genuine_fail))
print("duplicate names with DIFFERING dll bytes (need separate recomp):", len(diff_dups))

# write worklist of things to actually (re)compile
work = [m['dll'] for m in genuine_fail] + [p for _, v in diff_dups for p in v[1:]] + not_in_man
with open(os.path.join(X, 'lists', 'missions_todo.txt'), 'w', encoding='latin-1', newline='\n') as f:
    for p in work:
        f.write(p + "\n")
print("-> lists/missions_todo.txt:", len(work), "items to (re)compile for true 100%")
