/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int i = haystack.size();
        int j = needle.size();
        if (j == 0)
        {
            return 0;
        }
        for (int start = 0; start < i - j + 1; start++)
        {
            if (haystack.substr(start, j) == needle)
            {
                return start;
            }
        }
        return -1;
    }
};
// @lc code=end
