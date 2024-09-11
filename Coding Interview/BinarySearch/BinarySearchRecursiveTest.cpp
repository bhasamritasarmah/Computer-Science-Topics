#include "pch.h"
#include "BinarySearch.h"

TEST(BinarySearchRecursiveTest, EmptyVector) {
    vector<int> vec = {};
    int k = 5;
    EXPECT_FALSE(BinarySearchRecursive(vec, k));
}

TEST(BinarySearchRecursiveTest, SingleElementFound) {
    vector<int> vec = { 5 };
    int k = 5;
    EXPECT_TRUE(BinarySearchRecursive(vec, k));
}

TEST(BinarySearchRecursiveTest, SingleElementNotFound) {
    vector<int> vec = { 5 };
    int k = 10;
    EXPECT_FALSE(BinarySearchRecursive(vec, k));
}

TEST(BinarySearchRecursiveTest, MultipleElementsFound) {
    vector<int> vec = { 1, 2, 3, 3, 5, 8 };
    int k = 3;
    EXPECT_TRUE(BinarySearchRecursive(vec, k));
}

TEST(BinarySearchRecursiveTest, MultipleElementsNotFound) {
    vector<int> vec = { 1, 2, 3, 3, 5, 8 };
    int k = 4;
    EXPECT_FALSE(BinarySearchRecursive(vec, k));
}