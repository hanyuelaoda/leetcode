/*
给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。
*/

class Solution 
{
public:
	vector<int> sortedSquares(vector<int>& A)
	{
		for (int i = 0; i < A.size(); i++)
		{
			A[i] = A[i] * A[i];
		}
		sort(A.begin(), A.end());
		return A;
	}
};
