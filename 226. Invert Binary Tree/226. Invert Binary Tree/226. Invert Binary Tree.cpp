// 226. Invert Binary Tree.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <algorithm>

/**
* Definition for a binary tree node.
*/
struct TreeNode {
	int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (!root) {
			return NULL;
		}

		std::swap(root->left, root->right);

		invertTree(root->left);
		invertTree(root->right);

		return root;
	}
};

int main()
{
    return 0;
}

