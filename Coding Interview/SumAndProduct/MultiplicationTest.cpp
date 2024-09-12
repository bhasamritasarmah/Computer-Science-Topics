#include "pch.h"
#include <vector>
#include "Multiplication.h"

TEST(MultiplicationTest, NullVector)
{
	vector<int> vec = {};
	EXPECT_EQ(Multiplication(vec), 1);
}

TEST(MultiplicationTest, ZeroOnly)
{
	vector<int> vec = { 0 };
	EXPECT_EQ(Multiplication(vec), 0);
}

TEST(MultiplicationTest, PositiveNumbersAll)
{
	vector<int> vec = { 1, 3, 5, 7, 9, 11, 13, 15 };
	EXPECT_EQ(Multiplication(vec), 2027025);

	vec = { 945, 4567, 36 };
	EXPECT_EQ(Multiplication(vec), 155369340);
}

TEST(MultiplicationTest, NegativeNumbersAll)
{
	vector<int> vec = { -5, -7, -20, -93, -68 };
	EXPECT_EQ(Multiplication(vec), -4426800);

	vec = { -100, -6590, -3, -490 };
	EXPECT_EQ(Multiplication(vec), 968730000);
}

TEST(MultiplicationTest, PositiveNegativeZeroNumbers)
{
	vector<int> vec = { -20, 3, 0, -4, -5, 100, 66, -7 };
	EXPECT_EQ(Multiplication(vec), 0);
}

TEST(MultiplicationTest, PositiveNegativeNumbers)
{
	vector<int> vec = { -55, -1, 37, -456, 48 };
	EXPECT_EQ(Multiplication(vec), -44542080);
}

TEST(MultiplicationTest, PositiveNumbersOverflow)
{
	vector<int> vec = { 345678964, 1, 67, 987634567, 456780239, 456896338 };
	EXPECT_EQ(Multiplication(vec), 1);	// I want the function to print that product has overflowed and return 1.
}

TEST(MultiplicationTest, NegativeNumbersOverflow)
{
	vector<int> vec = { -35678908, -5, -56789, -987657654, -456789780, -456789, -987654322 };
	EXPECT_EQ(Multiplication(vec), 1);    // I want the function to print that product has overflowed and return 1.
}
