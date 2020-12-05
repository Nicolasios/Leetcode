/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        for (int i = 0; i < s.size(); ++i)
            t[0] ^= s[i];
        for (int i = 1; i < t.size(); ++i)
            t[0] ^= t[i];
        return t[0];
    }
};
// @lc code=end
