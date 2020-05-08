/*
国际摩尔斯密码定义一种标准编码方式，将每个字母对应于一个由一系列点和短线组成的字符串， 比如: "a" 对应 ".-", "b" 对应 "-...", "c" 对应 "-.-.", 等等。

为了方便，所有26个英文字母对应摩尔斯密码表如下：

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
给定一个单词列表，每个单词可以写成每个字母对应摩尔斯密码的组合。例如，"cab" 可以写成 "-.-..--..."，(即 "-.-." + "-..." + ".-"字符串的结合)。我们将这样一个连接过程称作单词翻译。

返回我们可以获得所有词不同单词翻译的数量。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/unique-morse-code-words
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int uniqueMorseRepresentations(vector<string>& words)
	{
		vector<string> morse{ ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---","-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-","...-", ".--", "-..-", "-.--", "--.." };
		for (int i = 0; i < words.size(); i++)
		{
			string tmp;
			for (int j = 0; j < words[i].size(); j++)
			{
				tmp += morse[words[i][j] - 97];
			}
			words[i] = tmp;
		}
		for (int i = 0; i < words.size(); i++)
		{
			for (int j = words.size() - 1; j > i; j--)
			{
				//查是否相同
				if (words[i].size() == words[j].size())
				{
					int k = 0;
					while (k < words[i].size())
					{
						if (words[i][k] != words[j][k])
						{
							break;
						}
						k++;
					}
					if (k == words[i].size())
					{
						//相同则将后一个字符串删除
						words.erase(words.begin() + j);
					}
				}
			}
		}
		return words.size();
	}
};

//哈希集合更简洁易懂
class Solution2
{
public:
	int uniqueMorseRepresentations(vector<string>& words) 
	{
		string map[]{ ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
		set < string > set;
		for (string s : words)
		{
			string str;
			for (char c : s)
			{
				str += map[c - 'a'];
			}
			set.insert(str);
		}

		return set.size();
	}
};
