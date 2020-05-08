class Solution
{
public:
	vector<int> exchange(vector<int>& nums)
	{
		int low = 0;
		int high = nums.size() - 1;

		while (low < high)
		{
			while (low < high && nums[low] % 2 != 0)
			{
				++low;
			}
			while (low < high && nums[high] % 2 == 0)
			{
				--high;
			}
			if (low < high)
			{
				int tmp = nums[low];
				nums[low] = nums[high];
				nums[high] = tmp;
			}
		}
		return nums;
	}
};
