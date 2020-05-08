/*
给定两个非空二叉树 s 和 t，检验 s 中是否包含和 t 具有相同结构和节点值的子树。
s 的一个子树包括 s 的一个节点和这个节点的所有子孙。s 也可以看做它自身的一棵子树。
*/

class Solution
{
public:
	bool isSubtree(TreeNode* s, TreeNode* t)
	{
		if (s == NULL)
		{
			return false;
		}
		//对面每个节点进行检查
		return isSubtreeCore(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
	}
	bool isSubtreeCore(TreeNode* s, TreeNode* t)
	{
		if (s == NULL && t == NULL)
		{
			return true;
		}
		else if ((s == NULL && t != NULL) || (s != NULL && t == NULL) || s->val != t->val)
		{
			return false;
		}
		else
		{
			//检查左子树和右子树是否匹配
			return isSubtreeCore(s->left, t->left) && isSubtreeCore(s->right, t->right);
		}
	}
};
