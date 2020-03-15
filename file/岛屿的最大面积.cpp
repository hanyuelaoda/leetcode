/*
给定一个包含了一些 0 和 1的非空二维数组 grid , 一个 岛屿 是由四个方向 (水平或垂直) 的 1 (代表土地) 构成的组合。你可以假设二维矩阵的四个边缘都被水包围着。

找到给定的二维数组中最大的岛屿面积。(如果没有岛屿，则返回面积为0。)

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/max-area-of-island
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int maxAreaOfIsland(vector<vector<int>>& grid)
	{
		int count = 0;
		for (int i = 0; i < grid.size(); ++i)
		{
			for (int j = 0; j < grid[0].size(); ++j)
			{
				int tmp = 0;
				if (grid[i][j] == 1)
				{
					tmp = dfs(grid, i, j);
					count = count > tmp ? count : tmp;
				}
			}
		}
		return count;
	}
	int dfs(vector<vector<int>>& grid, int i, int j)
	{
		if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0)
		{
			return 0;
		}
		grid[i][j] = 0;//检查过的修改为0
		int ret = 1;
		ret += dfs(grid, i - 1, j);
		ret += dfs(grid, i + 1, j);
		ret += dfs(grid, i, j - 1);
		ret += dfs(grid, i, j + 1);
		return ret;
	}
};
