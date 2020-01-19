/*
给你一个仅由数字 6 和 9 组成的正整数 num。

你最多只能翻转一位数字，将 6 变成 9，或者把 9 变成 6 。

请返回你可以得到的最大数字。
*/

class Solution 
{
public:
	int maximum69Number(int num) 
	{
		stack<int> mystack;
		int exp = 0;
		int flag = 0;
		while (num != 0)
		{
			mystack.push(num % 10);
			num = num / 10;
			exp++;
		}
		while (exp != 0)
		{
			if (flag == 0 && mystack.top() == 6)
			{
				flag = 1;
				num += 9 * pow(10, exp - 1);
			}
			else
			{
				num += mystack.top()*pow(10, exp - 1);
			}
			exp--;
			mystack.pop();
		}
		return num;
	}
};
