//位运算

//暴力法
class Solution 
{
public:
	bool isUnique(string astr) 
	{
		set<char> m_set;
		for (char c : astr)
		{
			if (!m_set.insert(c).second)
			{
				return false;
			}
		}
		return true;
	}
};
