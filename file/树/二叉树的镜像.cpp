class Solution
{
public:
	TreeNode* mirrorTree(TreeNode* root)
	{	
		if (root != NULL)
		{
			TreeNode *tmp = root->left;
			root->left = root->right;
			root->right = tmp;
			mirrorTree(root->left);
			mirrorTree(root->right);
		}
		return root;
	}
};
