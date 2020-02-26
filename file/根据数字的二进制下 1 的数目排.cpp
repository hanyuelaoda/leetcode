/*
给你一个整数数组 arr 。请你将数组中的元素按照其二进制表示中数字 1 的数目升序排序。

如果存在多个数字二进制中 1 的数目相同，则必须将它们按照数值大小升序排列。

请你返回排序后的数组。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-integers-by-the-number-of-1-bits
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	vector<int> sortByBits(vector<int>& arr)
	{
		sort(arr.begin(), arr.end(),compare());
		return arr;
	}
	struct compare
	{
		bool operator()(int lhs, int rhs)
		{
			int l = bitcount(lhs);
			int r = bitcount(rhs);
			if (l > r)
			{
				return false;
			}
			else if (l == r)
			{
				if (lhs > rhs)
				{
					return false;
				}
			}
			return true;
		};
		int bitcount(int num)
		{
			int count = 0;
			while (num)
			{
				if (num % 2 == 1)
				{
					++count;
				}
				num = num / 2;
			}
			return count;
		}
	};
};
