/*
数轴上放置了一些筹码，每个筹码的位置存在数组 chips 当中。

你可以对 任何筹码 执行下面两种操作之一（不限操作次数，0 次也可以）：

将第 i 个筹码向左或者右移动 2 个单位，代价为 0。
将第 i 个筹码向左或者右移动 1 个单位，代价为 1。
最开始的时候，同一位置上也可能放着两个或者更多的筹码。

返回将所有筹码移动到同一位置（任意位置）上所需要的最小代价。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/play-with-chips
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//因为移动二单元代价为0，所以题目简化为比较奇数和偶数
class Solution
{
public:
	int minCostToMoveChips(vector<int>& chips)
	{
		//统计偶数和奇数的个数
		int odd = 0, even = 0;
		for (int i = 0; i < (int)chips.size(); i++)
		{
			if (chips[i] % 2 == 0) even++;
			else odd++;
		}		
		return odd < even ? odd : even;
	}
};
