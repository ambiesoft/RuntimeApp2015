
// RuntimeApp2015.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CRuntimeApp2015App:
// See RuntimeApp2015.cpp for the implementation of this class
//

class CRuntimeApp2015App : public CWinApp
{
public:
	CRuntimeApp2015App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CRuntimeApp2015App theApp;
