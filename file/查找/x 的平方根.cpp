/*
实现 int sqrt(int x) 函数。

计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sqrtx
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//二分法查找
class Solution2
{
public:
	int mySqrt(int x)
	{
		int l = 0, r = x / 2;
		int ret = 0;
		while (l <= r / 2)
		{
			int mid = l + (r - l) / 2;
			if (static_cast<long long>(mid*mid) <= x)
			{
				ret = mid;
				l = mid + 1;
			}
			else
			{
				r = mid - 1;
			}
		}
		return ret;
	}
};

//无限制条件
class Solution2
{
public:
	int mySqrt(int x)
	{
		double num = sqrt(static_cast<double>(x));
		return static_cast<int>(num);
	}
};
