/*
给定两个二叉树，想象当你将它们中的一个覆盖到另一个上时，两个二叉树的一些节点便会重叠。

你需要将他们合并为一个新的二叉树。合并的规则是如果两个节点重叠，那么将他们的值相加作为节点合并后的新值，否则不为 NULL 的节点将直接作为新二叉树的节点。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-two-binary-trees
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2)
	{
		TreeNode *t=new TreeNode(0);
		if (t1 != NULL && t2 != NULL)
		{
			t->val = t1->val + t2->val;
			t->left = mergeTrees(t1->left, t2->left);
			t->right = mergeTrees(t1->right, t2->right);
		}
		else if (t1 != NULL && t2 == NULL)
		{
			t = t1;
		}
		else if (t1 == NULL && t2 != NULL)
		{
			t = t2;
		}
		else if (t1 == NULL && t2 == NULL)
		{
			t = NULL;
		}
		return t;
	}
};
