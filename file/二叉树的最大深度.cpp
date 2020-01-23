class Solution 
{
public:
	int maxDepth(TreeNode* root) 
	{
		int deep = 0;
		int ldeep, rdeep;
		if (root != NULL)
		{
			deep++;
			ldeep = maxDepth(root->left);
			rdeep = maxDepth(root->right);
			deep += (ldeep > rdeep) ? ldeep : rdeep;
		}
		return deep;
	}
};
