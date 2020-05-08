/*
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution 
{
public:
	bool isValid(string s) 
	{
		stack<char> ms;
		for (char ch : s)
		{
			if (ch == '(' || ch == '{' || ch == '[')
			{
				ms.push(ch);
			}
			else if (ch == ')' || ch == '}' || ch == ']')
			{
				if (!ms.empty())
				{
					if (!isMatch(ms.top(), ch))
					{
						return false;
					}
					ms.pop();
				}
				else
				{
					return false;
				}
			}
		}
		if (ms.empty())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isMatch(const char& lhs,const char& rhs)
	{
		return ((lhs == '('&&rhs == ')') || (lhs == '{'&&rhs == '}') || (lhs == '['&&rhs == ']'));
	}
};
