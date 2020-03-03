/*
一个网站域名，如"discuss.leetcode.com"，包含了多个子域名。
作为顶级域名，常用的有"com"，下一级则有"leetcode.com"，最低的一级为"discuss.leetcode.com"。
当我们访问域名"discuss.leetcode.com"时，也同时访问了其父域名"leetcode.com"以及顶级域名 "com"。
给定一个带访问次数和域名的组合，要求分别计算每个域名被访问的次数。其格式为访问次数+空格+地址，例如："9001 discuss.leetcode.com"。
接下来会给出一组访问次数和域名组合的列表cpdomains 。要求解析出所有域名的访问次数，输出格式和输入格式相同，不限定先后顺序

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/subdomain-visit-count
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution
{
public:
	vector<string> subdomainVisits(vector<string>& cpdomains)
	{
		map<string, int> mp;
		vector<string> mv;
		for (string str : cpdomains)
		{
			int index = str.find(' ');
			//提取访问次数
			int count = stoi(str.substr(0, index-1));
			//提取子域名
			string dmname = str.substr(index + 1);
			while (index > 0)
			{
				mp[dmname] += count;
				index = dmname.find('.');
				dmname = dmname.substr(index + 1);//子域名中找上级域名
			}
		}
		for (auto p : mp)
		{
			mv.push_back(to_string(p.second) + " " + p.first);
		}
		return mv;
	}
};
