/*
给定一个无序的整数数组，找到其中最长上升子序列的长度。
*/

//动态规划
//动态规划
class Solution
{
public:
	int lengthOfLIS(vector<int>& nums)
	{
		int size = nums.size();
		if (size == 0) return 0;
		vector<int> dp(size,0);//存储以第i个元素为结尾的上升子序列的最大长度
		for (int i = 0; i < size; ++i)
		{
			dp[i] = 1;
			for (int j = 0; j < i; ++j)
			{
				if (nums[j] < nums[i])//如果i元素大于j元素，则可以在其基础上加1，就变成以i为结尾
				{
					dp[i] = dp[i] > dp[j] + 1 ? dp[i] : dp[j] + 1;
				}
			}
		}
		return *max_element(dp.begin(),dp.end());
	}
};
