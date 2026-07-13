#!/usr/bin/env python3
# Ship the 220 recompiled-but-INTERPRETED mission DLLs into the lazy-fetch data tree so
# cos_LoadLibraryA can pull each mission's PE on demand (cos_engine.cpp module_canon() strips to the
# game data dir). Canonical path = game-relative path from /MISSIONS//HISTORY_BATTL//USERMISSIONS/,
# UPPER + forward-slash (matches the runtime request + the .m3d maps). Then regenerate both manifests
# from disk (clean, no append-glue). Mission PEs total ~35 MB; stored only under en (RU falls back).
import json, os, shutil

MAN  = r"C:\cossacks_wasm\x86\dll\manifest.json"
WEB  = r"C:\cossacks_wasm\web\data"
EN   = os.path.join(WEB, "en")
KEYS = ["/missions/", "/history_battl/", "/horizon/", "/usermissions/"]

def canon_of(dll):
    p = dll.replace("\\", "/"); low = p.lower()
    for k in KEYS:
        i = low.find(k)
        if i >= 0:
            return p[i+1:].upper()
    return os.path.basename(p).upper()

def main():
    man = json.load(open(MAN))
    ms = [m for m in man if m["name"].startswith("M_")]
    n = 0; bytes_ = 0; canons = set()
    for m in ms:
        if not os.path.exists(m["dll"]): print("  MISSING:", m["dll"]); continue
        c = canon_of(m["dll"])
        dst = os.path.join(EN, *c.split("/"))
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        data = open(m["dll"], "rb").read()
        with open(dst, "wb") as f: f.write(data)
        bytes_ += len(data); canons.add(c); n += 1
    print("shipped %d mission DLLs, %.1f MB -> data/en" % (n, bytes_/1e6))
    # sanity: unique canonical paths (no two missions collide)
    print("unique canonical DLL paths:", len(canons), "(should equal shipped count)")

    # regenerate both manifests from disk (avoids the append-newline glue bug)
    def walk(d):
        out = []
        for root, _, files in os.walk(d):
            for fn in files:
                if fn.lower() == "manifest.txt": continue
                out.append(os.path.relpath(os.path.join(root, fn), d).replace("\\", "/").upper())
        return out
    en = sorted(set(walk(EN)))
    ru_disk = set(walk(os.path.join(WEB, "ru")))
    shared = [p for p in en if p.endswith(".M3D") or p.startswith("TRACKS/") or p.endswith(".DLL")]
    ru = sorted(ru_disk | set(shared))
    with open(os.path.join(EN, "manifest.txt"), "w", newline="\n") as f: f.write("\n".join(en) + "\n")
    with open(os.path.join(WEB, "ru", "manifest.txt"), "w", newline="\n") as f: f.write("\n".join(ru) + "\n")
    print("manifests regenerated  en:%d  ru:%d  (shared en-only incl. DLLs: %d)" % (len(en), len(ru), len(shared)))

if __name__ == "__main__":
    main()
