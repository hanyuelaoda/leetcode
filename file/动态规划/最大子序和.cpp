/*
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
*/
//动态规划
class Solution
{
public:
	int maxSubArray(vector<int>& nums)
	{
		if (nums.size() == 0)
		{
			return 0;
		}
		vector<int> dp(nums.size());
		int max = INT_MIN;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (i == 0)
			{
				dp[i] = nums[i];
			}
			else
			{
				int tmp = dp[i - 1] + nums[i];
				dp[i] = tmp > nums[i] ? tmp : nums[i];
			}
			if (dp[i] > max)
			{
				max = dp[i];
			}
		}
		return max;
	}
};
