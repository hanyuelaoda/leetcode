/*
给定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从1 到 n 的 min(ai, bi) 总和最大。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/array-partition-i
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution 
{
public:
	int arrayPairSum(vector<int>& nums) 
	{
		int ret = 0;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i+=2)
		{
			ret += nums[i];
		}
		return ret;
	}
};
