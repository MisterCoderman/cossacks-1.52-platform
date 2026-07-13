# Build from the repository root:  docker build -f docker/Dockerfile -t cossacks152:latest .
FROM perl:5.38-bookworm

RUN apt-get update \
 && apt-get install -y --no-install-recommends nodejs npm \
 && rm -rf /var/lib/apt/lists/*

# Perl deps for the GSC lobby server (SimpleCossacksServer/Makefile.PL PREREQ_PM).
# Template::Plugin::POSIX is REQUIRED: the lobby layout startup.cml does `USE POSIX`; without it the
# server renders enter/login fine but errors "POSIX: plugin not found" on startup.dcml, so the room
# list and the Join/Info/New buttons never reach the client (no "create room").
RUN cpanm --notest \
      EV Coro AnyEvent AnyEvent::HTTP Coro::LWP \
      Mouse JSON LWP Config::Simple Getopt::Compact Getopt::Long::Descriptive \
      String::Escape Template Template::Plugin::POSIX URI

WORKDIR /app
COPY server/package.json /app/
RUN npm install --omit=dev --no-audit --no-fund

COPY server/cos_master.js /app/
COPY game /app/game
COPY gscserver /opt/gscserver
COPY docker/server.conf /opt/gscserver/server.conf
COPY docker/entrypoint.sh /entrypoint.sh
RUN mkdir -p /opt/gscserver/var && chmod +x /entrypoint.sh

EXPOSE 8790 8792/udp
ENTRYPOINT ["/entrypoint.sh"]
