class Solution
{
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
	{
		while (!(((p->val <= root->val) && (q->val >= root->val)) || ((p->val >= root->val) && (q->val <= root->val))))
		{
			if ((root->val > p->val) && (root->val > q->val))
			{
				root = root->left;
			}
			if ((root->val < p->val) && (root->val < q->val))
			{
				root = root->right;
			}
		}
		return root;
	}
};
