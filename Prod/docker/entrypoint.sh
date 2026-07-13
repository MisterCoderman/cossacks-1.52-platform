#!/bin/sh
set -e

# Single source of truth: config.json (mounted at /config/config.json) with {"host":"..."}.
# host = the public IP or domain players reach this server at. Env HOST overrides it.
CFG=/config/config.json
[ -z "$HOST" ] && [ -f "$CFG" ] && HOST=$(sed -nE 's/.*"host"[[:space:]]*:[[:space:]]*"([^"]*)".*/\1/p' "$CFG")

# Browser transport = same-origin, so the web client works at whatever URL this container is reached.
echo '{"relay":""}' > /app/game/relay.json

# host drives the NAT hole-punch rendezvous (Electron P2P); an IPv4 enables direct P2P, a domain (or
# empty) keeps everyone on the always-working relay.
UDPHOST="${HOST:-127.0.0.1}"
sed -i "s/__UDP_HOST__/$UDPHOST/" /opt/gscserver/server.conf

cd /opt/gscserver && perl -Ilib simple-cossacks-server -c server.conf -l warn &

export GSC_HOST=127.0.0.1 GSC_PORT=34001 GSC_PROXY_KEY=coswasmproxy PUBLIC_UDP_HOST="$UDPHOST" STATIC_DIR=/app/game
exec node /app/cos_master.js 8790 8792
