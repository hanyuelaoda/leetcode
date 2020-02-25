/*
编写一个方法，找出两个数字a和b中最大的那一个。不得使用if-else或其他比较运算符。
*/

class Solution 
{
public:
	int maximum(int a, int b) 
	{
    //用long类型防止int类型溢出
		long k = (long)a - (long)b;
		//负数右移高位补1，正数补0，&1只保留最后一位
		int s = (k >> (63))&1;
		return a * (s ^ 1) + b * s;
	}
};
