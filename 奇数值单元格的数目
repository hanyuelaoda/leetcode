/*
给你一个 n 行 m 列的矩阵，最开始的时候，每个单元格中的值都是 0。

另有一个索引数组 indices，indices[i] = [ri, ci] 中的 ri 和 ci 分别表示指定的行和列（从 0 开始编号）。

你需要将每对 [ri, ci] 指定的行和列上的所有单元格的值加 1。

请你在执行完所有 indices 指定的增量操作后，返回矩阵中 「奇数值单元格」 的数目。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/cells-with-odd-values-in-a-matrix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution 
{
public:
	int oddCells(int n, int m, vector<vector<int>>& indices) 
	{
		int count = 0;
		vector<vector<int>> odd;
		vector<int> row;
		 //初始化过程
		for (int i = 0; i < m; i++)
		{
			row.push_back(0);
		}
		for (int i = 0; i < n; i++)
		{
			odd.push_back(row);
		}
		//增量操作
		for (vector<vector<int>>::iterator it = indices.begin(); it != indices.end(); it++)
		{
			//第（*it）[0]行进行增量操作
			for (int i = 0; i < m; i++)
			{
				odd[(*it)[0]][i]++;
			}			
			//列增量
			for (int i = 0; i < n; i++)
			{
				odd[i][(*it)[1]]++;
			}
		}
		//统计奇数单元格数
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (odd[i][j] % 2 != 0)
				{
					count++;
				}
			}
		}
		return count;
	}
};
