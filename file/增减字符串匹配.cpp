/*
给定只含 "I"（增大）或 "D"（减小）的字符串 S ，令 N = S.length。

返回 [0, 1, ..., N] 的任意排列 A 使得对于所有 i = 0, ..., N-1，都有：

如果 S[i] == "I"，那么 A[i] < A[i+1]
如果 S[i] == "D"，那么 A[i] > A[i+1]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/di-string-match
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	vector<int> diStringMatch(string S)
	{
		vector<int> ret;
		int max = S.size();
		int min = 0;
		for (char c : S)
		{
			if (S[i] == 'I')
			{
				ret.push_back(min);
				min++;
				
			}
			else
			{
				ret.push_back(max);
				max--;
			}
		}
		ret.push_back(min);
		return ret;
	}
};
