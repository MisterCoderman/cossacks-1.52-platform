// platform/ole2.h
// Minimal COM stub for non-Windows (provides DECLARE_INTERFACE, HRESULT, GUID, etc.)
#pragma once

#ifdef _WIN32
    #include_next <ole2.h>
#else

#include <stdint.h>
#include <string.h>

typedef long HRESULT;
#define S_OK        ((HRESULT)0)
#define S_FALSE     ((HRESULT)1)
#define E_FAIL      ((HRESULT)0x80004005)
#define E_NOTIMPL   ((HRESULT)0x80004001)
#define SUCCEEDED(hr) ((HRESULT)(hr) >= 0)
#define FAILED(hr)    ((HRESULT)(hr) < 0)
#define MAKE_HRESULT(sev, fac, code) \
    ((HRESULT)(((unsigned long)(sev) << 31) | ((unsigned long)(fac) << 16) | (unsigned long)(code)))

typedef struct _GUID {
    uint32_t Data1;
    uint16_t Data2;
    uint16_t Data3;
    uint8_t  Data4[8];
} GUID, IID, CLSID;

typedef GUID* LPGUID;
typedef const GUID* LPCGUID;
typedef const GUID& REFGUID;
typedef const IID& REFIID;
typedef const CLSID& REFCLSID;

#define IsEqualGUID(a, b) (memcmp(&(a), &(b), sizeof(GUID)) == 0)
#define IsEqualIID(a, b) IsEqualGUID(a, b)

static inline bool operator==(const GUID& a, const GUID& b) {
    return memcmp(&a, &b, sizeof(GUID)) == 0;
}
static inline bool operator!=(const GUID& a, const GUID& b) {
    return memcmp(&a, &b, sizeof(GUID)) != 0;
}

// DEFINE_GUID — on non-Windows, just declare the GUID (no storage)
#ifdef INITGUID
    #define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        const GUID name = { l, w1, w2, { b1, b2, b3, b4, b5, b6, b7, b8 } }
#else
    #define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name
#endif

// COM interface macros (no-op stubs)
#define DECLARE_INTERFACE(iface) struct iface
#define DECLARE_INTERFACE_(iface, base) struct iface : public base
#define STDMETHOD(method) virtual HRESULT method
#define STDMETHOD_(type, method) virtual type method
#define PURE = 0
#define THIS_
#define THIS void
#define STDMETHODCALLTYPE

// IUnknown
struct IUnknown {
    virtual HRESULT QueryInterface(REFIID riid, void** ppv) = 0;
    virtual uint32_t AddRef() = 0;
    virtual uint32_t Release() = 0;
    virtual ~IUnknown() {}
};

#endif // _WIN32
