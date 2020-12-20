/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int satisfiedNum = 0;
        int i = s.size() - 1, j = g.size() - 1;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (i >= 0 && j >= 0)
        {
            if (s[i] >= g[j])
            {
                i--;
                satisfiedNum++;
            }
            j--;
        }
        return satisfiedNum;
    }
};
// @lc code=end
