//需要找到节点q和p为止
//只找到其中之一，则表示该节点即是公共祖先
class Solution
{
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
	{
		if (root == NULL || root == p || root == q)
		{
			return root;
		}
		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);
		if (left != NULL && right != NULL)
		{
			return root;
		}
		else if (right != NULL)
		{
			return right;
		}
		else if (left != NULL)
		{
			return left;
		}
		else return NULL;
	}
};
