#include "pch.h"
#include "FactorialOfN.h"

/*
* Given an integer number, it gives the factorial of that number. The storage for int cannot
* hold a factorial numbers greater than 12, so beyond 12, the cases are considered as overflow.
* 
* @param number: The integer number whose factorial has to be found out.
* 
* @return Returns the factorial of the number. If the number is out of range, it returns 0.
* 
* @note Time Complexity: The recursion touches every number upto n, so it is O(n).
*		Space Complexity: Stack space is required to store every number up to n, so it is O(n).
* 
* @note The factorial of a number is the product of every natural number upto itself. 
*		Negative numbers have no factorial.
*/
int FactorialOfN(int number)
{
	if (number < 0 || number > 12)
		return 0;

	if (number == 0 || number == 1)
		return 1;

	return number * FactorialOfN(number - 1);
}