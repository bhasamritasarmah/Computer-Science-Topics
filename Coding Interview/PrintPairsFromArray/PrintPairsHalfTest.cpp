#include "pch.h"
#include "PrintPairsFromArray.h"

TEST(PrintPairsFromHalfArrayTest, EmptyVector) {
    vector<int> vec = {};
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromHalfArray(vec));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());  // Save old buffer
    PrintPairsFromHalfArray(vec);
    cout.rdbuf(oldCoutBuffer);                              // Restore old buffer
    string output = buffer.str();
    string expectedOutput = "";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromHalfArrayTest, SingletonVector) {
    vector<int> vec = { 1 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromHalfArray(vec));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());
    PrintPairsFromHalfArray(vec);
    cout.rdbuf(oldCoutBuffer);
    string output = buffer.str();
    string expectedOutput = "";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromHalfArrayTest, TwoElementVector) {
    vector<int> vec = { 1, -2 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromHalfArray(vec));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());
    PrintPairsFromHalfArray(vec);
    cout.rdbuf(oldCoutBuffer);
    string output = buffer.str();
    string expectedOutput = "(1, -2)\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromHalfArrayTest, NormalVector) {
    vector<int> vec = { -1, 0, 8, -5, 6 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromHalfArray(vec));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());
    PrintPairsFromHalfArray(vec);
    cout.rdbuf(oldCoutBuffer);
    string output = buffer.str();
    string expectedOutput = "(-1, 0)\n(-1, 8)\n(-1, -5)\n(-1, 6)\n"
                            "(0, 8)\n(0, -5)\n(0, 6)\n"
                            "(8, -5)\n(8, 6)\n"
                            "(-5, 6)\n";
    EXPECT_EQ(output, expectedOutput);
}