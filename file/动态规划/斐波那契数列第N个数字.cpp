/*
斐波那契数，通常用 F(n) 表示，形成的序列称为斐波那契数列。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：
F(0) = 0,   F(1) = 1
F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
给定 N，计算 F(N)。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/fibonacci-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int fib(int N)
	{
		int f0 = 0, f1 = 1, fn = 0;
		if (0 == N)
		{
			return 0;
		}
		if (1 == N)
		{
			return 1;
		}
		while (N - 1)//N>=2
		{
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
			--N;
		}
		return fn;
	}
};
