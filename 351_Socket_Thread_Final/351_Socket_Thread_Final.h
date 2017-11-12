
// 351_Socket_Thread_Final.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMy351_Socket_Thread_FinalApp:
// See 351_Socket_Thread_Final.cpp for the implementation of this class
//

class CMy351_Socket_Thread_FinalApp : public CWinApp
{
public:
	CMy351_Socket_Thread_FinalApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMy351_Socket_Thread_FinalApp theApp;