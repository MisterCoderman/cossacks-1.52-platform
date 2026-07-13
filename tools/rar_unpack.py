#!/usr/bin/env python3
# Unpack every per-mission .rar in the Cossacks game tree into the loose-file data tree.
#
# WHY: each mission/history-battle .rar contains that mission's map (<Name>.m3d). At runtime
# the engine's ExtractArchive() does LoadLibrary("unrar.dll") which is NULL under WASM, so the
# .m3d is never produced -> the map load fails -> starting any mission = instant defeat.
# We pre-extract all of them (like gsc_unpack did for all.gsc) so RResetEx finds the .m3d
# directly via lazy-fetch. Canonical path = UPPER + '/' , matching the runtime lookup and the
# existing manifest (see gsc_unpack.py). Maps are language-neutral -> written to BOTH en and ru.
import os, subprocess, sys, tempfile, shutil

GAME = r"C:\123\Cossacks\Cossacks Back to War v1.52 Classic Edition"
UNRAR = r"C:\Program Files\WinRAR\UnRAR.exe"
WEB = r"C:\cossacks_wasm\web\data"
LANGS = ["en", "ru"]

def find_rars():
    out = []
    for root, _, files in os.walk(GAME):
        for fn in files:
            if fn.lower().endswith(".rar"):
                out.append(os.path.join(root, fn))
    return out

def canon(gamerel):
    return gamerel.replace("\\", "/").replace("/./", "/").upper().lstrip("/")

def main():
    rars = find_rars()
    print("found %d .rar archives" % len(rars))
    new_paths = set()
    total_bytes = 0
    failed = []
    tmp = tempfile.mkdtemp(prefix="cosrar_")
    try:
        for i, rar in enumerate(rars):
            rdir = os.path.dirname(rar)                     # abs dir containing the rar
            gamerel_dir = os.path.relpath(rdir, GAME)       # e.g. missions\Algeria\Missal01
            ex = os.path.join(tmp, "x")
            shutil.rmtree(ex, ignore_errors=True); os.makedirs(ex, exist_ok=True)
            # e = extract flat (ignore internal paths); -y assume yes; -o+ overwrite
            r = subprocess.run([UNRAR, "e", "-y", "-o+", rar, ex + os.sep],
                               capture_output=True, text=True)
            got = os.listdir(ex)
            if r.returncode != 0 or not got:
                failed.append((rar, r.returncode, r.stdout[-200:] + r.stderr[-200:]))
                continue
            for fn in got:
                src = os.path.join(ex, fn)
                if not os.path.isfile(src):
                    continue
                rel = os.path.join(gamerel_dir, fn) if gamerel_dir != "." else fn
                cp = canon(rel)                             # canonical manifest path
                data = open(src, "rb").read()
                total_bytes += len(data)
                for lang in LANGS:
                    dst = os.path.join(WEB, lang, *cp.split("/"))
                    os.makedirs(os.path.dirname(dst), exist_ok=True)
                    with open(dst, "wb") as f:
                        f.write(data)
                new_paths.add(cp)
            if (i + 1) % 40 == 0:
                print("  ...%d/%d done" % (i + 1, len(rars)))
    finally:
        shutil.rmtree(tmp, ignore_errors=True)

    print("extracted %d unique files, %.1f MB (per language)" % (len(new_paths), total_bytes / 1e6))
    if failed:
        print("!! %d rars FAILED:" % len(failed))
        for rar, rc, msg in failed[:20]:
            print("   ", os.path.relpath(rar, GAME), "rc=%d" % rc, msg.replace("\n", " ")[:120])

    # append new canonical paths to each language manifest (dedup, keep existing)
    for lang in LANGS:
        mpath = os.path.join(WEB, lang, "manifest.txt")
        existing = set()
        if os.path.exists(mpath):
            existing = set(l.strip() for l in open(mpath, encoding="latin-1") if l.strip())
        added = sorted(p for p in new_paths if p not in existing)
        with open(mpath, "a", encoding="latin-1", newline="\n") as f:
            for p in added:
                f.write(p + "\n")
        print("manifest %s: +%d paths (was %d, now %d)" % (lang, len(added), len(existing), len(existing) + len(added)))

if __name__ == "__main__":
    main()
