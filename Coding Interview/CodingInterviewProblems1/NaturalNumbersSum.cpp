#include "NaturalNumbersSum.h"
#include "pch.h"

int SumUpToN(int n)
{
	if (n <= 0)
		return 0;

	if (n == 1)
		return 1;

	return n + SumUpToN(n - 1);
}


