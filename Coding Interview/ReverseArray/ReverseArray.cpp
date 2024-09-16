#include "pch.h"
#include "ReverseArray.h"

/*
* Given an array of n integers vec, the function reverses the elements in the array.
* It runs to the half of the array (in case of n being even) or one element less than the half of the array
* (in case of n being odd) and swaps the elements of either side of the halfway line.
* Sample case 1: vec { 1, 2, 3 }
* Sample output 1: vec { 3, 2, 1 }
* Sample case 2: vec { 6, 7, 8, 9 }
* Sample output 2: vec { 9, 8, 7, 6 }
* 
* @param vec: A vector of integer elements.
* 
* @return Returns the vector vec by reversing its elements in place.
* 
* @note Time Complexity: Considering the length of the vector is n, O(n), since it traverses of the array.
* @note Space Complexity: O(1), since no extra space is used inside the function for calculation.
* @note swap() function swaps elements of an array by reference.
*/
vector<int> ReverseArray(vector<int> vec)
{
	for (int i = 0; i < vec.size() / 2; i++)
		swap(vec[i], vec[vec.size() - 1 - i]);

	return vec;
}