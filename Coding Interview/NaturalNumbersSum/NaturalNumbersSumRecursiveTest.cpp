#include "pch.h"
#include "NaturalNumbersSum.h"

TEST(NaturalNumbersSumRecursiveTest, PositiveNumbers) {
    EXPECT_EQ(NaturalNumbersSumRecursive(1), 1);
    EXPECT_EQ(NaturalNumbersSumRecursive(5), 15);
    EXPECT_EQ(NaturalNumbersSumRecursive(100), 5050);
}

TEST(NaturalNumbersSumRecursiveTest, Zero) {
    EXPECT_EQ(NaturalNumbersSumRecursive(0), 0);
}

TEST(NaturalNumbersSumRecursiveTest, NegativeNumbers) {
    EXPECT_EQ(NaturalNumbersSumRecursive(-5), 0);
}