#!/bin/bash
# Full integrated build: engine + x86 plugin-DLL subsystem (recompiled AI DLLs) -> dmcr.wasm
. "$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)/emenv.sh"
. $COS_ROOT/build/flags.sh
MAIN="$COS_SRC/MainExe"; CC="$COS_SRC/CommCore"; PL="$COS_SRC/platform"; IC="$COS_SRC/IChat"; IE="$COS_SRC/IntExplorer"
OBJ=$COS_ROOT/build/obj; XOBJ=$COS_ROOT/build/x86obj
LOG=$COS_ROOT/build/logs; mkdir -p "$OBJ" "$LOG"

# 1) engine objects (rebuild — platform_types.h changed)
MAIN_SRCS=$(sed -n '/set(MAIN_SOURCES/,/^)/p' "$MAIN/CMakeLists.txt" | grep -E '\.cpp' | sed 's/[[:space:]]//g')
MAIN_SRCS="$MAIN_SRCS MPlayerStub.cpp SdlEventBridge.cpp WebInput.cpp WebRender.cpp WebSound.cpp SDLStubs.cpp WebNet.cpp"
CC_SRCS="CommCore CommInet CommInit CommLanDiscovery CommPeers CommPing CommQueue CommRaw CommRecv CommServerList"
# Original GameSpy Chat SDK (restored verbatim - see src/IChat/cos_chat_net.h) + its C++ wrapper +
# the room-browser UI + WebChat.cpp's socket-shim implementation. The .c files are genuine 1999-2001
# C (K&R-style old function definitions in md5c.c, implicit void*->T* conversions throughout) -
# valid C, invalid C++, so they compile as C (emcc/CCFLAGS) instead of C++ (em++/CXXFLAGS) like the
# rest of this port. Only the .cpp wrapper/UI files need C++.
ICHAT_C_SRCS="Chat/chatMain.c Chat/chatHandlers.c Chat/chatSocket.c Chat/chatChannel.c Chat/chatCallbacks.c darray.c hashtable.c md5c.c nonport.c"
ICHAT_CXX_SRCS="cs_chat.cpp WebChat.cpp"
INTEXPLORER_CXX_SRCS="ParseRQ.cpp DString.cpp Bmptool.cpp GameOnMap.cpp FnDefine.cpp DataXchange.cpp Explore.cpp PingEngine.cpp"
echo "=== engine objects ==="; nf=0
for f in $MAIN_SRCS; do name=$(echo "$f"|sed 's#/#_#g;s#\.cpp$##'); em++ $CXXFLAGS -c "$MAIN/$f" -o "$OBJ/$name.o" 2>"$LOG/$name.log" || echo "  CC FAIL $f"; nf=$((nf+1)); done
for f in $CC_SRCS; do em++ $CXXFLAGS -c "$CC/$f.cpp" -o "$OBJ/CC_$f.o" 2>"$LOG/CC_$f.log" || echo "  CC FAIL $f"; done
em++ $CXXFLAGS -c "$PL/platform.cpp" -o "$OBJ/PL_platform.o" 2>"$LOG/PL_platform.log" || echo "  CC FAIL platform"
for f in $ICHAT_C_SRCS; do name=$(echo "IC_$f"|sed 's#/#_#g;s#\.c$##'); emcc $CCFLAGS -I"$IC" -I"$IC/Chat" -c "$IC/$f" -o "$OBJ/$name.o" 2>"$LOG/$name.log" || echo "  CC FAIL $f"; done
for f in $ICHAT_CXX_SRCS; do name=$(echo "IC_$f"|sed 's#/#_#g;s#\.cpp$##'); em++ $CXXFLAGS -I"$IC" -I"$IC/Chat" -c "$IC/$f" -o "$OBJ/$name.o" 2>"$LOG/$name.log" || echo "  CC FAIL $f"; done
# GSC_ChatWindow.cpp's own internal helpers collide with Interface.cpp's separate copies of the
# same names (see cos_gscroom_rename.h) - only this one file needs the rename shim.
em++ $CXXFLAGS -include "$IC/cos_gscroom_rename.h" -I"$IC" -I"$IC/Chat" -c "$IC/GSC_ChatWindow.cpp" -o "$OBJ/IC_GSC_ChatWindow.o" 2>"$LOG/IC_GSC_ChatWindow.log" || echo "  CC FAIL GSC_ChatWindow.cpp"
for f in $INTEXPLORER_CXX_SRCS; do name=$(echo "IE_$f"|sed 's#/#_#g;s#\.cpp$##'); em++ $CXXFLAGS -include "$IE/cos_intexplorer_rename.h" -I"$IE" -I"$MAIN" -c "$IE/$f" -o "$OBJ/$name.o" 2>"$LOG/$name.log" || echo "  CC FAIL IntExplorer/$f"; done
echo "engine: $nf main TUs"

# 2) link engine + x86 subsystem
GSC="$COS_DATA/all.gsc"
echo "=== linking dmcr.wasm ==="
bash $COS_ROOT/build/build_x86.sh   # rebuild x86 subsystem (harness + interpreter + glue)
em++ "$OBJ"/*.o \
  "$XOBJ"/cos_cpu.o "$XOBJ"/cos_load.o "$XOBJ"/cos_shims.o "$XOBJ"/cos_bridge.o \
  "$XOBJ"/cos_engine.o "$XOBJ"/cos_dispatch.o "$XOBJ"/cos_gameapi_gen.o "$XOBJ"/AI_*.o \
  "$XOBJ"/interp.o "$XOBJ"/decode_x86.o "$XOBJ"/ops_cache.o "$XOBJ"/cos_interp_compat.o \
  -sMAX_WEBGL_VERSION=2 -sMIN_WEBGL_VERSION=2 \
  -sALLOW_MEMORY_GROWTH=1 -sASYNCIFY -sASSERTIONS=1 \
  -sASYNCIFY_STACK_SIZE=1048576 --profiling-funcs \
  -sFORCE_FILESYSTEM=1 -lidbfs.js --js-library $COS_ROOT/web/cos_data.js \
  --js-library $COS_ROOT/web/cos_audio.js \
  --js-library $COS_ROOT/web/cos_net.js \
  --js-library $COS_ROOT/web/cos_master.js \
  --js-library $COS_ROOT/web/cos_gsc.js \
  --js-library $COS_ROOT/web/cos_chat.js \
  -sINITIAL_MEMORY=1073741824 -sSTACK_SIZE=8388608 -sEXIT_RUNTIME=0 \
  --preload-file "$COS_DATA/ai@/ai" \
  --shell-file $COS_ROOT/web/shell.html \
  -o $COS_ROOT/web/dmcr.html 2>"$LOG/link.log"
echo "link exit: $?"; grep -iE "error|undefined symbol" "$LOG/link.log" | head -20
# Clean custom shell (web/shell.html): bare canvas, letterbox to window, fullscreen only via the
# button/F11, no emscripten chrome/pointer-lock checkbox. No post-processing needed.
ls -la $COS_ROOT/web/dmcr.wasm 2>/dev/null | awk '{print "wasm:",$5,"bytes"}'
