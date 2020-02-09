/*
给出一个函数  f(x, y) 和一个目标结果 z，请你计算方程 f(x,y) == z 所有可能的正整数 数对 x 和 y。

给定函数是严格单调的，也就是说：
f(x, y) < f(x + 1, y)
f(x, y) < f(x, y + 1)

函数接口定义如下：
interface CustomFunction {
public:
  // Returns positive integer f(x, y) for any given positive integer x and y.
  int f(int x, int y);
};

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-positive-integer-solution-for-a-given-equation
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//严格单调递增是解题关键
class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, const int z) 
    {
        vector<vector<int>> ret;
        for (int i = 1, j = 1000; i <= 1000 && 1 <= j;) 
        {
            const int val = customfunction.f(i, j);
            if (val == z) 
            {
                ret.push_back({i, j});
                ++i, --j;
            } 
            else if (val < z) 
            {
                ++i;
            } 
            else 
            {
                --j;
            }
        }
        return ret;
    }
};
