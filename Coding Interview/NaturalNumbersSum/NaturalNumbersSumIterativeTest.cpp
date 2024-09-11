#include "pch.h"
#include "NaturalNumbersSum.h"

TEST(NaturalNumbersSumIterativeTest, PositiveNumbers) {
    EXPECT_EQ(NaturalNumbersSumIterative(1), 1);
    EXPECT_EQ(NaturalNumbersSumIterative(5), 15);
    EXPECT_EQ(NaturalNumbersSumIterative(100), 5050);
}

TEST(NaturalNumbersSumIterativeTest, Zero) {
    EXPECT_EQ(NaturalNumbersSumIterative(0), 0);
}

TEST(NaturalNumbersSumIterativeTest, NegativeNumbers) {
    EXPECT_EQ(NaturalNumbersSumIterative(-5), 0);
}