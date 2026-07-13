# Emscripten build flags for Cossacks WASM — based on Ildar's tested clang config.
# Ildar's engine takes the non-MSVC / non-_WIN32 path (Emscripten = clang, no _MSC_VER, no _WIN32),
# i.e. his portable C asm translations + SdlEventBridge + MPlayerStub + platform/ shims.
MAIN="$COS_SRC/MainExe"

INCLUDES="-I$COS_SRC/platform \
-idirafter $MAIN \
-idirafter $MAIN/Arc \
-idirafter $MAIN/NewCode \
-idirafter $MAIN/HTTP \
-idirafter $COS_SRC/CommCore"

# SDL2 is COMPILE-TIME ONLY (headers/types for cold code). NOT linked: the link line has no
# -sUSE_SDL; SDLStubs.cpp provides inert symbols; hot paths = WebRender/WebInput/WebSound.
EMPORTS="-sUSE_SDL=2"

DEFINES="-DNODDRAW -DSDL_MAIN_HANDLED -D_GNU_SOURCE -include $COS_SRC/platform/prelude.h"

# Ildar's clang warning-suppression set (his CMake else()/clang branch) + a couple WASM extras
WARN="-ferror-limit=0 \
-Wno-pragma-pack -Wno-deprecated-declarations -Wno-writable-strings \
-Wno-c++11-narrowing -Wno-format -Wno-switch -Wno-parentheses -Wno-dangling-else \
-Wno-extra-qualification -Wno-microsoft-anon-tag -Wno-sizeof-array-argument \
-Wno-nonportable-include-path -Wno-tautological-constant-out-of-range-compare \
-Wno-invalid-source-encoding -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast"

# -fms-extensions: accept MSVC anon struct/union & member qualification (verified: no _WIN32/_MSC_VER on wasm)
CXXFLAGS="-std=gnu++14 -fms-extensions -fno-strict-aliasing $DEFINES $WARN $INCLUDES $EMPORTS"
CCFLAGS="-std=gnu11 -fms-extensions -fno-strict-aliasing $DEFINES $WARN $INCLUDES $EMPORTS"
