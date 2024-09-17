#include "pch.h"
#include "PrimeOrNot.h"

TEST(PrimeOrNotTest, NegativeNumbers)
{
	int number = -5;
	EXPECT_FALSE(IsPrime(number));

	number = -50173;
	EXPECT_FALSE(IsPrime(number));
}

TEST(PrimeOrNotTest, NumberOne)
{
	int number = 1;
	EXPECT_FALSE(IsPrime(number));
}

TEST(PrimeOrNotTest, NumberTwo)
{
	int number = 2;
	EXPECT_TRUE(IsPrime(number));
}

TEST(PrimeOrNotTest, RandomNumbers)
{
	int number = 13;
	EXPECT_TRUE(IsPrime(number));

	number = 25;
	EXPECT_FALSE(IsPrime(number));

	number = 97;
	EXPECT_TRUE(IsPrime(number));

	number = 181;
	EXPECT_TRUE(IsPrime(number));

	number = 1937349;
	EXPECT_FALSE(IsPrime(number));
}