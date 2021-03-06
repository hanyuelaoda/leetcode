/*
给你一个以行程长度编码压缩的整数列表 nums 。

考虑每相邻两个元素 [a, b] = [nums[2*i], nums[2*i+1]] （其中 i >= 0 ），每一对都表示解压后有 a 个值为 b 的元素。

请你返回解压后的列表。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/decompress-run-length-encoded-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution 
{
public:
	vector<int> decompressRLElist(vector<int>& nums)
	{
		vector<int> result;
		int count = 0;
		int value = 0;
		int length = nums.size();
		if (length >= 2 && length <= 100)
		{
			if (length % 2 == 0)
			{
				value = nums.back();
				nums.pop_back();
				count = nums.back();
				nums.pop_back();
				result = decompressRLElist(nums);
				if (value >= 1 && value <= 100)
				{
					for (int i = 0; i < count; i++)
					{
						result.push_back(value);
					}
				}
			}
		}
		return result;
	}
};
