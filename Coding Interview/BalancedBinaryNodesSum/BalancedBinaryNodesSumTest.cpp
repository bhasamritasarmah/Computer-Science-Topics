#include "pch.h"
#include "BalancedBinaryNodesSum.h"

TEST(BalancedBinaryNodeSumTest, NullTree)
{
	TreeNode* root = nullptr;
	EXPECT_EQ(SumOfNodes(root), 0);
}

TEST(BalancedBinaryNodeSumTest, SingletonTree)
{
	TreeNode* root = CreateNode(8);
	EXPECT_EQ(SumOfNodes(root), 8);
}

TEST(BalancedBinaryNodeSumTest, TwoNodesTree)
{
	int nodeKey = 3;
	int leftKey = 2;
	TreeNode* root = CreateNode(nodeKey);
	root->leftChild = CreateNode(leftKey);
	EXPECT_EQ(SumOfNodes(root), 5);
}

TEST(BalancedBinaryNodeSumTest, NormalTree)
{
	TreeNode* root = CreateNode(4);
	root->leftChild = CreateNode(1);
	root->leftChild->leftChild = CreateNode(-2);
	root->leftChild->rightChild = CreateNode(3);
	root->rightChild = CreateNode(7);
	root->rightChild->leftChild = CreateNode(6);
	EXPECT_EQ(SumOfNodes(root), 19);
}