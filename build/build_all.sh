#!/bin/bash
# Compile all engine units (Ildar's non-MSVC path) to objects; report per-file results.
. "$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)/emenv.sh"
. $COS_ROOT/build/flags.sh

MAIN="$COS_SRC/MainExe"
CC="$COS_SRC/CommCore"
PL="$COS_SRC/platform"
OBJ=$COS_ROOT/build/obj
LOG=$COS_ROOT/build/logs
mkdir -p "$OBJ" "$LOG"

# MainExe sources from Ildar's CMakeLists MAIN_SOURCES + non-MSVC extras
MAIN_SRCS=$(sed -n '/set(MAIN_SOURCES/,/^)/p' "$MAIN/CMakeLists.txt" \
  | grep -E '\.cpp' | sed 's/[[:space:]]//g')
MAIN_SRCS="$MAIN_SRCS MPlayerStub.cpp SdlEventBridge.cpp"

CC_SRCS="CommCore.cpp CommInet.cpp CommInit.cpp CommLanDiscovery.cpp CommPeers.cpp CommPing.cpp CommQueue.cpp CommRaw.cpp CommRecv.cpp CommServerList.cpp"

ok=0; fail=0; failed=""
compile() { # <srcpath> <objname> <flags>
  local src="$1" name="$2" fl="$3"
  [ -f "$src" ] || { echo "MISSING $src"; return; }
  if em++ $fl -c "$src" -o "$OBJ/$name.o" 2>"$LOG/$name.log"; then
    ok=$((ok+1))
  else
    fail=$((fail+1)); local n=$(grep -cE ': error:|: fatal error:' "$LOG/$name.log")
    failed="$failed\n  $name ($n)"
  fi
}

for f in $MAIN_SRCS; do
  name=$(echo "$f" | sed 's#/#_#g; s#\.cpp$##')
  compile "$MAIN/$f" "$name" "$CXXFLAGS"
done
for f in $CC_SRCS; do
  compile "$CC/$f" "CC_${f%.cpp}" "$CXXFLAGS"
done
compile "$PL/platform.cpp" "PL_platform" "$CXXFLAGS"

echo "======================================"
echo "OK:   $ok"
echo "FAIL: $fail"
echo -e "FAILED:$failed"
