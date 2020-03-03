/*
在给定的网格中，每个单元格可以有以下三个值之一：

值 0 代表空单元格；
值 1 代表新鲜橘子；
值 2 代表腐烂的橘子。
每分钟，任何与腐烂的橘子（在 4 个正方向上）相邻的新鲜橘子都会腐烂。
返回直到单元格中没有新鲜橘子为止所必须经过的最小分钟数。如果不可能，返回 -1。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotting-oranges
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int orangesRotting(vector<vector<int>>& grid)
	{
		int row = grid.size(), column = grid[0].size(), count = 0;
		vector<vector<int>> next(row);
		for (int i = 0; i < row; ++i)
		{
			next[i].resize(column);
		}
		while (next != grid)
		{
			if (count == 0)
			{
				next = grid;
			}
			else
			{
				grid = next;
			}
			//生成下一刻的矩阵
			for (int i = 0; i < row; ++i)
			{
				for (int j = 0; j < column; ++j)
				{
					if (grid[i][j] == 2)
					{
						if (i > 0)
						{
							if (grid[i - 1][j] == 1)
							{
								next[i - 1][j] = 2;
							}
						}
						if (i < grid.size() - 1)
						{
							if (grid[i + 1][j] == 1)
							{
								next[i + 1][j] = 2;
							}
						}
						if (j > 0)
						{
							if (grid[i][j - 1] == 1)
							{
								next[i][j - 1] = 2;
							}
						}
						if (j < grid[i].size() - 1)
						{
							if (grid[i][j + 1] == 1)
							{
								next[i][j + 1] = 2;
							}
						}
					}
				}
			}
			++count;
		}
		if (count > 0)
		{
			--count;
		}
		//检查是否仍有新鲜橘子
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				if (grid[i][j] == 1)
				{
					count = -1;
					break;
				}
			}
		}
		return count;
	}
};
