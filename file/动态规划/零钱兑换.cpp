/*
给定不同面额的硬币 coins 和一个总金额 amount。编写一个函数来计算可以凑成总金额所需的最少的硬币个数。
如果没有任何一种硬币组合能组成总金额，返回 -1。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/coin-change
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//动态规划，自顶向下
class Solution
{
public:
	vector<int> table;
	int coinChange(vector<int>& coins, int amount)
	{
		if (amount < 1) return 0;
		table.resize(amount, 0);
		return dp(coins, amount);
	}
	int dp(vector<int>& coins, int rem)
	{
		if (rem == 0) return 0;
		if (rem < 0) return -1;
		if (table[rem - 1] != 0) return table[rem - 1];
		int min = INT_MAX;
		for (int coin : coins)
		{
    //记录最小值
			int ret = dp(coins, rem - coin);
			if (ret >= 0 && ret < min)
			{
				min = ret + 1;
			}
		}
		table[rem - 1] = (min == INT_MAX) ? -1 : min;
		return table[rem - 1];
	}
};
