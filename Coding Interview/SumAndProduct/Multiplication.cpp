#include "pch.h"
#include "Multiplication.h"

int Multiplication(vector<int> vec)
{
	int prod = 1;
	for (auto num : vec)
	{
		if ((num > 0 && prod > 0 && prod > INT_MAX / num) ||
			(num < 0 && prod < 0 && prod > abs(INT_MAX / num)))
		{
			cout << "Integer Multiplication Overflow!" << endl;
			return 1;
		}

		if ((num < 0 && prod > 0 && prod > INT_MIN / num) ||
			(num > 0 && prod < 0 && prod < INT_MIN / num))
		{
			cout << "Integer Multiplication Underflow!" << endl;
			return 1;
		}

		prod *= num;
	}

	return prod;
}