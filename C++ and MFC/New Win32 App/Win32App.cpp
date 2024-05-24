#include<Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, TEXT("Press 'OK' and I will give you a chocolate!"), TEXT("Chocolate Gift Dialog Box"), MB_OK);

	int trial = 0;
	int response = 0;
	do
	{
		if (response == IDRETRY)
			trial = 0;

		trial++;
		switch (trial)
		{
			case 1: response = MessageBox(NULL, TEXT("Good! So, do you love Cadbury Silk? Do you want one?"), TEXT("Cadbury Silk Dialog Box"), MB_YESNOCANCEL);
					break;
			case 2: response = MessageBox(NULL, TEXT("Okay! So, do you love Snickers? Do you want one?"), TEXT("Snickers Dialog Box"), MB_YESNOCANCEL);
					break;
			case 3: response = MessageBox(NULL, TEXT("Okay! So, do you love Munch? Do you want one?"), TEXT("Munch Dialog Box"), MB_YESNOCANCEL);
					break;
			case 4: response = MessageBox(NULL, TEXT("Okay! So, do you love KitKat? Do you want one?"), TEXT("KitKat Dialog Box"), MB_YESNOCANCEL);
					break;
			case 5: response = MessageBox(NULL, TEXT("Okay! So, do you love Bournville? Do you want one?"), TEXT("Bournville Dialog Box"), MB_YESNOCANCEL);
					break;
			default:response = MessageBox(NULL, TEXT("Sorry! I don't have any more options available for you. Do you want to retry the previous options?"), TEXT("Options Exhausted Dialog Box"), MB_ABORTRETRYIGNORE);
					break;
		}
	} while (response == IDNO || response == IDRETRY);

	if (response == IDYES)
	{
		switch (trial)
		{
			case 1: MessageBox(NULL, TEXT("Congratulations! Your Cadbury Silk is on the way and will reach you shortly."), TEXT("Cadbury Silk Confirmation Dialog Box"), MB_OK);
					break;
			case 2: MessageBox(NULL, TEXT("Congratulations! Your Snickers is on the way and will reach you shortly."), TEXT("Snickers Confirmation Dialog Box"), MB_OK);
					break;
			case 3: MessageBox(NULL, TEXT("Congratulations! Your Munch is on the way and will reach you shortly."), TEXT("Munch Confirmation Dialog Box"), MB_OK);
					break;
			case 4: MessageBox(NULL, TEXT("Congratulations! Your KitKat is on the way and will reach you shortly."), TEXT("KitKat Confirmation Dialog Box"), MB_OK);
					break;
			case 5: MessageBox(NULL, TEXT("Congratulations! Your Bournville is on the way and will reach you shortly."), TEXT("Bournville Confirmation Dialog Box"), MB_OK);
					break;
		}
	}
	else if (response == IDCANCEL)
		MessageBox(NULL, TEXT("Oops! You have cancelled this game. What you really want to cancel is your Netflix subscription."), TEXT("Cancel Dialog Box"), MB_ICONEXCLAMATION);
	else if (response == IDABORT)
		MessageBox(NULL, TEXT("Oops! You have aborted the game with as much sincerity as you aborted your toxic relationship."), TEXT("Abort Dialog Box"), MB_ICONEXCLAMATION);
	else if (response == IDIGNORE)
		MessageBox(NULL, TEXT("Oops! You have ignored this game just like you ignore your life's problems."), TEXT("Ignore Dialog Box"), MB_ICONEXCLAMATION);

	MessageBox(NULL, TEXT("Are you enjoying this game? Please rate us 5 stars!"), TEXT("Question Dialog Box"), MB_ICONQUESTION);
	MessageBox(NULL, TEXT("Thanks a ton!"), TEXT("Thank You Dialog Box"), MB_OK);

	return 0;
}

/*
 * This is an explanation of the program as given by ChatGPT -
 * 
 * #include <Windows.h>: Windows header file contains 'declarations' for all of the functions and data types used in the Windows API.
 * 
 * int WINAPI WinMain(...): Entry point of a Windows application, similar to the main() function in a console application. WINAPI is a calling convention.
 * 
 * HINSTANCE hInstance: Handle to the current instance of the application. A unique identifier assigned to the program when it is loaded into memory.
 * 
 * HINSTANCE hPrevInstance: It was used in 16-bit Windows to reference a previous instance of the application but is no longer relevant and is always NULL.
 * 
 * LPSTR lpCmdLine: Command-line parameters passed to the program. It's a pointer to a null-terminated string containing the command line for the application, excluding the program name.
 * 
 * int nCmdShow: An integer value representing how the window should be displayed (e.g., minimized, maximized, or shown normally).
 * 
 * MessageBox(...): This line creates a message box window with a message, a title, and a set of buttons.
 * 
 * NULL: Indicates that the message box is associated with no window.
 * 
 * TEXT("My Message"): Second Parameter. The message to be displayed in the message box. TEXT is a macro used for defining strings that are compatible with both ANSI and Unicode.
 * 
 * TEXT("My Title"): Third Parameter. The title of the message box.
 * 
 * MB_OK: Specifies the buttons to be displayed in the message box. In this case, it's OK button only.
 * 
 * In summary, this code creates a simple Windows application that displays a message box with a message, a title, and an "OK" button when executed.
*/

/*
 * Here's a ChatGPT definition of what it means by a calling convention -
 * 
 * Calling Convention: A set of rules that determines:
 * - how parameters are passed to a function 
 * - how the function's result is returned
 * - how functions interact with the stack and manage registers during their execution
 * 
 * Different programming languages and platforms may use different calling conventions. 
 * For example, in Windows programming with the C language, the WINAPI calling convention (which stands for Windows API) is commonly used for functions in the Windows API. 
 * In this convention:
 * 1. Parameters are typically passed on the stack.
 * 2. The callee (the function being called) is responsible for cleaning up the stack after the call.
 * 
 * The stdcall calling convention is often used for functions that are part of the Windows API to ensure that the function parameters are passed in a consistent and predictable manner.
 */

/*
 * uType is a style combination of ICONS and buttons. Common values of uType are -
 * 
 * MB_OK: Message box displays "OK" button.
 * 
 * MB_ABORTRETRYIGNORE: Message box displays "Terminate", "Retry" and "Ignore" buttons.
 * 
 * MB_YESNOCANCEL: The message box displays Yes, No, and Cancel buttons.
 * 
 * MB_ICONEXCLAMATION: The exclamation mark icon is displayed in the message box.
 * 
 * MB_ICONQUESTION: The question mark icon is displayed in the message box.
 */

/*
 * The return value of this function MessageBox() can be any of the following:
 * 
 * IDABORT: The user selected the exit button.
 * 
 * IDCANCEL: The user selects the Cancel button.
 * 
 * IDCONTINUE: The user has selected the continue button.
 * 
 * IDIGNORE: the user selects the Ignore button.
 * 
 * IDNO: the user selects the No button.
 * 
 * IDOK: The user selects the OK button.
 * 
 * IDRETRY: The user has selected the retry button.
 * 
 * IDTRYAGAIN: The user has selected the Try Again button.
 * 
 * IDYES: user selects the Yes button.
 */