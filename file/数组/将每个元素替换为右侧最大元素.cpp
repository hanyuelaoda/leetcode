/*
给你一个数组 arr ，请你将每个元素用它右边最大的元素替换，如果是最后一个元素，用 -1 替换。

完成所有替换操作后，请你返回这个数组。
*/
//耗时比较长的方法，从左向右
class Solution
{
public:
	vector<int> replaceElements(vector<int>& arr)
	{
		for (int i = 1; i < arr.size(); i++)
		{
			arr[i - 1] = arr[i];
			for (int j = i + 1; j < arr.size(); j++)
			{
				arr[i - 1] = ((arr[i - 1] > arr[j]) ? arr[i - 1] : arr[j]);
			}
		}
		arr[arr.size() - 1] = -1;
		return arr;
	}
};

//省时的方法，从右向左遍历
//将最右侧数字，记为max，每次向左遍历时更新max
class Solution2
{
public:
	vector<int> replaceElements(vector<int>& arr)
	{
		int max = arr[arr.size() - 1];
		arr[arr.size() - 1] = -1;
		for (int i = arr.size() - 2; i >= 0; i--)
		{
			int t = arr[i];
			arr[i] = max;
			if (t > max)
			{
				max = t;
			}
		}
		return arr;
	}
};
