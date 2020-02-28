/*
给出由小写字母组成的字符串 S，重复项删除操作会选择两个相邻且相同的字母，并删除它们。

在 S 上反复执行重复项删除操作，直到无法继续删除。

在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//循环遍历，直至找不到相邻重复字符
class Solution 
{
public:
	string removeDuplicates(string S) 
	{
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == S[i + 1])
			{
				S.erase(i, 2);
				i = -1;
			}
		}
		return S;
	}
};

//利用栈
class Solution2
{
public:
	string removeDuplicates(string S)
	{
		stack<char> ms;
		for (char ch : S)
		{
			if (ms.empty())
			{
				ms.push(ch);
			}
			else if (ms.top() == ch)
			{
				ms.pop();
			}
			else
			{
				ms.push(ch);
			}
		}
		S.clear();
		while (!ms.empty())
		{
			S.insert(S.begin(), ms.top());
			ms.pop();
		}
		return S;
	}
};
