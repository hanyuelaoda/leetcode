/*
求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
*/

class Solution
{
public:
	int sumNums(int n = 0)
	{
		n && (n += sumNums(n - 1));
		return n;
	}
};
