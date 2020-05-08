/*
对于字符串 S 和 T，只有在 S = T + ... + T（T 与自身连接 1 次或多次）时，我们才认定 “T 能除尽 S”。

返回最长字符串 X，要求满足 X 能除尽 str1 且 X 能除尽 str2。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/greatest-common-divisor-of-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	string gcdOfStrings(string str1, string str2)
	{
		if (str1 + str2 != str2 + str1) return "";
		return str1.substr(0, gcd(str1.size(), str2.size()));
	}
	//辗转相除法
	int gcd(int x, int y)
	{
		return (y == 0) ? x : gcd(y, x%y);
	}
};
