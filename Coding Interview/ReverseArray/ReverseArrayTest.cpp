#include "pch.h"
#include "ReverseArray.h"

TEST(ReverseArrayTest, NullVector)
{
	vector<int> inVec = {};
	vector<int> outVec = {};

	EXPECT_EQ(ReverseArray(inVec), outVec);
}

TEST(ReverseArrayTest, SingletonVector)
{
	vector<int> inVec = { 4 };
	vector<int> outVec = { 4 };

	EXPECT_EQ(ReverseArray(inVec), outVec);
}

TEST(ReverseArrayTest, TwoElementsVector)
{
	vector<int> inVec = { -5, 2 };
	vector<int> outVec = { 2, -5 };

	EXPECT_EQ(ReverseArray(inVec), outVec);
}

TEST(ReverseArrayTest, OddLengthVector)
{
	vector<int> inVec = { -10, 8, 4, -2, 0 };
	vector<int> outVec = { 0, -2, 4, 8, -10 };

	EXPECT_EQ(ReverseArray(inVec), outVec);
}

TEST(ReverseArrayTest, EvenLengthVector)
{
	vector<int> inVec = { -512, 729, -25, 12, 44, -36 };
	vector<int> outVec = { -36, 44, 12, -25, 729, -512 };

	EXPECT_EQ(ReverseArray(inVec), outVec);
}