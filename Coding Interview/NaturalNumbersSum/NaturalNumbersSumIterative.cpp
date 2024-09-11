/*
* Given a natural number n, add all the numbers starting from 1 up to n, and return the sum.
* E.g. If n = 4, sum = 1 + 2 + 3 + 4 = 10.
*/

#include "pch.h"
#include "NaturalNumbersSum.h"

int NaturalNumbersSumIterative(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	return sum;
}