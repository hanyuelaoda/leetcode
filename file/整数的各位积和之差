/*
给你一个整数 n，请你帮忙计算并返回该整数「各位数字之积」与「各位数字之和」的差。
*/
class Solution 
{
public:
	int subtractProductAndSum(int n)
	{
		vector<int> num;
		int sum = 0;
		int product = 1;
		while (n != 0)
		{
			int tmp = n % 10;
			num.push_back(tmp);
			n = n / 10;
		}
		for (vector<int>::iterator it = num.begin(); it != num.end(); it++)
		{
			sum = sum + *it;
			product = product * (*it);
		}
		return (product - sum);
	}
};
