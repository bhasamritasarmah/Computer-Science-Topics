#include "pch.h"
#include "PairSumSequence.h"

TEST(PairSumSequenceTest, PositiveNumbers) {
    EXPECT_EQ(PairSumSequence(1), 1);
    EXPECT_EQ(PairSumSequence(5), 25);
    EXPECT_EQ(PairSumSequence(36), 1296);
}

TEST(PairSumSequenceTest, Zero) {
    EXPECT_EQ(PairSumSequence(0), 0);
}

TEST(PairSumSequenceTest, NegativeNumbers) {
    EXPECT_EQ(PairSumSequence(-5), 0);
}