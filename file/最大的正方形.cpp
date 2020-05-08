/*
在一个由 0 和 1 组成的二维矩阵内，找到只包含 1 的最大正方形，并返回其面积。
*/
class Solution
{
public:
	int maximalSquare(vector<vector<char>>& matrix)
	{
		if(matrix.size()==0||matrix[0].size()==0)
		{
			return 0;
		}
		int m = matrix.size();
		int n = matrix[0].size();
		vector<vector<int>> dp(m);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				dp[i].push_back(0);
		}
		int max = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (matrix[i][j] == '1')
				{
					if (i == 0 || j == 0)
					{
						dp[i][j] = 1;
					}
					else
					{
						//int tmp = (dp[i - 1][j - 1] < dp[i - 1][j] ? dp[i - 1][j - 1] : dp[i - 1][j]);
						dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
					}	
					max = dp[i][j] > max ? dp[i][j] : max;
				}
			}
		}
		return max * max;
	}
};
