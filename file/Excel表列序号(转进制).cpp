/*
给定一个Excel表格中的列名称，返回其相应的列序号。
例如，

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/excel-sheet-column-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//问题转化为26进制转为10进制
class Solution
{
public:
	int titleToNumber(string s)
	{
		int ret = 0;
		int size = s.size();
		for (int i = 0; i < size; ++i)
		{
			int tmp = s[i] - 64;
			ret += tmp * pow(26, size - i - 1);
		}
		return ret;
	}
};
