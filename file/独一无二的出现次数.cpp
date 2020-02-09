/*
给你一个整数数组 arr，请你帮忙统计数组中每个数的出现次数。

如果每个数的出现次数都是独一无二的，就返回 true；否则返回 false。
*/
class Solution
{
public:
	bool uniqueOccurrences(vector<int>& arr)
	{
		set<int> ret;
		sort(arr.begin(), arr.end());
		int count = 1;
		for (int i = 0; i < (int)arr.size()-1; i++)
		{
			if (arr[i] == arr[i + 1])
			{
				count++;
			}
			else
			{
				//插入并判断是否插入成功
				if (!ret.insert(count).second)
				{
					//不成功，返回false
					return false;
				}
				//成功，继续循环
				else count = 1;
			}
			
		}
		//最后一个元素
		if (!ret.insert(count).second)
		{
			return false;
		}
		//循环结束则表示无重复的出现次数
		return true;
	}
};
