#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Hi! This is my first Managed C++ Program.");    // Console is a class defined under the namespace System.
    Console::Write("This line doesn't wrap, so the next line will appear immediately after.");
    Console::Write(L"I am Bhasamrita Sarmah");                          // L denotes that it is a wide string, i.e. each character is taking up two bytes.
    return 0;
}
