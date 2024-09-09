#include "pch.h"
#include "BinarySearch.h"
#include <vector>

TEST(BinarySearchTest, EmptyVector) {
    std::vector<int> vec = {};
    int k = 5;
    EXPECT_FALSE(BinarySearch(vec, k));
}

TEST(BinarySearchTest, SingleElementFound) {
    std::vector<int> vec = { 5 };
    int k = 5;
    EXPECT_TRUE(BinarySearch(vec, k));
}

TEST(BinarySearchTest, SingleElementNotFound) {
    std::vector<int> vec = { 5 };
    int k = 10;
    EXPECT_FALSE(BinarySearch(vec, k));
}

TEST(BinarySearchTest, MultipleElementsFound) {
    std::vector<int> vec = { 1, 2, 3, 3, 5, 8 };
    int k = 3;
    EXPECT_TRUE(BinarySearch(vec, k));
}

TEST(BinarySearchTest, MultipleElementsNotFound) {
    std::vector<int> vec = { 1, 2, 3, 3, 5, 8 };
    int k = 4;
    EXPECT_FALSE(BinarySearch(vec, k));
}