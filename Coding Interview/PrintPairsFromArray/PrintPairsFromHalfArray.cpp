/*
* Given an array of n integers, print the pair of every element with elements which have an index
* greater than its own. . E.g. if vec = {0, 7, 3}, then possible pairs are -
* (0, 7)
* (0, 3)
* (7, 3)
* Print every pair in a new line.
* The arrangment should be in the following form - "(" + elem1 + ", " + elem2 + ")" and then a new line.
*/

#include "pch.h"
#include "PrintPairsFromArray.h"

/*
* Prints the pair of every element with elements from the array that have an index greater than its own.
*
* @param vector<int> vec: Vector of integer elements.
*
* @return Doen not return anything.
*
* @note Time Complexity: Considering n is the length of the array, O(n^2), 
*						 since for every element in the array, it traverses about half of the array on average.
* @note Space Complexity: O(1), since it does not use any additional space inside the array.
*/
void PrintPairsFromHalfArray(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
		for (int j = i+1; j < vec.size(); j++)
			cout << "(" << vec[i] << ", " << vec[j] << ")\n";
}