class Solution
{
public:
	vector<int> preorder(Node* root)
	{
		vector<int> traverse;
		if (root == NULL)
		{
			return traverse;
		}
		traverse.push_back(root->val);
		for (int i = 0; i < root->children.size(); i++)
		{
			vector<int> tmp = preorder(root->children[i]);
			traverse.insert(traverse.end(), tmp.begin(), tmp.end());
		}
		return traverse;
	}
};
