/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> ret;
		map<int, int> mp;
		for (int i = 0; i < nums.size(); ++i)
		{
			mp[nums[i]] = i;
		}
		for (int j = 0; j < nums.size(); ++j)
		{
			int tmp = target - nums[j];
			if (mp.find(tmp) != mp.end() && mp[tmp] != j)
			{
				ret.push_back(j);
				ret.push_back(mp[tmp]);
				break;
			}
		}
		return ret;
	}
};
