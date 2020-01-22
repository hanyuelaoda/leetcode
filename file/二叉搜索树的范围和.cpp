/*
给定二叉搜索树的根结点 root，返回 结点的值在L 和 R（含）之间的所有结点的值的和。
二叉搜索树保证具有唯一的值。
*/

class Solution 
{
public:
	int rangeSumBST(TreeNode* root, int L, int R) 
	{
		int sum = 0;
		//先序遍历
		if (root == NULL)
		{
			return sum;
		}
		if ((root->val >= L)&&(root->val <= R))
		{
			sum = sum + root->val;
		}
		sum += rangeSumBST(root->left, L, R);
		sum += rangeSumBST(root->right, L, R);
		return sum;

	}
};
