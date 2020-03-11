/*
给你一个整数数组 A，只有可以将其划分为三个和相等的非空部分时才返回 true，否则返回 false。

形式上，如果可以找出索引 i+1 < j 且满足 (A[0] + A[1] + ... + A[i] == A[i+1] + A[i+2] + ... + A[j-1] == A[j] + A[j-1] + ... + A[A.length - 1]) 就可以将数组三等分。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/partition-array-into-three-parts-with-equal-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	bool canThreePartsEqualSum(vector<int>& A)
	{
		int sum = 0;
		for (int i = 0; i < A.size(); ++i)
		{
			sum += A[i];
		}
		if (sum % 3 != 0)//数组和不能被3整除
		{
			return false;
		}
		int target = sum / 3;
		int low = 0, high = A.size() - 1;
		int size = A.size();
		sum = 0;
		while (low < size)
		{
			sum += A[low];
			if (sum == target)
				break;
			++low;
		}
		sum = 0;
		while (high > 0)
		{
			sum += A[high];
			if (sum == target)
				break;
			--high;
		}
		if (low + 1 < high)
		{
			return true;
		}
		else return false;
	}
};
