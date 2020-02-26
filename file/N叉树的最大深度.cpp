class Solution
{
public:
	int maxDepth(Node* root)
	{
		int depth = 1;
		int tmp = 0;
		if (root == NULL)
		{
			return 0;
		}
		for (int i = 0; i < root->children.size(); i++)
		{
			int cdepth = maxDepth(root->children[i]);
			tmp = (cdepth > tmp) ? cdepth : tmp;
		}
		depth += tmp;
		return depth;
	}
};
