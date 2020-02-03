/*
给定一个单词列表，只返回可以使用在键盘同一行的字母打印出来的单词。
*/
class Solution
{
public:
	vector<string> findWords(vector<string>& words)
	{
		vector<string> res;
		for (string s : words)
		{
			int mark = checkline(s[0]);
			int flag = 0;
			for (char c : s)
			{
				if (mark != checkline(c))
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				res.push_back(s);
			}
		}
		return res;
	}
  
	int checkline(char c)
	{
		int ret;
		if (c >= 'A'&&c <= 'Z')
		{
			c = c + 32;
		}
		switch (c)
		{
		case 'q':
		case 'w':
		case 'e':
		case 'r':
		case 't':
		case 'y':
		case 'u':
		case 'i':
		case 'o':
		case 'p':
			ret = 1;
			break;
		case 'a':
		case 's':
		case 'd':
		case 'f':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
			ret = 2;
			break;
		case 'z':
		case 'x':
		case 'c':
		case 'v':
		case 'b':
		case 'n':
		case 'm':
			ret = 3;
			break;
		}
		return ret;
	}
};
