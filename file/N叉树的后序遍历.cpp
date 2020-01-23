class Solution
{
public:
	vector<int> postorder(Node* root)
	{
		vector<int> traverse;
		if (root == NULL)
		{
			return traverse;
		}
		for (int i = 0; i < root->children.size(); i++)
		{
			vector<int> tmp = postorder(root->children[i]);
			traverse.insert(traverse.end(), tmp.begin(), tmp.end());
		}
		traverse.push_back(root->val);
		return traverse;
	}
};
