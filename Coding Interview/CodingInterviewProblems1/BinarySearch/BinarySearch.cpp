#include <vector>
#include "pch.h"
#include "BinarySearch.h"

using namespace std;

bool BinarySearchRecursive(vector<int> vec, int low, int high, int k)
{
	return false;
}

bool BinarySearch(vector<int> vec, int k)
{
	return BinarySearchRecursive(vec, 0, vec.size()-1, k);
}

bool BinarySearchIterative(vector<int> vec, int k)
{
	int low = 0;
	int high = vec.size() - 1;
	int mid = high - (high - low) / 2;

	while (low <= high)
	{
		if (k == mid)
			return true;
		else if (k < mid)
			high = mid - 1;
		else if (k > mid)
			low = mid + 1;
	}

	return false;
}