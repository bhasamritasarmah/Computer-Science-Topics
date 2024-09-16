#include "pch.h"
#include "PrintPairsFromArray.h"

TEST(PrintPairsFromArrayTest, EmptyVector) {
    vector<int> vec = {};
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromArray(vec));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());  // Save old buffer
    PrintPairsFromArray(vec);
    cout.rdbuf(oldCoutBuffer);                              // Restore old buffer
    string output = buffer.str();
    string expectedOutput = "";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromArrayTest, SingletonVector) {
    vector<int> vec = { 1 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromArray(vec));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());  
    PrintPairsFromArray(vec);
    cout.rdbuf(oldCoutBuffer);                              
    string output = buffer.str();
    string expectedOutput = "(1, 1)\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(PrintPairsFromArrayTest, NormalVector) {
    vector<int> vec = { -1, 0, 8, -5, 6 };
    EXPECT_NO_FATAL_FAILURE(PrintPairsFromArray(vec));

    stringstream buffer;
    streambuf* oldCoutBuffer = cout.rdbuf(buffer.rdbuf());
    PrintPairsFromArray(vec);
    cout.rdbuf(oldCoutBuffer);
    string output = buffer.str();
    string expectedOutput = "(-1, -1)\n(-1, 0)\n(-1, 8)\n(-1, -5)\n(-1, 6)\n"
                            "(0, -1)\n(0, 0)\n(0, 8)\n(0, -5)\n(0, 6)\n"
                            "(8, -1)\n(8, 0)\n(8, 8)\n(8, -5)\n(8, 6)\n"
                            "(-5, -1)\n(-5, 0)\n(-5, 8)\n(-5, -5)\n(-5, 6)\n"
                            "(6, -1)\n(6, 0)\n(6, 8)\n(6, -5)\n(6, 6)\n";
    EXPECT_EQ(output, expectedOutput);
}
