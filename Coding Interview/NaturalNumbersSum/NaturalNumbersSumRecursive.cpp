/*
* Given a natural number n, add all the numbers starting from 1 up to n, and return the sum.
* E.g. If n = 4, sum = 1 + 2 + 3 + 4 = 10.
*/

#include "pch.h"
#include "NaturalNumbersSum.h"


int NaturalNumbersSumRecursive(int n)
{
	if (n <= 0)
		return 0;

	if (n == 1)
		return 1;

	return n + NaturalNumbersSumRecursive(n - 1);
}