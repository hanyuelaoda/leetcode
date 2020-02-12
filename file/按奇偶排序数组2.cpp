/*
给定一个非负整数数组 A， A 中一半整数是奇数，一半整数是偶数。

对数组进行排序，以便当 A[i] 为奇数时，i 也是奇数；当 A[i] 为偶数时， i 也是偶数。

你可以返回任何满足上述条件的数组作为答案。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-array-by-parity-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution
{
public:
	vector<int> sortArrayByParityII(vector<int>& A)
	{
		vector<int> ret(A.size());
		for (int i = 0, even = 0, odd = 1; i < A.size(); i++)
		{
			if (A[i] % 2 == 0)
			{
				ret[even] = A[i];
				even += 2;
			}
			else
			{
				ret[odd] = A[i];
				odd += 2;
			}
		}
		return ret;
	}
};
