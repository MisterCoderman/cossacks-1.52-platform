#!/bin/bash
# Build the multi-DLL AI test: all 20 recompiled AI DLLs + global dispatch + harness.
. /c/cossacks_wasm/emenv.sh
X=/c/cossacks_wasm/x86
OBJ=/c/cossacks_wasm/build/x86obj
mkdir -p "$OBJ"
CF="-O1 -w -I$X"

echo "=== compiling recomp objects (per-DLL) ==="
n=0
for d in $X/dll/AI_*; do
  name=$(basename "$d")
  for c in "$d"/recomp_src/recomp_*.c; do
    [ -f "$c" ] || continue
    b=$(basename "$c" .c)
    o="$OBJ/${name}_${b}.o"
    if [ ! -f "$o" ] || [ "$c" -nt "$o" ]; then
      emcc $CF -I"$d/recomp_src" -c "$c" -o "$o" 2>>"$X/lists/multitest_cc.log" || { echo "CC FAIL $name/$b"; }
    fi
    n=$((n+1))
  done
done
echo "compiled $n recomp TUs"

echo "=== compiling harness + dispatch + test ==="
for c in cos_cpu cos_load cos_shims cos_bridge cos_dispatch cos_multitest; do
  emcc $CF -c "$X/$c.c" -o "$OBJ/$c.o" 2>>"$X/lists/multitest_cc.log" || echo "CC FAIL $c"
done

echo "=== linking ==="
emcc -sNODERAWFS=1 -sALLOW_MEMORY_GROWTH=1 -sINITIAL_MEMORY=805306368 -sSTACK_SIZE=8388608 \
  "$OBJ"/*.o -o /c/cossacks_wasm/build/x86test/cos_multitest.js 2>>"$X/lists/multitest_cc.log"
echo "link exit: $?  -> $(ls -la /c/cossacks_wasm/build/x86test/cos_multitest.wasm 2>/dev/null | awk '{print $5}') bytes"
