/*
给定一个矩阵 A， 返回 A 的转置矩阵。

矩阵的转置是指将矩阵的主对角线翻转，交换矩阵的行索引与列索引。
*/
class Solution
{
public:
	vector<vector<int>> transpose(vector<vector<int>>& A)
	{
		vector<vector<int>> ret;
		for (int i = 0; i < A[0].size(); i++)
		{
			vector<int> tmp;
			for (int j = 0; j < A.size(); j++)
			{
				tmp.push_back(A[j][i]);
			}
			ret.push_back(tmp);
		}		
		return ret;
	}
};
