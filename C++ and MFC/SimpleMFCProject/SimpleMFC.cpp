#include "SimpleMFC.h"

SimpleMFC MFCSimpleProgram;						

BOOL SimpleMFC::InitInstance()					
{
	CWinAppEx::InitInstance();						// Serves as the entry point of the application.

	SetRegistryKey(_T("Hello MFC App!"));		

	AfxMessageBox(_T("Hello World, from MFC"));	

	return TRUE;
}


/*
 * #include "SimpleMFC.h": Includes the header file SimpleMFC.h, which contains the declaration of the SimpleMFC class.
 * 
 * SimpleMFC MFCSimpleProgram;: Defines a global object named MFCSimpleProgram of type SimpleMFC, effectively creating an instance of the SimpleMFC class.
 * 
 * BOOL SimpleMFC::InitInstance(): Defines the implementation of the InitInstance() member function for the SimpleMFC class.
 * 
 * CWinAppEx::InitInstance();: Calls the InitInstance() function of the base class CWinAppEx to perform any initialization tasks defined in the base class.
 * 
 * SetRegistryKey(TEXT("Hello MFC App!"));: Sets the registry key for the application. Specifies the subkey under which the application's settings will be stored in Windows registry.
 * 
 * AfxMessageBox(_T("Hello World, from MFC"));: This line displays a message box with the text "Hello World, from MFC". AfxMessageBox() is an MFC function for displaying message boxes.
 * 
 * return TRUE;: This line returns TRUE from the InitInstance() function, indicating that the initialization was successful.
 */

/*
 * TEXT() and _T() are both macros used to create portable strings that work with both ANSI and Unicode builds. One is an alias for the other.
 * 
 * The main difference is in their implementation -
 * TEXT() is a macro defined in the Windows SDK header files.
 * Whereas, _T() is a macro provided by Microsoft Visual C++.
 */

/*
 * The difference between #include "test.h" and #include <test.h> lies in how the compiler searches for the header file test.h -
 * 
 * #include "test.h": The compiler searches for the header file test.h first in the current directory (where the source file being compiled resides).
 *                    If the compiler cannot find test.h in the current directory, it then searches the standard system directories.
 * 
 * #include <test.h>: The compiler searches for the header file test.h only in the standard system directories.
 *                    It does not search in the current directory or other user-defined directories.
 */

/*
 * BOOL: A typedef defined in the Windows API header files, typically in windef.h or winnt.h. An alias for int (32 bit integer) and is used primarily in Windows programming.
 *       0 is considered as false and any non-zero value is considered to be true. It's a convention to use BOOL for boolean values in Win32 programming.
 *       While bool uses true and false keywords, BOOL uses TRUE and FALSE macros.
 */