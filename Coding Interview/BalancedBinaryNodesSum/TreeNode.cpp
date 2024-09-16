#include "pch.h"
#include "TreeNode.h"

TreeNode* CreateNode(int key)
{
	TreeNode* node = new TreeNode();
	node->nodeKey = key;
	node->leftChild = nullptr;
	node->rightChild = nullptr;
	return node;
}