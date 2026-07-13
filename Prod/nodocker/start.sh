#!/bin/sh
# Run the whole stack without Docker on a plain Linux host. Two processes: the Perl GSC lobby and
# the Node master (which serves the game and bridges to the lobby). Self-locating — run from anywhere:
#     ./Prod/nodocker/start.sh          (or  cd Prod/nodocker && ./start.sh)
#
# One-time deps:
#   Engine built: from the repo root, `. emenv.sh && bash build/build_dmcr.sh && bash Prod/make_game.sh`
#   Perl:  cpanm EV Coro AnyEvent AnyEvent::HTTP Coro::LWP Mouse JSON LWP Config::Simple \
#               Getopt::Compact Getopt::Long::Descriptive String::Escape Template Template::Plugin::POSIX URI
#   Node:  (>=18)  cd Prod/server && npm install --omit=dev && cd -
#
# Set HOST to the public IP or domain players reach this server at (enables NAT punch on an IPv4;
# empty = relay only, which always works).
set -e
HOST="${HOST:-}"

# Resolve the deployment root (Prod/) from this script's own location, so paths work from any CWD.
PROD="$(cd "$(dirname "$0")/.." && pwd)"

[ -f "$PROD/game/dmcr.wasm" ] || { echo "ERROR: $PROD/game not built — run build/build_dmcr.sh then Prod/make_game.sh"; exit 1; }

# client transport = same-origin (works at whatever URL the server is reached)
echo '{"relay":""}' > "$PROD/game/relay.json"

UDPHOST="${HOST:-127.0.0.1}"
sed "s/__UDP_HOST__/$UDPHOST/" "$PROD/docker/server.conf" > "$PROD/gscserver/server.conf"

# 1) GSC lobby (Perl) on :34001
( cd "$PROD/gscserver" && perl -Ilib simple-cossacks-server -c server.conf -l warn ) &

# 2) Master (Node) on :8790 (+ :8792/udp) — serves game/ and bridges to the lobby
GSC_HOST=127.0.0.1 GSC_PORT=34001 GSC_PROXY_KEY=coswasmproxy \
PUBLIC_UDP_HOST="$UDPHOST" STATIC_DIR="$PROD/game" \
exec node "$PROD/server/cos_master.js" 8790 8792
