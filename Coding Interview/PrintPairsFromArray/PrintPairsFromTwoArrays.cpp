/*
* Given an array of n integers, and another array of m integers, print every possible pair of elements
* from the two arrays. E.g. if vec1 = {0, 7, 3} and vec2 = {-5, -1}, then possible pairs are -
* (0, -5)
* (0, -1)
* (7, -5)
* (7, -1)
* (3, -5)
* (3, -1)
* Print every pair in a new line.
* The arrangement should be in the following form - "(" + elem1 + ", " + elem2 + ")" and then a new line.
*/

#include "pch.h"
#include "PrintPairsFromArray.h"

/*
* Prints every possible pair of elements from the two arrays.
*
* @param vec1: 1st vector of integer elements.
* @param vec2: 2nd vector of integer elements.
*
* @return Doen not return anything.
*
* @note Time Complexity: Considering n and m are the lengths of the 1st and 2nd arrays respectively, O(n*m), 
*						 since for every element in the 1st array, it traverses the whole 2nd array once.
* @note Space Complexity: O(1), since it does not use any additional space inside the array.
*/
void PrintPairsFromTwoArrays(vector<int> vec1, vector<int> vec2)
{
	for (int i = 0; i < vec1.size(); i++)
		for (int j = 0; j < vec2.size(); j++)
			cout << "(" << vec1[i] << ", " << vec2[j] << ")\n";
}