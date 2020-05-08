/*
如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。

只有给定的树是单值二叉树时，才返回 true；否则返回 false。
*/

class Solution
{
public:
	bool isUnivalTree(TreeNode* root)
	{
		if (root == NULL)
		{
			return true;
		}
		if (root->left != NULL)
		{
			if (root->val != root->left->val)
			{
				return false;
			}
		}
		if (root->right != NULL)
		{
			if (root->val != root->right->val)
			{
				return false;
			}
		}
		return isUnivalTree(root->left) && isUnivalTree(root->right);
	}
};
