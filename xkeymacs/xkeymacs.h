// xkeymacs.h : main header file for the XKEYMACS application
//

#if !defined(AFX_XKEYMACS_H__2E65B9CB_5ADB_4C3B_891F_8EFE395FBB2D__INCLUDED_)
#define AFX_XKEYMACS_H__2E65B9CB_5ADB_4C3B_891F_8EFE395FBB2D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CXkeymacsApp:
// See xkeymacs.cpp for the implementation of this class
//
#include "../xkeymacsdll/PipeName.h"

class CXkeymacsApp : public CWinApp
{
public:
	CXkeymacsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXkeymacsApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CXkeymacsApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	static bool IsWow64();
	static bool Start64bitProcess();
	static void Terminate64bitProcess();
	static void SendIPC64Message(DWORD msg);
	DECLARE_MESSAGE_MAP()
private:
	HANDLE m_hMutex;
	static HANDLE m_64bitProcessHandle;
	static PipeName m_PipeNameForIPC64;

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XKEYMACS_H__2E65B9CB_5ADB_4C3B_891F_8EFE395FBB2D__INCLUDED_)
