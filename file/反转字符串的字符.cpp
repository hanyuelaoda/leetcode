/*
给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
*/
class Solution 
{
public:
	string reverseWords(string s) 
	{
		string tmp;
		string res;
		for (char c : s)
		{
			if ((c != ' ') && (c != '\0'))
			{
				tmp.insert(tmp.begin(), c);
			}
			else
			{
				res += tmp;
				res += ' ';
				tmp.clear();
			}
		}
		res += tmp;
		return res;
	}
};
