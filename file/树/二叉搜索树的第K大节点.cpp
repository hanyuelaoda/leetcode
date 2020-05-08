/*
给定一棵二叉搜索树，请找出其中第k大的节点。
*/

class Solution {
public:
	int kthLargest(TreeNode* root, int k)
	{
		vector<int> m_vector;
		travel(m_vector, root, k);
		return m_vector[k - 1];
	}
	void travel(vector<int>& m_vector, TreeNode* root, int k)
	{
		if (root == NULL)
		{
			return;
		}
		travel(m_vector, root->right, k);
		if (m_vector.size() != k)
		{
			m_vector.push_back(root->val);
		}
		else return;
		travel(m_vector, root->left, k);
	}
};

class Solution2 {
public:
	int res = 0, count = 0;
	int kthLargest(TreeNode* root, int k)
	{
		travel(root, k);
		return res;
	}
	void travel(TreeNode* root, int k)
	{
		if (root == NULL)
		{
			return;
		}
		travel(root->right, k);
		if (++count == k)
		{
			res = root->val;
			return;
		}
		travel(root->left, k);
	}
};
