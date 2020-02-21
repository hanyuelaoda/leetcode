/*
给定一个有序整数数组，元素各不相同且按升序排列，编写一个算法，创建一棵高度最小的二叉搜索树。
*/

class Solution
{
public:
	TreeNode* sortedArrayToBST(vector<int>& nums)
	{
		return sortedArrayToBST(nums, 0, nums.size() - 1);
	}
	TreeNode* sortedArrayToBST(vector<int>& nums, int low, int high)
	{
		if (low >= high)
		{
			return NULL;
		}
		int mid = (high + low) / 2;
		TreeNode *root = new TreeNode(nums[mid]);
		root->left = sortedArrayToBST(nums, low, mid - 1);
		root->right = sortedArrayToBST(nums, mid + 1, high);
		return root;
	}
};
