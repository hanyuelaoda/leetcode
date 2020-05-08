/*
判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
*/

class Solution
{
public:
	bool isPalindrome(int x)
	{
		if (x < 0)
		{
			return false;
		}
		if (x >= 0 && x <= 9)
		{
			return true;
		}
		string str;
		int num = x;
		while (num)
		{
			str += num % 10 + '0';
			num /= 10;
		}
		return to_string(x) == str;
	}
};
