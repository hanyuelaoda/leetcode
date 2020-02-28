/*
给定两个整数 L 和 R ，找到闭区间 [L, R] 范围内，计算置位位数为质数的整数个数。

（注意，计算置位代表二进制表示中1的个数。例如 21 的二进制表示 10101 有 3 个计算置位。还有，1 不是质数。）

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/prime-number-of-set-bits-in-binary-representation
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int countPrimeSetBits(int L, int R)
	{
		int ret = 0;
		for (int i = L; i <= R; ++i)
		{
			int count = countBits(i);
			if (isPrime(count))
			{
				++ret;
			}
		}
		return ret;
	}
	int countBits(int num)
	{
		int count = 0;
		while (num)
		{
			if (num % 2 == 1)
			{
				++count;
			}
			num = num / 2;
		}
		return count;
	}
	bool isPrime(int num)
	{
		int flag = 1;
		for (int i = 2; i <= sqrt(num); i++)
		{
			int div = num / i;
			if (div*i == num)
			{
				flag = 0;
				break;
			}
		}
		if (flag&&num != 1) return true;
		else return false;
	}
};
