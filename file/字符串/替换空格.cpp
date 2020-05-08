/*
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
*/
class Solution 
{
public:
	string replaceSpace(string s) 
	{
		string ret;
		for (char c : s)
		{
			if (c == ' ')
			{
				ret += "%20";
			}
			else
			{
				ret += c;
			}
		}
		return ret;
	}
};
