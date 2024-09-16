#include "pch.h"
#include "BalancedBinaryNodesSum.h"

/*
* Adds up the values of all the nodes in the balanced binary tree.
* 
* @param root: A pointer to a tree node. Points to the head of the tree.
* 
* @return Returns the sum after adding up all the nodes.
* 
* @note Time Complexity: Considering n is the number of nodes in the tree, O(n), since it goes through
*						 every node once.
*		Space Complexity: Considering h is the height of the tree, O(h). The recursive depth of the function
*						  is O(h). Since this is a balanced binary tree, h = log n, hence, space complexity
*						  O(log n). If the binary tree is not balanced, the h_max = n, so the worst
*						  space complexity is O(n).
* 
* @note Help taken from ChatGPT. Link: https://chatgpt.com/share/66e7dc23-5184-8010-b1f5-845a0101e095
*/
int SumOfNodes(TreeNode* root)
{
	if (root == nullptr)
		return 0;

	return root->nodeKey + SumOfNodes(root->leftChild) + SumOfNodes(root->rightChild);
}