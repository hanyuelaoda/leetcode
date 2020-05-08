/*
给定一个整数数组 A，对于每个整数 A[i]，我们可以选择任意 x 满足 -K <= x <= K，并将 x 加到 A[i] 中。

在此过程之后，我们得到一些数组 B。

返回 B 的最大值和 B 的最小值之间可能存在的最小差值。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/smallest-range-i
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int smallestRangeI(vector<int>& A, int K)
	{
		sort(A.begin(), A.end());
		int res = A[A.size() - 1] - K - A[0] - K;
		if (res > 0) return res;		
		else return 0;	
	}
};
