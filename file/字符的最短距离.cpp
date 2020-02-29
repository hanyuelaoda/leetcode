//两次遍历
class Solution
{
public:
	vector<int> shortestToChar(string S, char C)
	{
		vector<int> ans(S.size(),INT_MAX);
		int cp = -1;
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == C)
			{
				ans[i] = 0;
				cp = i;
			}
			else if (cp != -1) ans[i] = i - cp;
		}
		cp = -1;
		for (int i = S.size() - 1; i >= 0; i--)
		{
			if (S[i] == C)
			{
				ans[i] = 0;
				cp = i;
			}
			else if (cp != -1) ans[i] = ans[i] < (cp - i) ? ans[i] : (cp - i);
		}
		return ans;
	}
};
