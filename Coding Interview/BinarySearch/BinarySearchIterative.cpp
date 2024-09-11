/*
* Given a sorted array of intergers vec and an integer k, perform binary search to find whether k exists
* int the array or not. Return true if k exists and false otherwise.
* E.g. vec: [1, 2, 3, 4, 5], k = 6. Return false because k does not exist in vec.
* Use the iterative method of binary search.
*/

#include "pch.h"
#include "BinarySearch.h"

bool BinarySearchIterative(vector<int> vec, int k)
{
	int low = 0;
	int high = vec.size() - 1;

	while (low <= high)
	{
		int mid = high - (high - low) / 2;

		if (vec[mid] == k)
			return true;

		else if (vec[mid] > k)
			high = mid - 1;

		else if (vec[mid] < k)
			low = low + 1;
	}

	return false;
}