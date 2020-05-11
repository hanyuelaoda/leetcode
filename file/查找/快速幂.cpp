//二分查找
class Solution
{
public:
	double myPow(double x, int n)
	{
		double ret = 1.0;
		for (int i = abs(n); i != 0; i /= 2)
		{
      //判断是否需要补齐
			if (i % 2 != 0)
			{
				ret *= x;
			}
			x *= x;
		}
		return n > 0 ? ret : (1 / ret);
	}
};
