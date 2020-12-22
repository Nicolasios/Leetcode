/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int sSize = s.length();
        int blockNum = sSize / (2 * k);
        int restNum = sSize % (2 * k);
        int i = 0;
        for (; i < blockNum; i++)
        {
            reverse(s.begin() + i * 2 * k, s.begin() + i * 2 * k + k);
        }
        if (restNum >= k)
            reverse(s.begin() + i * 2 * k, s.begin() + i * 2 * k + k);
        else
            reverse(s.begin() + i * 2 * k, s.end());
        return s;
    }
};
// @lc code=end
