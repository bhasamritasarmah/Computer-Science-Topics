/*
* Given a natural number n, find the sum of the sequence created by all the adjacent pairs added together.
* E.g. if n = 2, then sumSequence = (0+1) + (1+2) = 1 + 3 = 4.
*/

#include "pch.h"
#include "PairSumSequence.h"

int PairSum(int num1, int num2)
{
	return num1 + num2;
}

int PairSumSequence(int n)
{
	int sumSequence = 0;
	for (int i = 0; i < n; i++)
		sumSequence += PairSum(i, i + 1);

	return sumSequence;
}

