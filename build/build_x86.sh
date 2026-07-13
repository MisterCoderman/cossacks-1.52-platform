#!/bin/bash
# Build the x86 plugin-DLL subsystem objects into build/x86obj (linked by build_dmcr.sh):
#   C harness  : cos_cpu/load/shims/bridge/dispatch + the decode-on-demand interpreter
#                (interp + decode_x86 + ops_cache) used to run the NON-baked mission DLLs.
#   C++ glue   : cos_engine (LoadLibrary/GetProcAddress + trampolines) + cos_gameapi_gen (marshalers).
. "$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)/emenv.sh"
X=$COS_ROOT/x86
OBJ=$COS_ROOT/build/x86obj
mkdir -p "$OBJ"
CF="-O1 -w -I$X"
fail=0
for c in cos_cpu cos_load cos_shims cos_bridge cos_dispatch interp decode_x86 ops_cache cos_interp_compat; do
  emcc $CF -c "$X/$c.c" -o "$OBJ/$c.o" || { echo "CC FAIL $c"; fail=1; }
done
for c in cos_engine cos_gameapi_gen; do
  em++ $CF -c "$X/$c.cpp" -o "$OBJ/$c.o" || { echo "CXX FAIL $c"; fail=1; }
done
echo "x86 subsystem build $([ $fail = 0 ] && echo OK || echo HAD-FAILURES)"
