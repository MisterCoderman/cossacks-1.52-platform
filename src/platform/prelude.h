// platform/prelude.h — force-included (-include) before every TU under Emscripten.
// Pulls C/C++ standard headers FIRST so the game's allocator macros
// (`#define malloc _ExMalloc`, `#define free _ExFree` in Ddini.h) cannot leak into
// and corrupt libc/libc++ headers (notably <sched.h> via <pthread.h>/<thread>).
// (Native macOS/Linux clang didn't need this; Emscripten's libc++ include chain does.)
#pragma once
#ifdef __cplusplus
  #include <cstddef>
  #include <cstdlib>
  #include <cstring>
  #include <cstdio>
  #include <cstdarg>
  #include <cmath>
  #include <cctype>
  #include <string>
  #include <vector>
  #include <list>
  #include <map>
  #include <algorithm>
  #include <memory>
  #include <atomic>
  #include <mutex>
  #include <thread>
  #include <pthread.h>
#else
  #include <stddef.h>
  #include <stdlib.h>
  #include <string.h>
  #include <stdio.h>
  #include <stdarg.h>
  #include <math.h>
  #include <pthread.h>
#endif
// Game uses NAN as an ordinary identifier in some spots; free the name.
#undef NAN
