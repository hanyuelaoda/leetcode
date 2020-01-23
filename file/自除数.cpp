/*
自除数 是指可以被它包含的每一位数除尽的数。
例如，128 是一个自除数，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。
还有，自除数不允许包含 0 。
给定上边界和下边界数字，输出一个列表，列表的元素是边界（含边界）内所有的自除数。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/self-dividing-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution 
{
public:
	vector<int> selfDividingNumbers(int left, int right) 
	{
		vector<int> ret;
		for (int num = left; num <= right; num++)
		{
			int flag = 0;
			int tmp = num;
			while (tmp)
			{
				int divisor = tmp % 10;
				tmp = tmp / 10;
				if (divisor == 0)
				{
					flag = 1;
					break;
				}
				if (num%divisor != 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag != 1)
			{
				ret.push_back(num);
			}
		}
		return ret;

	}
};
