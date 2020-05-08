/*
给定一棵二叉树，你需要计算它的直径长度。一棵二叉树的直径长度是任意两个结点路径长度中的最大值。这条路径可能穿过根结点。
*/

class Solution
{
public:
	int max = 0;
	int diameterOfBinaryTree(TreeNode* root)
	{
		dfs(root);
		return max;
	}
private:
	int dfs(TreeNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		int ret = 1;
		int l = dfs(root->left);
		int r = dfs(root->right);
		ret = l + r;//求出当前树的直径
		max = max > ret ? max : ret;
		return (l > r ? l : r) + 1;//返回树的深度
	}
};

//自己编写的
class Solution2
{
public:
//中序遍历
	int diameterOfBinaryTree(TreeNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		if (root->left == NULL && root->right == NULL)
		{
			return 0;
		}
		int ret = 0;
		int lret = 0, rret = 0;
		if (root->left != NULL)
		{
			lret = diameterOfBinaryTree(root->left);
		}
		int l = dfs(root->left);
		int r = dfs(root->right);
		ret = l + r;
		if (root->right != NULL)
		{
			rret = diameterOfBinaryTree(root->right);
		}
		if (lret > ret)
		{
			ret = lret;
		}
		if (rret > ret)
		{
			ret = rret;
		}
		return ret;
	}
  //求出当前树的深度
	int dfs(TreeNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		int ret = 1;
		int l = dfs(root->left);
		int r = dfs(root->right);
		ret += l > r ? l : r;
		return ret;
	}
};
