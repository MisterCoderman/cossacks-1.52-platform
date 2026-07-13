# Portable build environment for Cossacks: Back to War 1.52 (WASM).
# Source it before building — from anywhere, on any machine:
#     . ./emenv.sh
#
# Emscripten SDK: install it separately (https://emscripten.org). The recommended way is to run
# `source /path/to/emsdk/emsdk_env.sh` first — this script then uses whatever `em++` is on PATH.
# If em++ is NOT already on PATH, it falls back to a default EMSDK location; override with:
#     EMSDK=/your/emsdk  . ./emenv.sh
#
# This file is self-locating: COS_ROOT/COS_SRC/COS_DATA are derived from its own location, so the
# repository builds from any path without editing anything.

_EMENV_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

export COS_ROOT="$_EMENV_DIR"
export COS_SRC="$_EMENV_DIR/src"
# Runtime AI data is bundled in this repo at ./ai (used by the link's --preload-file).
# NOTE: the build never reads all.gsc, so it is intentionally NOT bundled.
export COS_DATA="$_EMENV_DIR"

# Use the Emscripten toolchain already on PATH (e.g. after `source emsdk_env.sh`); only if it is
# absent do we add a default EMSDK. The default matches this project's reference install (Windows,
# C:/emsdk); on other machines just source your own emsdk_env.sh before this file.
if ! command -v em++ >/dev/null 2>&1; then
    export EMSDK="${EMSDK:-C:/emsdk}"
    export EMSDK_PYTHON="${EMSDK_PYTHON:-$EMSDK/python/3.13.3_64bit/python.exe}"
    export EM_CONFIG="${EM_CONFIG:-$EMSDK/.emscripten}"
    # PATH needs POSIX form (/c/emsdk) even though EMSDK stays Windows-style (C:/emsdk) for the
    # Python/Node tooling under emsdk that expects that form.
    _EMSDK_POSIX="$(echo "$EMSDK" | sed -E 's#^([A-Za-z]):#/\L\1#')"
    export PATH="$_EMSDK_POSIX:$_EMSDK_POSIX/upstream/emscripten:$_EMSDK_POSIX/node/22.16.0_64bit/bin:$_EMSDK_POSIX/python/3.13.3_64bit:$PATH"
fi
