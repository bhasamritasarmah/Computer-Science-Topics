#include <afx.h>
#include <afxwin.h>	
#include "IntroToMacros_Ch2.h"

CSimpleFrame::CSimpleFrame() 
{
	// Create the window's frame
	Create(NULL, _T("IntroToMacrosApp"));
}

#ifdef _DEBUG
void CSimpleFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CSimpleFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif // _DEBUG






BOOL SimpleApp::InitInstance()
{
	// Use a pointer to the window's frame application to use the window.
	CSimpleFrame* Tester = new CSimpleFrame();
	m_pMainWnd = Tester;

	// Show the window
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();

	return TRUE;
}


