/*
在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。

给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。

返回可以通过分割得到的平衡字符串的最大数量。
*/
class Solution 
{
public:
	int balancedStringSplit(string s) 
	{
		int ml = 0;
		int mr = 0;
		int count = 0;
		for (int i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == 'L')
			{
				ml++;
			}
			if (s[i] == 'R')
			{
				mr++;
			}
			if (ml == mr)
			{
				count++;
				ml = 0;
				mr = 0;
			}
		}
		if (count == 0)
		{
			count++;
		}
		return count;
	}
};
