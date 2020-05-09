/*
输入一个正整数 target ，输出所有和为 target 的连续正整数序列（至少含有两个数）。

序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/he-wei-sde-lian-xu-zheng-shu-xu-lie-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//滑动区间
class Solution
{
public:
	vector<vector<int>> findContinuousSequence(int target)
	{
		vector<vector<int>> ret;
		int small = 1, big = 2, sum = 0;
		while ((small <= target / 2 + 1) && small < big)
		{
      //等差序列求和公式
			sum = ((small + big) * (big - small + 1)) / 2;
      //sum小于target时big向后移，即增大sum
			if (sum < target)
			{
				++big;
			}
			else if (sum == target)
			{
				vector<int> ans;
				for (int i = small; i <= big; ++i)
				{
					ans.push_back(i);
				}
				ret.push_back(ans);
				++small;
			}
      //sum大于target时small向后移，即减小sum
			else if (sum > target)
			{
				++small;
			}
		}
		return ret;
	}
};
