#pragma once

struct TreeNode
{
	int nodeKey;
	TreeNode* node;
	TreeNode* leftChild;
	TreeNode* rightChild;
};

TreeNode* CreateNode(int nodeKey);