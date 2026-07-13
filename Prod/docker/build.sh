#!/bin/bash
# Build the Cossacks: Back to War 1.52 server + web Docker image FROM SCRATCH.
#
# Prerequisite: the engine must already be built (web/dmcr.* present):
#     . ./emenv.sh && bash build/build_dmcr.sh
#
# This script then regenerates Prod/game/ from that build and builds the image. The build context
# is Prod/ (see .dockerignore); the Dockerfile compiles the Perl lobby deps and installs the Node
# master, so a stranger only needs Docker installed — nothing else.
set -e
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"

bash "$ROOT/Prod/make_game.sh"

cd "$ROOT/Prod"
docker build -f docker/Dockerfile -t cossacks152:latest .

echo ""
echo "Built image: cossacks152:latest"
echo "Run it:      docker run -d -p 8790:8790 -p 8792:8792/udp -v \"\$PWD/config.json:/config/config.json:ro\" cossacks152:latest"
echo "Export it:   docker save cossacks152:latest | gzip > cossacks152-image.tar.gz"
