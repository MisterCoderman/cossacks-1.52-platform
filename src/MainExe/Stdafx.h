// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__33D00596_8275_4890_B17F_F9781D252D16__INCLUDED_)
#define AFX_STDAFX_H__33D00596_8275_4890_B17F_F9781D252D16__INCLUDED_

#if defined(_MSC_VER) && _MSC_VER > 1000
#pragma once
#endif

#ifdef _WIN32
    #define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

    #include <afxwin.h>         // MFC core and standard components
    #include <afxext.h>         // MFC extensions
    #include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
    #ifndef _AFX_NO_AFXCMN_SUPPORT
    #include <afxcmn.h>			// MFC support for Windows Common Controls
    #endif // _AFX_NO_AFXCMN_SUPPORT
#else
    // On non-Windows platforms, MFC is not available.
    // Include platform abstraction layer instead.
    #include "platform.h"
#endif


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__33D00596_8275_4890_B17F_F9781D252D16__INCLUDED_)
