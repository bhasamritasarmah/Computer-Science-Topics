#pragma once
#include <vector>

using namespace std;

// Print every possible pair of elements from this vector (including pairing the element with itself).
void PrintPairsFromArray(vector<int> vec);

// Print the pair of every element with elements which are at a greater index than it's own.
void PrintPairsFromHalfArray(vector<int> vec);

// Print the pair of every element from 1st vector to every element in the 2nd vector.
void PrintPairsFromTwoArrays(vector<int> vec1, vector<int> vec2);