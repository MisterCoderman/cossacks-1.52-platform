# Cossacks: Back to War 1.52 — Web Edition

The 2002 real-time-strategy game running in the browser via WebAssembly, with native desktop clients
for Windows, macOS and Linux and a self-contained online-multiplayer server. It preserves the full
stability of classic 1.52 — battles of up to 40,000 units — and adds single-player cheat codes.

*[Информация на русском языке](#rus)*

---

## Packages

| Package | Contents | Online multiplayer |
|---|---|---|
| Desktop client — Windows / macOS / Linux | The full game as a native app | Yes, against a server |
| Web archive (`Cossacks152-Web-SinglePlayer.zip`) | The browser game as static files, for any web host | No |
| Docker image (`cossacks152-image.tar.gz`) | The browser game **and** the multiplayer server | Yes |

Static web hosting serves files only and therefore runs single-player. Online multiplayer (rooms,
lobby, chat, NAT traversal) requires the server, which is included in the Docker image — deploy that
on any host with Docker to run the game and the online stack together.

**Downloads:**

| | Link |
|---|---|
| Windows | [`<<< download link >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-Windows.zip) |
| macOS Intel| [`<<< download link >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-macOS.zip) |
| macOS Apple Silicon| [`<<< download link >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-macOS-arm64.zip) |
| Linux | [`<<< download link >>> `](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-Linux.tar.gz) |
| Web archive (single-player) | [`<<< download link >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-Web-SinglePlayer.zip) |
| Docker image (server + web) | [`<<< download link >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/cossacks152-image.tar.gz) |

Source code, build recipes and server code are in this repository.

## Desktop clients

Unpack and run. Single-player, LAN discovery and direct-IP games require no server or configuration.

| Platform | Run |
|---|---|
| Windows | `Cossacks152-Windows.zip` → `Cossacks152.exe` |
| Linux | `Cossacks152-Linux.tar.gz` → `./cossacks152` |
| macOS | `Cossacks152-macOS.zip` → `Cossacks152.app` (unsigned; first launch: right-click → Open) |

For internet rooms on a server, configure `relay.json` — see [Connecting a desktop client](#connecting-a-desktop-client-to-a-server).

## Browser

If a server is running, open `http://<server>:8790/`. Nothing to install.

The web build caches aggressively: the `data/` asset tree (~1.5 GB) is served with a one-year
`immutable` cache and is fetched only on first load; only the engine core (`dmcr.wasm`, ~63 MB) is
revalidated so fixes are always picked up. Repeat visits do not re-download the game.

## Cheat codes (single-player)

Entered in the in-game chat:

| Code | Effect |
|---|---|
| `king` | God mode; millions of resources; unit cap raised to 15,000; artillery build limits and rising unit/building costs removed. |
| `house` | AI players build many houses. Enter again to stop. |
| `nocost` | Disables the rising cost of units and buildings. |
| `peace` | Toggles a truce at any point in the match. |
| `ai` | Hands your nation to the AI. Enter again to reclaim it. |

## Deploying the server (Docker)

```sh
docker load -i cossacks152-image.tar.gz
docker run -d --name cossacks152 \
  -p 8790:8790 -p 8792:8792/udp \
  -v "$PWD/config.json:/config/config.json:ro" \
  cossacks152:latest
```

The container serves the game and the full online stack (lobby, rooms, chat, NAT rendezvous). Players
open `http://<server>:8790/`.

Configuration is a single file, `config.json`:

```json
{ "host": "203.0.113.10" }
```

`host` is the public IP or domain the server is reached at; behind NAT, use the external IP. A public
IPv4 enables NAT hole-punching for direct peer-to-peer between desktop clients; a domain or empty value
routes them through the relay. Behind a TLS reverse proxy, forward the domain to 8790 with WebSocket
upgrade enabled and use `wss://` in `relay.json`.

| Port | Proto | Purpose |
|---|---|---|
| 8790 | tcp | Game (HTTP) and WebSocket (relay, chat, lobby) |
| 8792 | udp | NAT hole-punch rendezvous (desktop peer-to-peer) |

### Connecting a desktop client to a server

Each desktop build ships `relay.json.example`, inert until configured. For internet play, rename it to
`relay.json` and set the server address in all three entries:

```json
{
  "relay": "ws://your-server:8790/cossacks",
  "gsc":   "ws://your-server:8790/cossacks-gsc",
  "ircd":  "ws://your-server:8790/cossacks-irc"
}
```

It belongs next to the executable — `Cossacks152.exe` (Windows), `cossacks152` (Linux), or
`Cossacks152.app/Contents/MacOS/` (macOS). LAN and direct-IP play do not use it. Behind a TLS proxy,
use `wss://`.

## Web-only deployment (shared hosting)

Upload the contents of `Cossacks152-Web-SinglePlayer.zip` to any web host and open `index.html`. The
host only needs to serve files over HTTP/HTTPS (with `.wasm` as `application/wasm`). This is
single-player; multiplayer requires the server and is not available on static hosting.

## Deploying without Docker

Two processes on a Linux host — the Perl lobby and the Node master:

```sh
cpanm EV Coro AnyEvent AnyEvent::HTTP Coro::LWP Mouse JSON LWP Config::Simple \
      Getopt::Compact Getopt::Long::Descriptive String::Escape Template Template::Plugin::POSIX URI
cd Prod/server && npm install --omit=dev && cd ..
HOST=<public-ipv4> ./Prod/nodocker/start.sh
```

# Building from Source

**Important:** This repository contains **only the build code for the engine**. It is provided solely for reference.

If you want to build **exactly the same version** as the original (with the full set of game assets), you need to download a separate version of the repository/archive from this [link](https://archive.org/download/cossacks-back-to-war-v-1.52/src-cossacks-1.52-platform.zip), which includes all game resources.

The repository is self-contained: a clean checkout builds the web game, Docker image, and desktop clients without files from the original game and without hardcoded paths (scripts self-detect via `emenv.sh`).

The only external requirement is the [Emscripten SDK](https://emscripten.org/docs/getting_started/downloads.html). Docker and Node.js are needed only for the image and desktop clients respectively.

```sh
# engine → WebAssembly (creates web/dmcr.*)
. emenv.sh
bash build/build_dmcr.sh

# Docker image (server + web)
bash Prod/docker/build.sh
docker save cossacks152:latest | gzip > cossacks152-image.tar.gz

# desktop clients (each OS builds its own target)
bash Prod/make_game.sh
cd Prod/electron && npm install && npm run dist
```

If `em++` is not in `PATH`, first source your `emsdk_env.sh` or set `EMSDK` before running `emenv.sh`.

AI runtime data is embedded in `ai/`. The `Prod/game/` directory is regenerated by `Prod/make_game.sh` from `web/`.

On Windows, the optional electron-builder signing step requires Developer Mode and may throw a symlink error `winCodeSign` at the end — the build is already ready in `dist/win-unpacked/` — just archive that folder.


## Architecture

**Multiplayer.** The lobby is the rloger Perl stack (`gscserver/`) speaking the game's native binary
protocol; a Node master bridges browser WebSocket connections to it, provides a WebSocket virtual-LAN
relay (each peer gets a virtual IP; unicast/broadcast datagrams are forwarded so LAN discovery works
over the internet), runs the NAT hole-punch rendezvous on UDP 8792 with automatic relay fallback, and
carries an IRC chat server on the same origin. Desktop clients use real UDP for LAN and direct-IP.
Server state is ephemeral — online peers, current rooms and chat live in memory and reset on restart;
match stats are a rolling last-1000 record. Nothing accumulates over time.

**Engine.** The original Cossacks C++ source compiled to WebAssembly with Emscripten (`em++`) — not an
emulated or recompiled x86 binary. The Win32/DirectX/MFC surface is replaced by shims: DirectDraw is
compiled out (`-DNODDRAW`), SDL2 supplies compile-time types only, `src/platform/*` provides Win32
stand-ins. Runtime is a native web layer — WebGL2, HTML5 input, Web Audio.

**x86 subsystem.** AI and mission logic are 240 original x86 PE DLLs loaded by a minimal in-WASM PE
loader. The 20 nation-AI DLLs are statically recompiled x86→C and linked into `dmcr.wasm`; the 220
mission DLLs are fetched on demand and run through a decode-on-demand x86-32 + x87 interpreter.

**Video.** One 8-bit palette-indexed offscreen frame, presented by a WebGL2 palette-lookup shader
(`R8` index texture + a 256×1 RGBA8 palette, resolved on the GPU). Fullscreen composes at the
monitor's native resolution (`screen.width × devicePixelRatio`).

**Audio.** DirectSound and MCI/CD replaced by Web Audio: per-channel
`AudioBufferSourceNode → StereoPanner → GainNode`, effects read raw PCM from the WASM heap, music
decodes off-thread with an LRU cache.

**Input.** HTML5 events feed a synthesized Win32 message ring buffer drained by the engine's own
`PeekMessage()`; coordinates are transformed through the letterbox; pointer lock engages in-game.

**Data & caching.** The original single ~240 MB archive is unpacked into per-language files under
`data/<lang>/`, served over HTTP and fetched one file at a time (a manifest backs lookup and directory
enumeration). Saves and options persist to IndexedDB via IDBFS. `data/` files are `immutable`-cached;
manifests and `dmcr.*` are `no-cache` so rebuilds are picked up.

## Project history

The C++ engine descends from the 2017 revamp of 1.42, carried forward as 1.52:

```
  1.42  · 2017 · ereb-thanatos ───────►  original C++ revamp (cossacks-revamp-2017)
                       │
                       ▼
  1.52  · 2025 · MR.CODERMAN ─────────►  C++ / SDL2 rebuild (cossacks-1.52)
                       │
                       ▼
  1.52  · "The Last Stand" · Ildar (JIEgOKOJI) ──►  first cross-platform port attempt (Windows + macOS),
                       │                             never fully finished but the groundwork this edition grew from
                       ▼
  1.52  · platform · (this project) ──►  WebAssembly engine, online multiplayer, desktop clients
```

| Stage | Author | Year | Repository |
|---|---|---|---|
| 1.42 revamp | ereb-thanatos | 2017 | [cossacks-revamp-2017](https://github.com/ereb-thanatos/cossacks-revamp-2017) |
| 1.52 | MR.CODERMAN | June 11, 2025 | [cossacks-1.52](https://github.com/MisterCoderman/cossacks-1.52) |
| 1.52 "The Last Stand" | Ildar (JIEgOKOJI) | Mar 14, 2026 | [cossacks-1.52](https://github.com/JIEgOKOJI/cossacks-1.52) |
| 1.52 platform | MR.CODERMAN | July 14, 2026 | WebAssembly + multiplayer + desktop |

## Acknowledgements

- **[ereb-thanatos](https://github.com/ereb-thanatos)** — author of the project and of the code base it grew from.
- **[Ildar](https://github.com/JIEgOKOJI)** — the first cross-platform build, *Cossacks: The Last Stand (v1.52)*, on which this WebAssembly edition is based.
- **[emilekm2142](https://github.com/emilekm2142)** — reworking of direct-IP multiplayer onto CommCore.
- **[rloger](https://github.com/rloger)** — the Cossacks game-server code the online multiplayer is built on: [SimpleCossacksServer](https://github.com/rloger/SimpleCossacksServer), [GSC-Server](https://github.com/rloger/GSC-Server), [GSC-Streamer](https://github.com/rloger/GSC-Streamer).
- **[Ivan Petkov](https://github.com/IvanPetkov555)** — mission and campaign development.
- **Slovnoslon** ([GitHub](https://github.com/slovnoslon) · [YouTube](https://www.youtube.com/channel/UC3PtKudP4TgewAMTWkI6dMw)) — finding and fixing bugs in the original game so 1.52 ships without them.

<br><br>

<hr>
<a name="rus"></a>

# Cossacks: Back to War 1.52 — веб-издание

Стратегия реального времени 2002 года в браузере через WebAssembly, с нативными десктоп-клиентами для
Windows, macOS и Linux и самодостаточным сервером онлайн-мультиплеера. Сохраняет всю стабильность
классической 1.52 — сражения до 40 000 юнитов — и добавляет чит-коды для одиночной игры.

---

## Пакеты

| Пакет | Что внутри | Онлайн-мультиплеер |
|---|---|---|
| Десктоп-клиент — Windows / macOS / Linux | Полная игра как нативное приложение | Да, к серверу |
| Веб-архив (`Cossacks152-Web-SinglePlayer.zip`) | Браузерная игра статическими файлами, для любого веб-хостинга | Нет |
| Docker-образ (`cossacks152-image.tar.gz`) | Браузерная игра **и** сервер мультиплеера | Да |

Статический веб-хостинг раздаёт только файлы, поэтому даёт одиночную игру. Онлайн-мультиплеер (комнаты,
лобби, чат, обход NAT) требует сервера, который входит в Docker-образ — разверни его на любом хосте с
Docker, чтобы игра и онлайн-стек работали вместе.

**Скачивание:**

| | Ссылка |
|---|---|
| Windows | [`<<< ссылка >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-Windows.zip) |
| macOS Intel| [`<<< download link >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-macOS.zip) |
| macOS Apple Silicon| [`<<< download link >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-macOS-arm64.zip) |
| Linux | [`<<< ссылка >>> `](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-Linux.tar.gz) |
| Веб-архив (одиночная) | [`<<< ссылка >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/Cossacks152-Web-SinglePlayer.zip) |
| Docker-образ (сервер + веб) | [`<<< ссылка >>>`](https://archive.org/download/cossacks-back-to-war-v-1.52/cossacks152-image.tar.gz) |

Исходный код, рецепты сборки и код серверов — в этом репозитории.

## Десктоп-клиенты

Распаковать и запустить. Одиночная игра, обнаружение по LAN и игра по прямому IP не требуют сервера и
настройки.

| Платформа | Запуск |
|---|---|
| Windows | `Cossacks152-Windows.zip` → `Cossacks152.exe` |
| Linux | `Cossacks152-Linux.tar.gz` → `./cossacks152` |
| macOS | `Cossacks152-macOS.zip` → `Cossacks152.app` (без подписи; первый запуск: ПКМ → «Открыть») |

Для интернет-комнат на сервере настраивается `relay.json` — см. [Подключение десктоп-клиента](#подключение-десктоп-клиента-к-серверу).

## Браузер

Если сервер запущен, открой `http://<сервер>:8790/`. Ставить ничего не нужно.

Веб-сборка активно кэширует: дерево ассетов `data/` (~1.5 ГБ) отдаётся с годовым `immutable`-кэшем и
качается только при первом входе; ревалидируется только ядро движка (`dmcr.wasm`, ~63 МБ), чтобы фиксы
подхватывались. Повторные входы игру не перекачивают.

## Чит-коды (одиночная игра)

Вводятся в игровом чате:

| Код | Эффект |
|---|---|
| `king` | Режим бога; миллионы ресурсов; лимит юнитов поднят до 15 000; сняты ограничения на артиллерию и рост стоимости юнитов/зданий. |
| `house` | Боты строят много домов. Повторный ввод останавливает. |
| `nocost` | Отключает рост стоимости юнитов и зданий. |
| `peace` | Включает/выключает перемирие в любой момент матча. |
| `ai` | Передаёт вашу нацию ИИ. Повторный ввод возвращает контроль. |

## Развёртывание сервера (Docker)

```sh
docker load -i cossacks152-image.tar.gz
docker run -d --name cossacks152 \
  -p 8790:8790 -p 8792:8792/udp \
  -v "$PWD/config.json:/config/config.json:ro" \
  cossacks152:latest
```

Контейнер отдаёт игру и весь онлайн-стек (лобби, комнаты, чат, NAT-рандеву). Игроки открывают
`http://<сервер>:8790/`.

Настройка — один файл `config.json`:

```json
{ "host": "203.0.113.10" }
```

`host` — публичный IP или домен, по которому доступен сервер; за NAT указывается внешний IP. Публичный
IPv4 включает пробитие NAT для прямого P2P между десктоп-клиентами; домен или пустое значение
направляют их через relay. За TLS-прокси проксируй домен на 8790 с WebSocket-upgrade и используй
`wss://` в `relay.json`.

| Порт | Прото | Назначение |
|---|---|---|
| 8790 | tcp | Игра (HTTP) и WebSocket (relay, чат, лобби) |
| 8792 | udp | Rendezvous для пробития NAT (десктоп P2P) |

### Подключение десктоп-клиента к серверу

В каждой десктоп-сборке лежит `relay.json.example`, неактивный до настройки. Для интернет-игры
переименуй его в `relay.json` и укажи адрес сервера во всех трёх записях:

```json
{
  "relay": "ws://ваш-сервер:8790/cossacks",
  "gsc":   "ws://ваш-сервер:8790/cossacks-gsc",
  "ircd":  "ws://ваш-сервер:8790/cossacks-irc"
}
```

Файл кладётся рядом с исполняемым — `Cossacks152.exe` (Windows), `cossacks152` (Linux) или
`Cossacks152.app/Contents/MacOS/` (macOS). Для LAN и прямого IP он не нужен. За TLS-прокси — `wss://`.

## Развёртывание только веба (шаред-хостинг)

Залей содержимое `Cossacks152-Web-SinglePlayer.zip` на любой веб-хостинг и открой `index.html`. От
хостинга нужно лишь отдавать файлы по HTTP/HTTPS (`.wasm` как `application/wasm`). Это одиночная игра;
мультиплеер требует сервера и на статическом хостинге недоступен.

## Развёртывание без Docker

Два процесса на Linux-хосте — Perl-лобби и Node-мастер:

```sh
cpanm EV Coro AnyEvent AnyEvent::HTTP Coro::LWP Mouse JSON LWP Config::Simple \
      Getopt::Compact Getopt::Long::Descriptive String::Escape Template Template::Plugin::POSIX URI
cd Prod/server && npm install --omit=dev && cd ..
HOST=<публичный-ipv4> ./Prod/nodocker/start.sh
```

# Сборка из исходников

**Важно:** В этом репозитории находится **только код для сборки движка**. Он предоставлен исключительно для ознакомления.  
Если вы хотите собрать **точно такую же версию**, как оригинальная (с полным набором игровых ресурсов), вам нужно загрузить отдельную версию репозитория/архива по этой [ссылке](https://archive.org/download/cossacks-back-to-war-v-1.52/src-cossacks-1.52-platform.zip), которая включает все игровые ресурсы.

Репозиторий самодостаточен: чистый checkout собирает веб-игру, Docker-образ и десктоп-клиенты без
файлов из оригинальной игры и без хардкод-путей (скрипты самоопределяются через `emenv.sh`).
Единственное внешнее требование —
[Emscripten SDK](https://emscripten.org/docs/getting_started/downloads.html); Docker и Node.js нужны
только для образа и десктоп-клиентов соответственно.

```sh
# движок → WebAssembly (создаёт web/dmcr.*)
. emenv.sh
bash build/build_dmcr.sh

# Docker-образ сервер + веб
bash Prod/docker/build.sh
docker save cossacks152:latest | gzip > cossacks152-image.tar.gz

# десктоп-клиенты (каждая ОС собирает свою цель)
bash Prod/make_game.sh
cd Prod/electron && npm install && npm run dist
```

Если `em++` не в `PATH`, сначала подключи свой `emsdk_env.sh` или задай `EMSDK` перед `emenv.sh`.

AI-данные рантайма вложены в `ai/`. `Prod/game/` заново генерируется `Prod/make_game.sh` из `web/`.

На Windows опциональный шаг подписи в electron-builder требует Developer Mode и в конце может выдать
ошибку симлинка `winCodeSign`; сборка при этом уже готова в `dist/win-unpacked/` — заархивируй папку.


## Архитектура

**Мультиплеер.** Лобби — стек rloger на Perl (`gscserver/`) на родном бинарном протоколе игры;
Node-мастер мостит к нему WebSocket-соединения браузера, даёт WebSocket virtual-LAN relay (каждый пир
получает виртуальный IP; юникаст/бродкаст-датаграммы пересылаются, так что LAN-обнаружение работает
через интернет), держит NAT-рандеву на UDP 8792 с автооткатом на relay и несёт IRC-чат на том же
origin. Десктоп-клиенты используют настоящий UDP для LAN и прямого IP. Состояние сервера эфемерное —
онлайн-пиры, текущие комнаты и чат живут в памяти и сбрасываются при рестарте; статистика матчей —
rolling-запись на последние 1000. Со временем ничего не накапливается.

**Движок.** Оригинальный C++-исходник Cossacks, скомпилированный в WebAssembly через Emscripten
(`em++`) — не эмуляция и не рекомпиляция x86-бинаря. Слой Win32/DirectX/MFC заменён шимами: DirectDraw
вырезан (`-DNODDRAW`), SDL2 даёт только compile-time типы, `src/platform/*` подменяет Win32. Рантайм —
нативный веб-слой: WebGL2, ввод HTML5, Web Audio.

**x86-подсистема.** ИИ и логика миссий — 240 оригинальных x86 PE-DLL, загружаемых минимальным
PE-загрузчиком в WASM. 20 DLL ИИ наций статически рекомпилированы x86→C и вкомпилированы в `dmcr.wasm`;
220 DLL миссий фетчатся по требованию и исполняются decode-on-demand интерпретатором x86-32 + x87.

**Видео.** Один 8-битный палитровый offscreen-кадр, выводимый WebGL2-шейдером палитровой выборки
(`R8`-текстура индексов + палитра 256×1 RGBA8, разрешение на GPU). Фуллскрин композит на нативном
разрешении монитора (`screen.width × devicePixelRatio`).

**Звук.** DirectSound и MCI/CD заменены Web Audio: на канал
`AudioBufferSourceNode → StereoPanner → GainNode`, эффекты читают сырой PCM из кучи WASM, музыка
декодируется вне потока с LRU-кэшем.

**Ввод.** HTML5-события наполняют синтезированный кольцевой буфер Win32-сообщений, который разбирает
родной `PeekMessage()` движка; координаты преобразуются через леттербокс; захват указателя включается
в игре.

**Данные и кэш.** Оригинальный единый архив ~240 МБ распакован в пофайловые файлы по языкам в
`data/<lang>/`, раздаётся по HTTP и фетчится по одному файлу (манифест обслуживает поиск и перечисление
каталога). Сейвы и настройки — в IndexedDB через IDBFS. Файлы `data/` кэшируются `immutable`; манифесты
и `dmcr.*` идут `no-cache`, чтобы пересборки подхватывались.

## История проекта

C++-движок происходит из ревизии 1.42 2017 года, продолженной как 1.52:

```
  1.42  · 2017 · ereb-thanatos ───────►  оригинальный C++-ревамп (cossacks-revamp-2017)
                       │
                       ▼
  1.52  · 2025 · MR.CODERMAN ─────────►  пересборка на C++ / SDL2 (cossacks-1.52)
                       │
                       ▼
  1.52  · «The Last Stand» · Ильдар (JIEgOKOJI) ──►  первая попытка кроссплатформенного порта (Windows + macOS),
                       │                              не доведён до конца, но фундамент, из которого выросло это издание
                       ▼
  1.52  · платформа · (этот проект) ──►  движок на WebAssembly, онлайн-мультиплеер, десктоп-клиенты
```

| Этап | Автор | Год | Репозиторий |
|---|---|---|---|
| Ревамп 1.42 | ereb-thanatos | 2017 | [cossacks-revamp-2017](https://github.com/ereb-thanatos/cossacks-revamp-2017) |
| 1.52 | MR.CODERMAN | 11 июня 2025 года | [cossacks-1.52](https://github.com/MisterCoderman/cossacks-1.52) |
| 1.52 «The Last Stand» | Ильдар (JIEgOKOJI) | 14 марта 2026 года | [cossacks-1.52](https://github.com/JIEgOKOJI/cossacks-1.52) |
| 1.52 платформа | MR.CODERMAN | 14 июля 2026 года | WebAssembly + мультиплеер + десктоп |

## Благодарности

- **[ereb-thanatos](https://github.com/ereb-thanatos)** — автор проекта и кодовой базы, из которой он вырос.
- **[Ильдар](https://github.com/JIEgOKOJI)** — первый кроссплатформенный билд *Cossacks: The Last Stand (v1.52)*, на основе которого сделана эта WebAssembly-сборка.
- **[emilekm2142](https://github.com/emilekm2142)** — переработка мультиплеера по прямому IP на CommCore.
- **[rloger](https://github.com/rloger)** — код игрового сервера «Казаки», на котором построен онлайн-мультиплеер: [SimpleCossacksServer](https://github.com/rloger/SimpleCossacksServer), [GSC-Server](https://github.com/rloger/GSC-Server), [GSC-Streamer](https://github.com/rloger/GSC-Streamer).
- **[Иван Петков](https://github.com/IvanPetkov555)** — разработка миссий и кампаний.
- **Slovnoslon** ([GitHub](https://github.com/slovnoslon) · [YouTube](https://www.youtube.com/channel/UC3PtKudP4TgewAMTWkI6dMw)) — поиск и устранение багов оригинальной игры, чтобы в 1.52 их не осталось.


<br><br>

<hr>

## Screenshots · Скриншоты
<img width="1279" height="797" alt="изображение" src="https://github.com/user-attachments/assets/5b967e7d-edb4-44dd-85e7-90eea64edcd4" />
<img width="1279" height="795" alt="изображение" src="https://github.com/user-attachments/assets/095d3f16-87b2-4aaf-a5d7-5c0ede8e780c" />
<img width="1275" height="800" alt="изображение" src="https://github.com/user-attachments/assets/360c70d6-180a-4c0a-a582-c583dc374fde" />
<img width="1847" height="902" alt="изображение" src="https://github.com/user-attachments/assets/4a0d3772-38fc-46f6-829d-16afe9611599" />
<img width="1845" height="952" alt="изображение" src="https://github.com/user-attachments/assets/a9e8f935-f568-495c-abcc-33a23a86eac8" />
<img width="1630" height="1289" alt="изображение" src="https://github.com/user-attachments/assets/a6a5e8c8-b01f-4397-9479-3464be8b27f5" />






