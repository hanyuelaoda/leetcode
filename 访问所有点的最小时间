/*
平面上有 n 个点，点的位置用整数坐标表示 points[i] = [xi, yi]。请你计算访问所有这些点需要的最小时间（以秒为单位）。

你可以按照下面的规则在平面上移动：

每一秒沿水平或者竖直方向移动一个单位长度，或者跨过对角线（可以看作在一秒内向水平和竖直方向各移动一个单位长度）。
必须按照数组中出现的顺序来访问这些点。
*/

class Solution 
{
public:
	int minTimeToVisitAllPoints(vector<vector<int>>& points) 
	{
		int seconds = 0;
		for (vector<vector<int>>::iterator it = points.begin(); it != points.end();)
		{
			vector<int> starting_points;//出发点
			vector<int> end_points;//目的点
			int x=0, y=0;
			starting_points = *it;
			it++;
			if (it == points.end())
			{
				break;
			}
			end_points = *it;
			//具体做法是分别将两点的x和y轴距离求出,然后取最大值
			x = abs(end_points[0] - starting_points[0]);
			y = abs(end_points[1] - starting_points[1]);
			seconds += (x > y) ? x : y;
		}
		return seconds;
	}
};
