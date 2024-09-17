#include "pch.h"
#include "PrimeOrNot.h"

/*
* Given an integer, it checks whether it is prime or not. Negative number and 1 are also handled.
* 
* @param number: The integer (positive or negative), that needs to be checked.
* 
* @return Returns a boolean value indicating whether the number is prime (true) or not (false).
* 
* @note Time Complexity: Since the loop runs from 2 to root(number), it is O(root(n)).
*		Space Complexity: O(1), since no additional space is used.
* 
* @note Prime is a natural number greater than 1, which is not divisible by any number other than 1 and itself.
*/
bool IsPrime(int number)
{
	if (number < 2)
		return false;

	for (int i = 2; i * i <= number; i++)
		if (number % i == 0)
			return false;

	return true;
}