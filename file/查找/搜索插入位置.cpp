/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。
*/
class Solution
{
public:
	int searchInsert(vector<int>& nums, int target)
	{
		int mid = nums.size() / 2;
		int start = 0, end = nums.size()-1;
		while (start <= end)
		{
			if (nums[mid] == target)
			{
				break;
			}
			else if (nums[mid] > target)
			{
				end = mid - 1;
			}
			else if (nums[mid] < target)
			{
				start = mid + 1;
			}
			mid = start + (end - start) / 2;
		}
		return mid;
	}
};
