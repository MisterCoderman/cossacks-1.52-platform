#!/usr/bin/env python3
# Unpack a Cossacks "GSCfmt" archive (all.gsc / all_ru.gsc) into a loose-file tree.
# Format (from Arc/GSCarch.cpp + GSCtypes.h + isiMasks.cpp):
#   Header  (14 B): "GSCfmt"(6) + version:u16 + key:u16 + entries:u32
#   FAT     (entries * 81 B): hash:u32 + name[64] + offset:u32 + size:u32 + reserved:u32 + flags:u8
#   Data    starts at 14 + entries*81 ; a file lives at data_start + (~offset & 0xFFFFFFFF)
#   Decrypt (only if flags != 0):  dec = (~b) ^ keybyte ,  keybyte = ~HIBYTE(header.key) & 0xFF
# Names are stored UPPERCASE with '\' separators; we emit UPPER + '/' so runtime lookups
# (which upper-case + normalise the request) match exactly (MEMFS is case-sensitive).
import struct, os, sys

def u16(b, o): return struct.unpack_from('<H', b, o)[0]
def u32(b, o): return struct.unpack_from('<I', b, o)[0]

def unpack(src, outdir, preview_only=False):
    d = open(src, 'rb').read()
    if d[0:6] != b'GSCfmt':
        raise SystemExit("not a GSCfmt archive: %s (%r)" % (src, d[0:6]))
    ver, key, entries = u16(d, 6), u16(d, 8), u32(d, 10)
    FATOFF, FE = 14, 81
    data_start = FATOFF + entries * FE
    keybyte = (~((key >> 8) & 0xFF)) & 0xFF
    print("%s: version=%#x key=%#x entries=%d keybyte=%#x data_start=%#x size=%d"
          % (os.path.basename(src), ver, key, entries, keybyte, data_start, len(d)))
    enc = 0; written = 0; total_bytes = 0; previews = 0
    for i in range(entries):
        o = FATOFF + i * FE
        name = d[o+4:o+4+64].split(b'\x00')[0].decode('latin-1').strip()
        if not name:
            continue
        off = u32(d, o+68); size = u32(d, o+72); flags = d[o+80]
        real = (~off) & 0xFFFFFFFF
        if data_start + real + size > len(d):
            print("  WARN entry %d %r out of range (real=%#x size=%d) - skip" % (i, name, real, size))
            continue
        raw = bytearray(d[data_start+real: data_start+real+size])
        if flags:
            enc += 1
            for j in range(len(raw)):
                raw[j] = ((~raw[j]) ^ keybyte) & 0xFF
        if preview_only:
            if flags and name.lower().endswith(('.lst', '.txt', '.dat')) and 0 < size < 3000 and previews < 2:
                print("  [ENC preview] %s (size=%d): %r" % (name, size, bytes(raw[:120])))
                previews += 1
            continue
        rel = name.replace('\\', '/').upper()
        outpath = os.path.join(outdir, rel)
        pd = os.path.dirname(outpath)
        if pd:
            os.makedirs(pd, exist_ok=True)
        with open(outpath, 'wb') as f:
            f.write(raw)
        written += 1; total_bytes += size
    print("  encrypted files: %d / %d" % (enc, entries))
    if not preview_only:
        print("  WROTE %d files, %.1f MB -> %s" % (written, total_bytes/1048576, outdir))

if __name__ == '__main__':
    mode = sys.argv[1] if len(sys.argv) > 1 else 'all'
    GAME = r"C:\123\Cossacks\Cossacks Back to War v1.52 Classic Edition"
    OUT = r"C:\cossacks_wasm\web\data"
    jobs = [(os.path.join(GAME, "all.gsc"),    os.path.join(OUT, "en")),
            (os.path.join(GAME, "all_ru.gsc"), os.path.join(OUT, "ru"))]
    for src, out in jobs:
        unpack(src, out, preview_only=(mode == 'probe'))
