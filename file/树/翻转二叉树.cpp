/*
反转一棵二叉树
*/
class Solution 
{
public:
	TreeNode* invertTree(TreeNode* root)
	{
		if (root != NULL)
		{
			TreeNode *tmp = root->left;
			root->left = root->right;
			root->right = tmp;
			invertTree(root->left);
			invertTree(root->right);
		}
		return root;
	}
};
