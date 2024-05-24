#include "ComplexMFC.h"
#include "MainFrm.h"

ComplexMFC MFCApp;

BOOL ComplexMFC::InitInstance()
{
	CWinAppEx::InitInstance();

	SetRegistryKey(TEXT("Hello Complex MFC App"));

	m_pMainWnd = new MainFrm(); 

	m_pMainWnd->ShowWindow(SW_SHOW);

	m_pMainWnd->UpdateWindow();

	return TRUE;
}


/*
 * CWnd: Base class representing a window in a Windows application.
 * 
 * CWinThread: Class representing a thread of execution in an MFC application.
 * 
 * m_pMainWnd: Member variable in CWinThread. Pointer to the main window associated with the thread.
 * 
 * CWnd* CWinThread::m_pMainWnd;: Declares a static member variable m_pMainWnd of type CWnd* within the CWinThread class. This declaration only allocates memory for the variable.
 *                                It doesn't initialise it.
 * 
 * m_pMainWnd = new MainFrm();: Dynamically allocates memory to a new instance of the MainFrm class and assigns the address to the m_pMainWnd pointer.
 * 
 * m_pMainWnd->ShowWindow(SW_SHOW);: Calls the ShowWindow method (member function of CWnd class) on the main window pointer to display it in its normal state (instructed by SW_SHOW).
 * 
 * m_pMainWnd->UpdateWindow();: When this method (member function of CWnd class) is called on the main window, it triggers the window's WM_PAINT message handler, causing the window
 *                              to repaint its client area. The client area is the region of the windows where the application content is typically displayed. This is useful after
 *                              showing or resizing a window to ensure that any pending paint operations are completed and the window is visually up-to-date.
 */