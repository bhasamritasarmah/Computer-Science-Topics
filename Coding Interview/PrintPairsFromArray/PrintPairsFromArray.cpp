/*
* Given an array of n integers, print every possible pair of elements (including a pair of the element
* with its own). E.g. if vec = {0, 7, 3}, then possible pairs are - 
* (0, 0)
* (0, 7) 
* (0, 3) 
* (7, 0) 
* (7, 7) 
* (7, 3) 
* (3, 0) 
* (3, 7) 
* (3, 3)
* Print every pair in a new line.
* The arrangment should be in the following form - "(" + elem1 + ", " + elem2 + ")" and then a new line.
*/

#include "pch.h"
#include "PrintPairsFromArray.h"

/*
* Prints every possible pair of elements from the array.
* 
* @param vec: Vector of integer elements.
* 
* @return Doen not return anything.
* 
* @note Time Complexity: Considering n is the length of the array, O(n^2), 
*						 since for every element in the array, it traverses the whole array once.
* @note Space Complexity: O(1), since it does not use any additional space inside the array.
*/
void PrintPairsFromArray(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
		for (int j = 0; j < vec.size(); j++)
			cout << "(" << vec[i] << ", " << vec[j] << ")\n";
}