#include "pch.h"
#include "BinarySearch.h"

TEST(BinarySearchIterativeTest, EmptyVector) {
    vector<int> vec = {};
    int k = 5;
    EXPECT_FALSE(BinarySearchIterative(vec, k));
}

TEST(BinarySearchIterativeTest, SingleElementFound) {
    vector<int> vec = { 5 };
    int k = 5;
    EXPECT_TRUE(BinarySearchIterative(vec, k));
}

TEST(BinarySearchIterativeTest, SingleElementNotFound) {
    vector<int> vec = { 5 };
    int k = 10;
    EXPECT_FALSE(BinarySearchIterative(vec, k));
}

TEST(BinarySearchIterativeTest, MultipleElementsFound) {
    vector<int> vec = { 1, 2, 3, 3, 5, 8 };
    int k = 3;
    EXPECT_TRUE(BinarySearchIterative(vec, k));
}

TEST(BinarySearchIterativeTest, MultipleElementsNotFound) {
    vector<int> vec = { 1, 2, 3, 3, 5, 8 };
    int k = 4;
    EXPECT_FALSE(BinarySearchIterative(vec, k));
}