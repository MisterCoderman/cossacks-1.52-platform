/*
 * Minimal pthread implementation using Win32 API.
 * Replaces libwinpthread-1.dll (which depends on UCRT) for XP/Win7 compatibility.
 * Implements functions required by libgcc_eh.a and libstdc++.a.
 *
 * IMPORTANT: Types must match MinGW-w64's <pthread.h> definitions:
 *   pthread_mutex_t = intptr_t  (opaque handle, NOT CRITICAL_SECTION)
 *   pthread_cond_t  = intptr_t  (opaque handle)
 *   pthread_key_t   = unsigned  (matches DWORD)
 *   pthread_once_t  = long      (matches LONG)
 *   pthread_t       = uintptr_t (matches HANDLE)
 */

#ifdef _WIN32

#include <windows.h>
#include <process.h>
#include <stdint.h>
#include <errno.h>

/* --- Thread-Local Storage (TLS) --- */

int pthread_key_create(unsigned *key, void (*destructor)(void *))
{
    (void)destructor;
    DWORD idx = TlsAlloc();
    if (idx == TLS_OUT_OF_INDEXES)
        return -1;
    *key = (unsigned)idx;
    return 0;
}

void *pthread_getspecific(unsigned key)
{
    return TlsGetValue((DWORD)key);
}

int pthread_setspecific(unsigned key, const void *value)
{
    return TlsSetValue((DWORD)key, (LPVOID)value) ? 0 : -1;
}

/* --- Mutex --- */
/* pthread_mutex_t = intptr_t in MinGW; we store a pointer to heap-allocated CRITICAL_SECTION.
 * PTHREAD_MUTEX_INITIALIZER = -1  → lazy init on first lock (matches winpthreads behavior). */
#define _PTW32_LAZY_INIT ((intptr_t)-1)

static void _mutex_lazy_init(intptr_t *mutex)
{
    CRITICAL_SECTION *cs = (CRITICAL_SECTION *)HeapAlloc(
        GetProcessHeap(), 0, sizeof(CRITICAL_SECTION));
    if (!cs) return;
    InitializeCriticalSection(cs);
    if (InterlockedCompareExchangePointer(
            (void **)mutex, cs, (void *)_PTW32_LAZY_INIT) != (void *)_PTW32_LAZY_INIT) {
        /* Another thread already initialized — discard ours */
        DeleteCriticalSection(cs);
        HeapFree(GetProcessHeap(), 0, cs);
    }
}

int pthread_mutex_init(intptr_t *mutex, const void *attr)
{
    CRITICAL_SECTION *cs;
    (void)attr;
    cs = (CRITICAL_SECTION *)HeapAlloc(GetProcessHeap(), 0, sizeof(CRITICAL_SECTION));
    if (!cs)
        return -1;
    InitializeCriticalSection(cs);
    *mutex = (intptr_t)cs;
    return 0;
}

int pthread_mutex_destroy(intptr_t *mutex)
{
    intptr_t val = *mutex;
    if (val && val != _PTW32_LAZY_INIT) {
        CRITICAL_SECTION *cs = (CRITICAL_SECTION *)val;
        DeleteCriticalSection(cs);
        HeapFree(GetProcessHeap(), 0, cs);
        *mutex = 0;
    }
    return 0;
}

int pthread_mutex_lock(intptr_t *mutex)
{
    if (*mutex == _PTW32_LAZY_INIT)
        _mutex_lazy_init(mutex);
    EnterCriticalSection((CRITICAL_SECTION *)*mutex);
    return 0;
}

int pthread_mutex_trylock(intptr_t *mutex)
{
    if (*mutex == _PTW32_LAZY_INIT)
        _mutex_lazy_init(mutex);
    return TryEnterCriticalSection((CRITICAL_SECTION *)*mutex) ? 0 : EBUSY;
}

int pthread_mutex_unlock(intptr_t *mutex)
{
    if (*mutex == _PTW32_LAZY_INIT)
        return 0; /* never locked → nothing to unlock */
    LeaveCriticalSection((CRITICAL_SECTION *)*mutex);
    return 0;
}

/* --- Once --- */

int pthread_once(long *once_control, void (*init_routine)(void))
{
    /* 0 = not started, 1 = in progress, 2 = done */
    if (*once_control == 2)
        return 0;
    if (InterlockedCompareExchange(once_control, 1, 0) == 0) {
        init_routine();
        InterlockedExchange(once_control, 2);
    } else {
        while (*once_control != 2)
            Sleep(0);
    }
    return 0;
}

/* --- Threads (needed by libstdc++ std::thread) --- */

struct thread_start_info {
    void *(*start_routine)(void *);
    void *arg;
};

static unsigned __stdcall thread_proxy(void *param)
{
    struct thread_start_info info = *(struct thread_start_info *)param;
    HeapFree(GetProcessHeap(), 0, param);
    info.start_routine(info.arg);
    return 0;
}

int pthread_create(uintptr_t *thread, const void *attr,
                   void *(*start_routine)(void *), void *arg)
{
    struct thread_start_info *info;
    (void)attr;
    info = (struct thread_start_info *)HeapAlloc(GetProcessHeap(), 0, sizeof(*info));
    if (!info)
        return -1;
    info->start_routine = start_routine;
    info->arg = arg;
    *thread = (uintptr_t)_beginthreadex(NULL, 0, thread_proxy, info, 0, NULL);
    if (*thread == 0) {
        HeapFree(GetProcessHeap(), 0, info);
        return -1;
    }
    return 0;
}

int pthread_join(uintptr_t thread, void **retval)
{
    (void)retval;
    WaitForSingleObject((HANDLE)thread, INFINITE);
    CloseHandle((HANDLE)thread);
    return 0;
}

int pthread_detach(uintptr_t thread)
{
    CloseHandle((HANDLE)thread);
    return 0;
}

int pthread_num_processors_np(void)
{
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    return (int)si.dwNumberOfProcessors;
}

/* --- Condition Variables --- */
/* pthread_cond_t = intptr_t; PTHREAD_COND_INITIALIZER = -1 (lazy init) */
/* CONDITION_VARIABLE is sizeof(void*) = sizeof(intptr_t), so it fits directly */

#if _WIN32_WINNT >= 0x0600

static void _cond_lazy_init(intptr_t *cond)
{
    /* CONDITION_VARIABLE fits in intptr_t — just initialize in place */
    CONDITION_VARIABLE cv;
    InitializeConditionVariable(&cv);
    InterlockedCompareExchangePointer(
        (void **)cond, cv.Ptr, (void *)_PTW32_LAZY_INIT);
}

int pthread_cond_init(intptr_t *cond, const void *attr)
{
    (void)attr;
    InitializeConditionVariable((CONDITION_VARIABLE *)cond);
    return 0;
}

int pthread_cond_destroy(intptr_t *cond)
{
    (void)cond;
    return 0;
}

int pthread_cond_wait(intptr_t *cond, intptr_t *mutex)
{
    if (*cond == _PTW32_LAZY_INIT)
        _cond_lazy_init(cond);
    if (*mutex == _PTW32_LAZY_INIT)
        _mutex_lazy_init(mutex);
    SleepConditionVariableCS((CONDITION_VARIABLE *)cond,
                             (CRITICAL_SECTION *)*mutex, INFINITE);
    return 0;
}

int pthread_cond_broadcast(intptr_t *cond)
{
    if (*cond == _PTW32_LAZY_INIT)
        _cond_lazy_init(cond);
    WakeAllConditionVariable((CONDITION_VARIABLE *)cond);
    return 0;
}

int pthread_cond_signal(intptr_t *cond)
{
    if (*cond == _PTW32_LAZY_INIT)
        _cond_lazy_init(cond);
    WakeConditionVariable((CONDITION_VARIABLE *)cond);
    return 0;
}

#else
/* XP: manual emulation with events */
/* For XP, we heap-allocate a struct since intptr_t is too small */

struct _pthread_cond_xp {
    HANDLE event;
    LONG waiters;
};

int pthread_cond_init(intptr_t *cond, const void *attr)
{
    struct _pthread_cond_xp *c;
    (void)attr;
    c = (struct _pthread_cond_xp *)HeapAlloc(GetProcessHeap(), 0, sizeof(*c));
    if (!c) return -1;
    c->waiters = 0;
    c->event = CreateEventA(NULL, TRUE, FALSE, NULL);
    if (!c->event) {
        HeapFree(GetProcessHeap(), 0, c);
        return -1;
    }
    *cond = (intptr_t)c;
    return 0;
}

int pthread_cond_destroy(intptr_t *cond)
{
    intptr_t val = *cond;
    if (val && val != _PTW32_LAZY_INIT) {
        struct _pthread_cond_xp *c = (struct _pthread_cond_xp *)val;
        CloseHandle(c->event);
        HeapFree(GetProcessHeap(), 0, c);
        *cond = 0;
    }
    return 0;
}

static void _cond_xp_lazy_init(intptr_t *cond)
{
    struct _pthread_cond_xp *c = (struct _pthread_cond_xp *)HeapAlloc(
        GetProcessHeap(), 0, sizeof(*c));
    if (!c) return;
    c->waiters = 0;
    c->event = CreateEventA(NULL, TRUE, FALSE, NULL);
    if (!c->event) {
        HeapFree(GetProcessHeap(), 0, c);
        return;
    }
    if (InterlockedCompareExchangePointer(
            (void **)cond, c, (void *)_PTW32_LAZY_INIT) != (void *)_PTW32_LAZY_INIT) {
        CloseHandle(c->event);
        HeapFree(GetProcessHeap(), 0, c);
    }
}

int pthread_cond_wait(intptr_t *cond, intptr_t *mutex)
{
    struct _pthread_cond_xp *c;
    CRITICAL_SECTION *cs;
    if (*cond == _PTW32_LAZY_INIT)
        _cond_xp_lazy_init(cond);
    if (*mutex == _PTW32_LAZY_INIT)
        _mutex_lazy_init(mutex);
    c = (struct _pthread_cond_xp *)*cond;
    cs = (CRITICAL_SECTION *)*mutex;
    InterlockedIncrement(&c->waiters);
    LeaveCriticalSection(cs);
    WaitForSingleObject(c->event, INFINITE);
    if (InterlockedDecrement(&c->waiters) == 0)
        ResetEvent(c->event);
    EnterCriticalSection(cs);
    return 0;
}

int pthread_cond_broadcast(intptr_t *cond)
{
    struct _pthread_cond_xp *c;
    if (*cond == _PTW32_LAZY_INIT)
        return 0; /* no waiters if never initialized */
    c = (struct _pthread_cond_xp *)*cond;
    if (c->waiters > 0)
        SetEvent(c->event);
    return 0;
}

int pthread_cond_signal(intptr_t *cond)
{
    struct _pthread_cond_xp *c;
    if (*cond == _PTW32_LAZY_INIT)
        return 0;
    c = (struct _pthread_cond_xp *)*cond;
    if (c->waiters > 0)
        SetEvent(c->event);
    return 0;
}
#endif

#endif /* _WIN32 */
