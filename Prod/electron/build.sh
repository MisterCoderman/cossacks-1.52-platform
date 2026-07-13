#!/bin/bash
# Build the Cossacks 1.52 desktop app for the HOST operating system.
#
#   bash Prod/electron/build.sh
#
# Prereqs: Node.js + npm, and the engine already built (web/dmcr.*). This script refreshes
# Prod/game, installs deps once, then runs electron-builder for the host platform:
#   Windows -> a ready-to-run app folder in dist/win-unpacked/  (zip it to distribute)
#   Linux   -> dist/*.AppImage
#   macOS   -> dist/*.zip
#
# NOTE on Windows: electron-builder downloads a code-signing helper (winCodeSign) whose archive
# contains macOS symlinks that only extract with Developer Mode enabled. That step runs AFTER the
# app is fully assembled and is NOT needed here (we don't sign), so this script treats a non-zero
# electron-builder exit as success as long as the app folder was actually produced. The app in
# dist/win-unpacked/ is complete and runnable regardless.
set -e
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"

bash "$ROOT/Prod/make_game.sh"

cd "$ROOT/Prod/electron"
[ -d node_modules ] || npm install --no-audit --no-fund

# Assemble the app. Ignore the exit code; we validate the real output below (see NOTE above).
npx electron-builder || true

if ls dist/*-unpacked >/dev/null 2>&1; then
    out="$(ls -d dist/*-unpacked)"
    echo "Desktop app built: $out"
    echo "To distribute, zip that folder (it is a self-contained portable app)."
elif ls dist/*.AppImage dist/*.zip >/dev/null 2>&1; then
    echo "Desktop app built: $(ls dist/*.AppImage dist/*.zip 2>/dev/null)"
else
    echo "ERROR: electron-builder produced no app in dist/ — check the log above."
    exit 1
fi
