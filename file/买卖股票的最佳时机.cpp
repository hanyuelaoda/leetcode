/*
给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。

如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。

注意你不能在买入股票前卖出股票。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int maxProfit(vector<int>& prices)
	{
		int minprices = INT_MAX;
		int ret = 0;
		for (int price : prices)
		{
			if (price < minprices)
			{
				minprices = price;
			}
			if (price - minprices > ret)
			{
				ret = price - minprices;
			}
		}
		return ret;
	}
};
