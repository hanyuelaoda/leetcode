class Solution
{
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
	{
		set<int> tmp1, tmp2;
		vector<int> ret;
		for (int num : nums1) tmp1.insert(num);
		for (int num : nums2) tmp2.insert(num);

		set<int>::iterator it1 = tmp1.begin();
		set<int>::iterator it2 = tmp2.begin();
		while (it1 != tmp1.end() && it2 != tmp2.end())
		{
			if (*it1 == *it2)
			{
				ret.push_back(*it1);
				it1++;
				it2++;
			}
			else if (*it1 > *it2)
			{
				it2++;
			}
			else
			{
				it1++;
			}
		}
		return ret;
	}
};
