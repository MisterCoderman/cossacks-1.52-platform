#!/bin/bash
# Точечная пересборка для GSC-отладки: только изменённые TU + линк.
# (Без build_x86.sh — объекты x86obj уже собраны и не менялись.)
set -e
. "$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)/emenv.sh"
. $COS_ROOT/build/flags.sh
MAIN="$COS_SRC/MainExe"; IC="$COS_SRC/IChat"; IE="$COS_SRC/IntExplorer"
OBJ=$COS_ROOT/build/obj; XOBJ=$COS_ROOT/build/x86obj
LOG=$COS_ROOT/build/logs

echo "=== recompiling changed TUs ==="
em++ $CXXFLAGS -c "$MAIN/NewILogin.cpp" -o "$OBJ/NewILogin.o" 2>"$LOG/NewILogin.log" || { echo "FAIL NewILogin"; tail -5 "$LOG/NewILogin.log"; exit 1; }
echo ok NewILogin
em++ $CXXFLAGS -c "$MAIN/Interface.cpp" -o "$OBJ/Interface.o" 2>"$LOG/Interface.log" || { echo "FAIL Interface"; tail -5 "$LOG/Interface.log"; exit 1; }
echo ok Interface
em++ $CXXFLAGS -include "$IC/cos_gscroom_rename.h" -I"$IC" -I"$IC/Chat" -c "$IC/GSC_ChatWindow.cpp" -o "$OBJ/IC_GSC_ChatWindow.o" 2>"$LOG/IC_GSC_ChatWindow.log" || { echo "FAIL GSC_ChatWindow"; tail -5 "$LOG/IC_GSC_ChatWindow.log"; exit 1; }
echo ok GSC_ChatWindow
em++ $CXXFLAGS -I"$IC" -I"$IC/Chat" -c "$IC/cs_chat.cpp" -o "$OBJ/IC_cs_chat.o" 2>"$LOG/IC_cs_chat.log" || { echo "FAIL cs_chat"; tail -5 "$LOG/IC_cs_chat.log"; exit 1; }
echo ok cs_chat
em++ $CXXFLAGS -I"$IC" -I"$IC/Chat" -c "$IC/WebChat.cpp" -o "$OBJ/IC_WebChat.o" 2>"$LOG/IC_WebChat.log" || { echo "FAIL WebChat"; tail -5 "$LOG/IC_WebChat.log"; exit 1; }
echo ok WebChat
em++ $CXXFLAGS -include "$IE/cos_intexplorer_rename.h" -I"$IE" -I"$MAIN" -c "$IE/DataXchange.cpp" -o "$OBJ/IE_DataXchange.o" 2>"$LOG/IE_DataXchange.log" || { echo "FAIL DataXchange"; tail -5 "$LOG/IE_DataXchange.log"; exit 1; }
echo ok DataXchange
em++ $CXXFLAGS -include "$IE/cos_intexplorer_rename.h" -I"$IE" -I"$MAIN" -c "$IE/Explore.cpp" -o "$OBJ/IE_Explore.o" 2>"$LOG/IE_Explore.log" || { echo "FAIL Explore"; tail -5 "$LOG/IE_Explore.log"; exit 1; }
echo ok Explore
em++ $CXXFLAGS -include "$IE/cos_intexplorer_rename.h" -I"$IE" -I"$MAIN" -c "$IE/FnDefine.cpp" -o "$OBJ/IE_FnDefine.o" 2>"$LOG/IE_FnDefine.log" || { echo "FAIL FnDefine"; tail -5 "$LOG/IE_FnDefine.log"; exit 1; }
echo ok FnDefine
em++ $CXXFLAGS -c "$MAIN/WebRender.cpp" -o "$OBJ/WebRender.o" 2>"$LOG/WebRender.log" || { echo "FAIL WebRender"; tail -5 "$LOG/WebRender.log"; exit 1; }
echo ok WebRender
em++ $CXXFLAGS -c "$MAIN/Ddini.cpp" -o "$OBJ/Ddini.o" 2>"$LOG/Ddini.log" || { echo "FAIL Ddini"; tail -5 "$LOG/Ddini.log"; exit 1; }
echo ok Ddini
em++ $CXXFLAGS -c "$MAIN/Ddex1.cpp" -o "$OBJ/Ddex1.o" 2>"$LOG/Ddex1.log" || { echo "FAIL Ddex1"; tail -5 "$LOG/Ddex1.log"; exit 1; }
echo ok Ddex1

GSC="$COS_DATA/all.gsc"
echo "=== linking dmcr.wasm ==="
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
ls -la $COS_ROOT/web/dmcr.wasm 2>/dev/null | awk '{print "wasm:",$5,"bytes"}'
echo DONE
