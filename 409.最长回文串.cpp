/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution
{
public:
    int longestPalindrome(string s)
    {
        int c[128] = {0}, ret = 0;

        for (int i = 0; i < s.length(); i++)
        {
            c[s[i]]++;
        }

        for (int i = 0; i < 128; i++)
        {
            ret += c[i] - c[i] % 2;
        }

        return ret + (ret != s.length());
    }
};
// @lc code=end
