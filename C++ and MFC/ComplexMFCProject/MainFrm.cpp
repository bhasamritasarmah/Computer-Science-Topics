#include "MainFrm.h"
#include "ComplexMFC.h"

MainFrm::MainFrm(void)
{
	Create(NULL, _T("My Main Window"));
}

BEGIN_MESSAGE_MAP(MainFrm, CFrameWndEx)

	ON_WM_PAINT()

	ON_WM_LBUTTONDOWN()

END_MESSAGE_MAP()

void MainFrm::OnPaint()
{
	CPaintDC dc(this);
	CRect rc;
	GetClientRect(&rc);

	dc.DrawText(TEXT("Hello World! This is a complex MFC Program."), &rc, DT_VCENTER|DT_SINGLELINE|DT_RIGHT);
}

void MainFrm::OnLButtonDown(UINT nFlags, CPoint point)
{
	AfxMessageBox(TEXT("You pressed the left mouse button! So, you are a lefty!"));
	CFrameWndEx::OnLButtonDown(nFlags, point);
}


/*
 * Constructor in C++: A special member function of a class that is automatically called when an instance (object) of the class is created. 
 *                     Its main purpose is to initialize the object's data members and prepare the object for use.
 * 
 * Here are some key points about constructors -
 * Name: The constructor has the same name as the class.
 * No Return Type: Constructors do not have a return type, not even void.
 * Implicit Invocation: Constructors are invoked implicitly when an object is created, either through direct instantiation or dynamic memory allocation.
 * Multiple Constructors: A class can have multiple constructors, each with different parameters. This is known as constructor overloading.
 * Default Constructor: If no constructor is explicitly defined in the class, the compiler provides a default constructor, which initializes the data members to default values.
 *
 * Constructor Definition (MainFrm::MainFrm(void)) -
 * Inside the constructor, the Create method is called to create the main window. 
 * Create(NULL, _T("My Main Window")): Creates the main window with a title "My Main Window". NULL indicates that the main window doesn't have a parent window.
 */

/*
 * Message Map: A mechanism used to associate Windows messages with their respective message handler functions in MFC classes.
 *
 * Message Map Definition (BEGIN_MESSAGE_MAP and END_MESSAGE_MAP):
 * BEGIN_MESSAGE_MAP and END_MESSAGE_MAP macros are used to define the message map for the MainFrm class.
 * MainFrm is specified as the class for which the message map is defined.
 * CFrameWndEx is the base class of MainFrm, and it provides message map functionality.
 * ON_WM_PAINT() and ON_WM_LBUTTONDOWN() macros map the WM_PAINT and WM_LBUTTONDOWN messages to their respective handler functions.
 * ON_WM_PAINT(): This macro specifies that the WM_PAINT message should be handled by the OnPaint() function. When the window receives a WM_PAINT message, 
 *                the MFC framework automatically calls the OnPaint() function because it knows from the message map that OnPaint() is the designated handler for WM_PAINT.
 */

/*
 * void MainFrm::OnPaint() -
 * CPaintDC dc(this);: CPaintDC (DC means device context) is a class provided by MFC for painting on the client area of a window during a paint operation. 
 *                     dc is an instance of CPaintDC created for the main window (this).
 * CRect rc;: CRect is a class provided by MFC for representing a rectangle. rc is an instance of CRect created to store the dimensions of the client area of the main window.
 * GetClientRect(&rc);: GetClientRect() is a Windows API function, which is used to retrieve the dimensions of the client area of the main window and store them in the rc object. 
 * dc.DrawText(TEXT("Hello World! This is a complex MFC Program."), &rc, DT_VCENTER|DT_SINGLELINE|DT_RIGHT);: dc.DrawText() is a method provided by CPaintDC for drawing text 
 *                      on a device context (dc). This line draws the text "Hello World! This is a complex MFC Program." on the client area of the main window using the device context dc.
 *                      DT_VCENTER|DT_SINGLELINE|DT_RIGHT are flags that specify the text alignment. DT_VCENTER aligns the text vertically in the center, 
 *                      DT_SINGLELINE ensures that the text is displayed as a single line, and DT_RIGHT aligns the text to the right within the rectangle.
 */

/*
 * void MainFrm::OnLButtonDown(UINT nFlags, CPoint point) -
 * AfxMessageBox(TEXT("..."));: AfxMessageBox() is a function provided by the MFC framework for displaying a message box.
 * CFrameWndEx::OnLButtonDown(nFlags, point);: CFrameWndEx is the base class of MainFrm, and OnLButtonDown() is a virtual function defined in CFrameWndEx for 
 *                                             handling the WM_LBUTTONDOWN message.
 */