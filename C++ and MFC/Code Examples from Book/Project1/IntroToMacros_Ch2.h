#pragma once
#include <afx.h>
#include <afxwin.h>

class CSimpleFrame : public CFrameWnd
{
public:
	CSimpleFrame();
	DECLARE_DYNCREATE(CSimpleFrame)

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif // _DEBUG
};

IMPLEMENT_DYNCREATE(CSimpleFrame, CFrameWnd)





struct SimpleApp : public CWinApp
{
	BOOL InitInstance();
};

SimpleApp theApp;