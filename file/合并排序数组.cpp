/*
给定两个排序后的数组 A 和 B，其中 A 的末端有足够的缓冲空间容纳 B。 编写一个方法，将 B 合并入 A 并排序。

初始化 A 和 B 的元素数量分别为 m 和 n。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sorted-merge-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	void merge(vector<int>& A, int m, vector<int>& B, int n)
	{
		int i = m - 1, j = n - 1;
		//当A和B数组均有元素可以比较排序时
		while (i >= 0 && j >= 0)
		{
			if (A[i] < B[j])
			{
				A[i + j + 1] = B[j];
				j--;
			}
			else
			{
				A[i + j + 1] = A[i];
				i--;
			}
		}
		//当A数组的元素都已往后移，需将剩余的B数字元素插入
		while (j >= 0)
		{
			A[i + j + 1] = B[j];
			--j;
		}
	}
};
