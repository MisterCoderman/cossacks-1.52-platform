#!/bin/bash
# Regenerate Prod/game/ from the engine build output in ../web.
#
# Prod/game/ is the curated web payload that both the Docker image and the desktop (Electron) apps
# ship. It is a BUILD OUTPUT, not source — run this after building the engine:
#     . ./emenv.sh && bash build/build_dmcr.sh   # produces web/dmcr.*
#     bash Prod/make_game.sh                      # copies them into Prod/game/
#
# dmcr.* (the freshly built engine) is always refreshed; the large data/ asset tree is copied only
# the first time (it does not change between engine builds).
set -e
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
WEB="$ROOT/web"
GAME="$ROOT/Prod/game"

for f in dmcr.html dmcr.js dmcr.wasm dmcr.data index.html; do
    [ -f "$WEB/$f" ] || { echo "ERROR: $WEB/$f missing — build the engine first (build/build_dmcr.sh)"; exit 1; }
done

mkdir -p "$GAME"
cp -f "$WEB"/dmcr.html "$WEB"/dmcr.js "$WEB"/dmcr.wasm "$WEB"/dmcr.data "$WEB"/index.html "$GAME"/

# Sanitize the emitted loader for a clean, machine-independent distributable:
#  - Emscripten bakes the absolute build path into PACKAGE_NAME (only used on the Node code path);
#    the browser fetches the relative 'dmcr.data', so force the relative name.
#  - Strip the builder's local temp include paths that Emscripten leaves in // include: comments.
sed -i "s#[A-Za-z]:/[^'\"]*/dmcr.data#dmcr.data#g" "$GAME/dmcr.js"
perl -i -pe 's{(//\s*(?:end\s+)?include:).*$}{$1 (build tmp)} if /\/\/\s*(?:end\s+)?include:/i' "$GAME/dmcr.js"

if [ ! -d "$GAME/data" ]; then
    echo "Copying data/ (first run, large — ~1.5 GB)…"
    cp -r "$WEB/data" "$GAME/data"
fi

echo "Prod/game refreshed from web/  ($(du -sh "$GAME" 2>/dev/null | awk '{print $1}'))"
