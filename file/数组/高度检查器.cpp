/*
学校在拍年度纪念照时，一般要求学生按照 非递减 的高度顺序排列。
请你返回至少有多少个学生没有站在正确位置数量。该人数指的是：能让所有学生以 非递减 高度排列的必要移动人数。
（即升序排列和当前排列中高度不同的人数）
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/height-checker
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int heightChecker(vector<int>& heights)
	{
		vector<int> tmp = heights;
		int count = 0;
		sort(tmp.begin(), tmp.end());

		for (int i = 0; i < heights.size(); i++)
		{
			count += !(heights[i] == tmp[i]);
		}
		return count;
	}
};
