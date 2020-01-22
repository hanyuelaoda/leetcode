/*
给你一个整数数组 nums，请你返回其中位数为 偶数 的数字的个数。
*/

class Solution 
{
public:
	int findNumbers(vector<int>& nums) 
	{
		//位数为偶数的数字统计数
		int count = 0;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
		{
			int tmp = *it;
			int tag = 0;
			while (tmp != 0)
			{
				tmp = tmp / 10;
				tag++;
			}
			if (tag % 2 == 0)
			{
				count++;
			}
		}
		return count;
	}
};
