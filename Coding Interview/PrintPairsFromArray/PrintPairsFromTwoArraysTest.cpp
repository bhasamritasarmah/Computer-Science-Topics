#include "pch.h"
#include "PrintPairsFromArray.h"

TEST(PrintPairsFromTwoArraysTest, EmptyVectors) {
    vector<int> vec1 = {};
    vector<int> vec2 = {};
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromTwoArrays(vec1, vec2));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());  // Save old buffer
    PrintPairsFromTwoArrays(vec1, vec2);
    cout.rdbuf(oldCoutBuffer);                              // Restore old buffer
    string output = buffer.str();
    string expectedOutput = "";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromTwoArraysTest, EmptyAndFullVectors) {
    vector<int> vec1 = {};
    vector<int> vec2 = {-9, 0, 2, 7};
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromTwoArrays(vec1, vec2));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());  // Save old buffer
    PrintPairsFromTwoArrays(vec1, vec2);
    cout.rdbuf(oldCoutBuffer);                              // Restore old buffer
    string output = buffer.str();
    string expectedOutput = "";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromTwoArraysTest, FullAndEmptyVectors) {
    vector<int> vec1 = { -9, 0, 2, 7 };
    vector<int> vec2 = {};
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromTwoArrays(vec1, vec2));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());  // Save old buffer
    PrintPairsFromTwoArrays(vec1, vec2);
    cout.rdbuf(oldCoutBuffer);                              // Restore old buffer
    string output = buffer.str();
    string expectedOutput = "";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromTwoArraysTest, SingletonAndFullVectors) {
    vector<int> vec1 = { 1 };
    vector<int> vec2 = { 5, -7, 100, 0 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromTwoArrays(vec1, vec2));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());
    PrintPairsFromTwoArrays(vec1, vec2);
    cout.rdbuf(oldCoutBuffer);
    string output = buffer.str();
    string expectedOutput = "(1, 5)\n(1, -7)\n(1, 100)\n(1, 0)\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromTwoArraysTest, FullAndSingletonVectors) {
    vector<int> vec1 = { 5, -7, 100, 0 };
    vector<int> vec2 = { -256 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromTwoArrays(vec1, vec2));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());
    PrintPairsFromTwoArrays(vec1, vec2);
    cout.rdbuf(oldCoutBuffer);
    string output = buffer.str();
    string expectedOutput = "(5, -256)\n(-7, -256)\n(100, -256)\n(0, -256)\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromTwoArraysTest, FullVectors) {
    vector<int> vec1 = { -1, 0, 8, -5, 6 };
    vector<int> vec2 = { -12, 60, 84, -512, 400, -33 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromTwoArrays(vec1, vec2));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());
    PrintPairsFromTwoArrays(vec1, vec2);
    cout.rdbuf(oldCoutBuffer);
    string output = buffer.str();
    string expectedOutput = "(-1, -12)\n(-1, 60)\n(-1, 84)\n(-1, -512)\n(-1, 400)\n(-1, -33)\n"
                            "(0, -12)\n(0, 60)\n(0, 84)\n(0, -512)\n(0, 400)\n(0, -33)\n"
                            "(8, -12)\n(8, 60)\n(8, 84)\n(8, -512)\n(8, 400)\n(8, -33)\n"
                            "(-5, -12)\n(-5, 60)\n(-5, 84)\n(-5, -512)\n(-5, 400)\n(-5, -33)\n"
                            "(6, -12)\n(6, 60)\n(6, 84)\n(6, -512)\n(6, 400)\n(6, -33)\n";
    EXPECT_EQ(output, expectedOutput);
}