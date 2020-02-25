/*
找出数组中重复的数字。


在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//set判重，需要额外空间
class Solution 
{
public:
	int findRepeatNumber(vector<int>& nums) 
	{
		set<int> ms;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (!ms.insert(nums[i]).second)
			{
				return nums[i];
			}
		}
		return -1;
	}
};

//排序检查，会修改原始数组
class Solution2
{
public:
	int findRepeatNumber(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == nums[i + 1])
			{
				return nums[i];
			}
		}
		return -1;
	}
};
