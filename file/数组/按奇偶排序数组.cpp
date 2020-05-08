/*
给定一个非负整数数组 A，返回一个数组，在该数组中， A 的所有偶数元素之后跟着所有奇数元素。
*/

//奇数偶数分别存储的方法
class Solution
{
public:
	vector<int> sortArrayByParity(vector<int>& A)
	{
		vector<int> odd;
		vector<int> ret;
		for (int num : A)
		{
			if (num % 2 == 0)
			{
				ret.push_back(num);
			}
			else
			{
				odd.push_back(num);
			}
		}
		ret.insert(ret.end(), odd.begin(), odd.end());
		return ret;
	}
};

//原地排序的方法
class Solution1
{
public:
	vector<int> sortArrayByParity(vector<int>& A)
	{
		int i = 0, j = A.size() - 1;
		while (i < j)
		{
			if (A[i] % 2 == 0)
			{
				if (A[j] % 2 == 0)
				{
					i++;
				}
				else
				{
					i++;
					j--;
				}
			}
			else
			{
				if (A[j] % 2 == 0)
				{
					int tmp = A[i];
					A[i] = A[j];
					A[j] = tmp;
				}
				else
				{
					j--;
				}
			}

		}
		return A;
	}
};
