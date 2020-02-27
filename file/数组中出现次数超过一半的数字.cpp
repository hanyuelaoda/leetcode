class Solution
{
public:
	int majorityElement(vector<int>& nums)
	{
		
		sort(nums.begin(), nums.end());
    //出现次数超过一半，则中间值就是答案
		return nums[num.size()/2];
	}
};

class Solution
{
public:
	int majorityElement(vector<int>& nums)
	{
		int i = 0;
		int count = 1;
		int size = nums.size();
		sort(nums.begin(), nums.end());
		for (i = 0; i < size - 1; ++i)
		{
			if (nums[i] == nums[i + 1])
			{
				++count;
				if (count >= size / 2 + 1)
				{
					break;
				}
			}
			else
			{
				count = 1;
			}
		}
		return nums[i];
	}
};
