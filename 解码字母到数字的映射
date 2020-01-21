/*
给你一个字符串 s，它由数字（'0' - '9'）和 '#' 组成。我们希望按下述规则将 s 映射为一些小写英文字符：

字符（'a' - 'i'）分别用（'1' - '9'）表示。
字符（'j' - 'z'）分别用（'10#' - '26#'）表示。 
返回映射之后形成的新字符串。

题目数据保证映射始终唯一。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/decrypt-string-from-alphabet-to-integer-mapping
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution1 
{
public:
	string freqAlphabets(string s) 
	{
		//用栈来实现
		stack<int> mystack;
		string res;
		for (char c : s)
		{
			mystack.push(c);
		}
		while (!mystack.empty())
		{
			char c = mystack.top();
			mystack.pop();
			if (c == '#')
			{
				char b = mystack.top();
				mystack.pop();
				char a = mystack.top();
				mystack.pop();
				if (a == '2')
				{
					c = b + 68;
				}
				else if (a == '1')
				{
					c = b + 58;
				}
			}
			else
			{
				c = c + 48;
			}
			res.insert(res.begin(), c);
		}
		return res;
	}
};

//不用栈，优化方法
class Solution 
{
public:
	string freqAlphabets(string s) 
	{
		string res;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			char c = s[i];
			if (c == '#')
			{
				if (s[i - 2] == '2')
				{
					c = s[i - 1] + 68;
				}
				else if (s[i - 2] == '1')
				{
					c = s[i - 1] + 58;
				}
				i = i - 2;
			}
			else
			{
				c = c + 48;
			}
			res.insert(res.begin(), c);
		}
		return res;
	}
};
