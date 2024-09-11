#include "pch.h"
#include <vector>
#include "Addition.h"

TEST(AdditionTest, NullVector)
{
	vector<int> vec = {};
	EXPECT_EQ(Addition(vec), 0);
}

TEST(AdditionTest, ZeroOnly)
{
	vector<int> vec = { 0 };
	EXPECT_EQ(Addition(vec), 0);
}

TEST(AdditionTest, PositiveNumbersAll)
{
	vector<int> vec = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45 };
	EXPECT_EQ(Addition(vec), 529);

	vec = { 9456788, 45678389, 3648748 };
	EXPECT_EQ(Addition(vec), 58783925);
}

TEST(AdditionTest, NegativeNumbersAll)
{
	vector<int> vec = { -5, -7, -20, -93, -68 };
	EXPECT_EQ(Addition(vec), -193);

	vec = { -1000000, -6528930, -3, -349340 };
	EXPECT_EQ(Addition(vec), -7878273);
}

TEST(AdditionTest, PositiveNegativeZeroNumbers)
{
	vector<int> vec = { -20, 3, 0, -4, -5, 100, 66, -7 };
	EXPECT_EQ(Addition(vec), 133);
}

TEST(AdditionTest, PositiveNegativeNumbers)
{
	vector<int> vec = { -55, -100000, 34654379, -34567, 43249, 34829 };
	EXPECT_EQ(Addition(vec), 34597835);
}

TEST(AdditionTest, PositiveNumbersOverflow)
{
	vector<int> vec = { 345678964, 1, 67, 987634567, 456780239, 456896338 };
	EXPECT_EQ(Addition(vec), 0);	// I want the function to print that sum has overflowed and return 0.
}

TEST(AdditionTest, NegativeNumbersOverflow)
{
	vector<int> vec = { -35678908, -5, -56789, -987657654, -456789780, -456789, -987654322 };
	EXPECT_EQ(Addition(vec), 0);    // I want the function to print that sum has overflowed and return 0.
}
