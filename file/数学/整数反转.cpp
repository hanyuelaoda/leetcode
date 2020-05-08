/*
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。
*/

class Solution 
{
public:
	int reverse(int x) 
	{
		int ret = 0;
		while (x)
		{
			if (ret > INT_MAX / 10)
			{
				return 0;
			}
			if (ret < INT_MIN / 10)
			{
				return 0;
			}
			ret = ret * 10 + x % 10;
			x /= 10;
		}
		return ret;
	}
};
