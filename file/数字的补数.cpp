//两种方法的思路都一样
//方法1则是用pow函数，速度较快
class Solution1
{
public:
	int findComplement(int num) 
	{
		int count = 0;
		int tmp = num;
		while (tmp)
		{
			count++;
			tmp /= 2;
		}
		return pow(2, count) - num - 1;
	}
};

//方法2用左移完成
class Solution 
{
public:
	int findComplement(int num) 
	{
  //此处需要long类型，否则会溢出
		long tmp = 1;
		while (num>=tmp)
		{
			tmp <<= 1;
		}
		return tmp - num - 1;
	}
};
