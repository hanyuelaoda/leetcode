/*
给你一份『词汇表』（字符串数组） words 和一张『字母表』（字符串） chars。

假如你可以用 chars 中的『字母』（字符）拼写出 words 中的某个『单词』（字符串），那么我们就认为你掌握了这个单词。

注意：每次拼写时，chars 中的每个字母都只能用一次。

返回词汇表 words 中你掌握的所有单词的 长度之和。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int countCharacters(vector<string>& words, string chars)
	{
		int rem[26];
		memset(rem, 0, sizeof(rem));
		int count = 0;
		for (char ch : chars)
		{
			rem[ch - 'a']++;
		}
		for (string word : words)
		{
			int flag = 1;
			int tmp[26];
			memcpy(tmp, rem, sizeof(rem));
			for (char ch : word)
			{
				if (tmp[ch - 'a'] > 0)
				{
					--tmp[ch - 'a'];
				}
				else
				{
					flag = 0;
					break;
				}
			}
			count += flag ? word.size() : 0;
		}
		return count;
	}
};
