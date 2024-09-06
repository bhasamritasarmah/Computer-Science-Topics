#include "pch.h"
#include "NaturalNumbersSum.h"

TEST(SumUpToTest, PositiveNumbers) {
    EXPECT_EQ(SumUpToN(1), 1);
    EXPECT_EQ(SumUpToN(5), 15);
    EXPECT_EQ(SumUpToN(100), 5050);
}

TEST(SumUpToTest, Zero) {
    EXPECT_EQ(SumUpToN(0), 0);
}

TEST(SumUpToTest, NegativeNumbers) {
    EXPECT_EQ(SumUpToN(-5), 0);
}