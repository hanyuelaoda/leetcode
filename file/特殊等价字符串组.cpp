/*
你将得到一个字符串数组 A。

如果经过任意次数的移动，S == T，那么两个字符串 S 和 T 是特殊等价的。

一次移动包括选择两个索引 i 和 j，且 i ％ 2 == j ％ 2，交换 S[j] 和 S [i]。

现在规定，A 中的特殊等价字符串组是 A 的非空子集 S，这样不在 S 中的任何字符串与 S 中的任何字符串都不是特殊等价的。

返回 A 中特殊等价字符串组的数量。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/groups-of-special-equivalent-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	int numSpecialEquivGroups(vector<string>& A)
	{
		set<string> ms;
		for (string str : A)
		{
			string odd, even,newstr;
			for (int i = 0; i < str.size(); ++i)
			{
				if (i % 2 == 0)
				{
					even += str[i];
				}
				else odd += str[i];
			}
			sort(odd.begin(), odd.end());
			sort(even.begin(), even.end());
			newstr = odd + even;
			ms.insert(newstr);
		}
		return ms.size();
	}
};
