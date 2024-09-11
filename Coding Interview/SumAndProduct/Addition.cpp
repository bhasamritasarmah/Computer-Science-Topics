#include "pch.h"
#include "Addition.h"
#include <string>

int Addition(vector<int> vec)
{
	int sum = 0;
	for (auto num : vec)
	{
		if (num > 0 && sum > INT_MAX - num)
		{
			cout << "Integer Addition Overflow!" << endl;
			return 0;
		}

		if (num < 0 && sum < INT_MIN - num)
		{
			cout << "Integer Subtraction Underflow!" << endl;
			return 0;
		}
			
		sum += num;
	}

	return sum;
}