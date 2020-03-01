/*
给定仅有小写字母组成的字符串数组 A，返回列表中的每个字符串中都显示的全部字符（包括重复字符）组成的列表。例如，如果一个字符在每个字符串中出现 3 次，但不是 4 次，则需要在最终答案中包含该字符 3 次。

你可以按任意顺序返回答案。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-common-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//思路：求数组A中字符串之间的交集
//方法：用长度26的数组分别统计26个字母出现次数
//求交集方法：两个数组的每个元素分别求出最小者，即交集
class Solution
{
public:
	vector<string> commonChars(vector<string>& A)
	{
		vector<string> ret;
		vector<int> nums(26, 0);//用于存储每个字母的数量
		for (char ch : A[0])//先统计A的第一个元素的字母
		{
			nums[ch - 'a']++;
		}		
		for (int i = 1; i < A.size(); ++i)
		{
			//对A其他元素进行统计
			vector<int> tmp(26, 0);
			for (char ch : A[i])
			{
				tmp[ch - 'a']++;
			}
			//求交集
			for (int j = 0; j < nums.size(); ++j)
			{
				nums[j] = (tmp[j] <= nums[j]) ? tmp[j] : nums[j];
			}
		}
		//将结果输出到ret
		for (int k = 0; k < nums.size(); ++k)
		{
			//交集中出现多少次就输出多少次
			int count = nums[k];
			while(count > 0)
			{
				string str;
				str += ('a' + k);
				ret.push_back(str);
				--count;
			}
		}
		return ret;
	}
};
