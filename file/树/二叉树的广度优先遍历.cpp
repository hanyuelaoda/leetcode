class Solution
{
public:
	vector<vector<int>> levelOrder(TreeNode* root)
	{
		queue<TreeNode*> m_queue;
		vector<vector<int>> ret;
		vector<int> ans;	
		if (root == NULL)
		{
			return ret;
		}
		m_queue.push(root);
		while (!m_queue.empty())
		{			
			int len = m_queue.size();
			//完成当前层的遍历，下一层的子节点进入队列
			for (int i = 0; i < len; i++)
			{
				TreeNode* tmp = m_queue.front();
				m_queue.pop();
				ans.push_back(tmp->val);
				if (tmp->left != NULL)
				{
					m_queue.push(tmp->left);
				}
				if (tmp->right != NULL)
				{
					m_queue.push(tmp->right);
				}
			}
			ret.push_back(ans);
			//清空
			ans.clear();
		}
		return ret;
	}
};
