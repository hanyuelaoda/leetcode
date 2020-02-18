/*
给你一个 m * n 的矩阵 grid，矩阵中的元素无论是按行还是按列，都以非递增顺序排列。 

请你统计并返回 grid 中 负数 的数目。
*/

class Solution 
{
public:
	int countNegatives(vector<vector<int>>& grid) 
	{
		int count = 0, m = grid[0].size(), pos = grid[0].size() - 1;
		for (int i = 0; i < (int)grid.size(); i++)
		{
			int j = pos;
			for (j = pos; j >= 0; j--)
			{
				if (grid[i][j] >= 0)
				{
					if (j + 1 < m)//检查是否为该行最后一个数字
					{
						pos = j + 1;
						count += m - pos;	
					}
					break;
				}
			}			
			if (j == -1)//当前行全是负数的处理
			{
				count += m;
				//下一行也是负数，所以之后 没必要进行 列的循环，pos=-1可以进入直接计数
				pos = -1;
			}
		}
		return count;
	}
};
