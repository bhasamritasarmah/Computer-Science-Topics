#pragma once							

#include<sdkddkver.h>				
#include<afxwin.h>						
#include<afxwinappex.h>					
#include<afxframewndex.h>				


class SimpleMFC: public CWinAppEx		
{
public:
	virtual BOOL InitInstance();		
};



/*
 * #pragma once: A preprocessor directive. Ensures contents of the header file are included only once in a compilation unit. 
 *               Including the header file multiple times can cause compilation errors due to redefinition of symbols.
 * 
 * #include<sdkddkver.h>: sdkddkver.h defines macros that specify the version of the Windows SDK(Software Development Kit) being used. 
 *                        These macros can be used to conditionally compile parts of the code based on the Windows SDK version. 
 *						  Excluding it doesn't throw errors in this code, but including it ensures portability and maintainability.
 * 
 * #include<afxwin.h>: afxwin.h, the fundamental MFC header file, contains declarations for MFC classes and functions needed for Windows programming using MFC.
 *                     Excluding it doesn't throw errors in this code. But it is crucial to include this header file in MFC programs to ensure expandibility and portability.
 * 
 * #include<afxwinappex.h>: afxwinappex.h, an MFC header file, contains declarations for the extended application class CWinAppEx.
 * 
 * #include<afxframewndex.h>: afxframewndex.h, an MFC header file, contains declarations for the extended window frame class CFrameWndEx and its functionality.
 *                            Excluding it doesn't throw errors in this code. But it is crucial to include this header file in MFC programs to ensure expandibility and portability.
 * 
 * class SimpleMFC: public CWinAppEx: Declares a class named SimpleMFC that inherits from the MFC class CWinAppEx. This class represents this application.
 * 
 * public: This keyword specifies that the members following it are accessible from outside the class.
 * 
 * virtual BOOL InitInstance();: This line declares a virtual member function InitInstance() that returns a boolean value (BOOL). 
 *                               A virtual member function is a function declared within a class in C++ that can be overridden by a function with the same signature 
 *                               (i.e., same name and parameter list) in a derived class.
 *                               Will be overridden in the derived class to perform initialization tasks when the application starts.
 *                               Eliminating the declaration of InitInstance() as a virtual function in the base class would disrupt the intended polymorphic behavior and 
 *                               customization capabilities provided by the base class. It would likely lead to compilation errors and 
 *                               hinder the maintainability and extensibility of the codebase.
 */

/*
 * CWinAppEx is a class provided by MFC library. A framework for building Windows applications. It serves as the base class for an MFC application. It's functionalities are -
 * 
 * Application Initialization and Configuration:
 * 
 * InitInstance(): Called during application initialization. Performs tasks, such as creating the main application window, setting up the application's user interface, 
 *                 and initializing any resources required by the application.
 * 
 * ExitInstance(): Called when the application is about to terminate. Performs cleanup tasks, release resources, and perform any necessary finalization before the application exits.
 * 
 * PreTranslateMessage(): Used to translate and dispatch messages before they are sent to the main message pump. 
 *                        Allows to intercept and handle messages before they are processed by the application's message loop.
 * 
 * 
 * Registry and Application Settings:
 * 
 * SetRegistryKey(): Sets the registry key under which the application's settings are stored in the Windows registry. 
 *                   Specifies the location where the application's configuration data is stored.
 * 
 * LoadStdProfileSettings(): Loads standard application settings from the registry, such as window positions, toolbar configurations, and recent file lists. 
 *                           Initializes the application's settings based on the values stored in the registry.
 * 
 * SaveStdProfileSettings(): Saves standard application settings to the registry. Allows to persist the application's configuration changes, 
 *                           such as window positions or user preferences, to the registry.
 * 
 * 
 * Message Handling:
 * 
 * Run(): Starts the application's message loop, which retrieves and dispatches messages from the operating system message queue to the appropriate window procedures.
 * 
 * ProcessMessageFilter(): Used to process a message filter for the application. 
 *                         Allows to intercept and handle messages at the application level before they are dispatched to individual windows.
 *
 *
 * Resource Management:
 * 
 * LoadState(): Loads the application's state from a storage object, such as a file or stream. 
 *              Allows to restore the application's state, such as window positions or user preferences, from a previously saved state.
 * 
 * SaveState(): Saves the application's state to a storage object. Allows to persist the application's state, such as window positions or user preferences, 
 *              to a storage medium for later retrieval.
 */