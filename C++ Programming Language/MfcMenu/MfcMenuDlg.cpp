
// MfcMenuDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MfcMenu.h"
#include "MfcMenuDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMfcMenuDlg::CMfcMenuDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCMENU_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMfcMenuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_TEXT, m_StaticText);
}

BEGIN_MESSAGE_MAP(CMfcMenuDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_RBUTTONDOWN()
	ON_WM_DRAWITEM()
	ON_WM_MEASUREITEM()
END_MESSAGE_MAP()


// CMfcMenuDlg message handlers

BOOL CMfcMenuDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMfcMenuDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		//CAboutDlg dlgAbout;
		//dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMfcMenuDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMfcMenuDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMfcMenuDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
	// Get the rectangle of the static text control
	CRect rect;
	m_StaticText.GetWindowRect(&rect); // This line uses m_StaticText

	// Convert screen coordinates to client coordinates
	ScreenToClient(&rect);

	// Check if the right-click occurred within the static text area
	if (rect.PtInRect(point))
	{
		// Load the context menu resource.
		CMenu menu;
		menu.LoadMenu(IDR_MENU);
		//menu.AppendMenu(MF_OWNERDRAW, ID_CIRCLE, _T("Circle"));

		// Get the context menu.
		CMenu* pContextMenu = menu.GetSubMenu(0);
		if (pContextMenu != nullptr)
		{
			pContextMenu->ModifyMenu(ID_CIRCLE, MF_BYCOMMAND | MF_OWNERDRAW, ID_CIRCLE, _T("Circle"));
			pContextMenu->ModifyMenu(ID_RECTANGLE, MF_POPUP | MF_OWNERDRAW, (UINT_PTR)pContextMenu->GetSubMenu(1)->m_hMenu, _T("Rectangle"));
			// Access submenu for "Rectangle"
			CMenu* pSubMenu = pContextMenu->GetSubMenu(1);
			if (pSubMenu != nullptr)
			{
				// Modify submenu items as owner-drawn
				pSubMenu->ModifyMenu(ID_RECTANGLE_SQUARE, MF_BYCOMMAND | MF_OWNERDRAW, ID_RECTANGLE_SQUARE, _T("Square"));
			}
			pContextMenu->ModifyMenu(ID_HEXAGON, MF_BYCOMMAND | MF_OWNERDRAW, ID_HEXAGON, _T("Hexagon"));
			pContextMenu->ModifyMenu(ID_TRIANGLE, MF_BYCOMMAND | MF_OWNERDRAW, ID_TRIANGLE, _T("Triangle"));

			

			ClientToScreen(&point);

			//Display the context menu.
			pContextMenu->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, this);
		}
	}

	// Call the base class method to handle other right-click events
	CDialogEx::OnRButtonDown(nFlags, point);
}

void CMfcMenuDlg::OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct)
{
	if (lpDrawItemStruct->CtlType == ODT_MENU) // Check if it's a menu item
	{
		CDC dc;
		dc.Attach(lpDrawItemStruct->hDC); // Attach the device context

		// Set background color for selected and unselected states
		COLORREF crBackground;
		if (lpDrawItemStruct->itemState & ODS_SELECTED)
		{
			crBackground = RGB(255, 0, 0); // Red background when selected
		}
		else
		{
			crBackground = RGB(0, 0, 0); // Black background otherwise
		}

		// Fill the background with the chosen color
		CBrush brush(crBackground);
		dc.FillRect(&lpDrawItemStruct->rcItem, &brush);

		// Set text color
		COLORREF crText = RGB(255, 255, 255); // White text
		dc.SetTextColor(crText);
		dc.SetBkMode(TRANSPARENT); // Transparent background for text

		// Check if it's the popup (i.e., "Rectangle")
		if (lpDrawItemStruct->itemID == (UINT)-1)  // No ID means it's a popup
		{
			dc.DrawText(_T("Rectangle"), &lpDrawItemStruct->rcItem, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		}
		else
		{
			// Draw the text for regular menu items
			CString strText;
			switch (lpDrawItemStruct->itemID)
			{
			case ID_CIRCLE:
				strText = _T("Circle");
				break;
			case ID_RECTANGLE_SQUARE:
				strText = _T("Square");
				break;
			case ID_HEXAGON:
				strText = _T("Hexagon");
				break;
			case ID_TRIANGLE:
				strText = _T("Triangle");
				break;
			default:
				strText = _T("Rectangle");
			}

			// Draw the text centered in the menu item rectangle
			dc.DrawText(strText, &lpDrawItemStruct->rcItem, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		}

		dc.Detach(); // Detach the device context
	}
	else
	{
		CDialogEx::OnDrawItem(nIDCtl, lpDrawItemStruct); // Default handling for other controls
	}
}


void CMfcMenuDlg::OnMeasureItem(int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct)
{
	if (lpMeasureItemStruct->CtlType == ODT_MENU) // Check if it's a menu item
	{
		// Get the device context for measuring text size
		CDC dc;
		dc.CreateCompatibleDC(nullptr);
		CFont* pFont = CFont::FromHandle((HFONT)GetStockObject(DEFAULT_GUI_FONT));
		CFont* pOldFont = dc.SelectObject(pFont);

		// Get the menu item text
		CString strText;
		switch (lpMeasureItemStruct->itemID)
		{
		case ID_CIRCLE:
			strText = _T("Circle");
			break;
		case ID_RECTANGLE:
			strText = _T("Rectangle");
			break;
		case ID_RECTANGLE_SQUARE:
			strText = _T("Square");
			break;
		case ID_HEXAGON:
			strText = _T("Hexagon");
			break;
		case ID_TRIANGLE:
			strText = _T("Triangle");
			break;
		default:
			strText = _T("");
		}

		// Measure the text size
		CSize textSize = dc.GetTextExtent(strText);

		// Add some padding for the menu item
		lpMeasureItemStruct->itemWidth = textSize.cx + 20; // Adjust width
		lpMeasureItemStruct->itemHeight = textSize.cy + 10; // Adjust height

		// Cleanup
		dc.SelectObject(pOldFont);
		dc.DeleteDC();
	}
	else
	{
		CDialogEx::OnMeasureItem(nIDCtl, lpMeasureItemStruct); // Default handling for other controls
	}
}
