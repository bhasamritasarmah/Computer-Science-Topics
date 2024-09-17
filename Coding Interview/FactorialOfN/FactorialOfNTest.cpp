#include "pch.h"
#include "FactorialOfN.h"

TEST(FactorialOfNTest, NegativeNumbers)
{
	int number = -12;
	EXPECT_EQ(FactorialOfN(number), 0);

	number = -5240;
	EXPECT_EQ(FactorialOfN(number), 0);
}

TEST(FactorialOfNTest, NumberZero)
{
	int number = 0;
	EXPECT_EQ(FactorialOfN(number), 1);
}

TEST(FactorialOfNTest, NumbersOneAndTwo)
{
	int number = 1;
	EXPECT_EQ(FactorialOfN(number), 1);

	number = 2;
	EXPECT_EQ(FactorialOfN(number), 2);
}

TEST(FactorialOfNTest, RandomNumbers)
{
	int number = 12;
	EXPECT_EQ(FactorialOfN(number), 479001600);

	number = 3;
	EXPECT_EQ(FactorialOfN(number), 6);
	
	number = 11;
	EXPECT_EQ(FactorialOfN(number), 39916800);

	number = 9;
	EXPECT_EQ(FactorialOfN(number), 362880);

	number = 4;
	EXPECT_EQ(FactorialOfN(number), 24);
}

TEST(FactorialOfNTest, FactorialIntegerOverflow)
{
	int number = 56;
	EXPECT_EQ(FactorialOfN(number), 0);

	number = 83;
	EXPECT_EQ(FactorialOfN(number), 0);
}