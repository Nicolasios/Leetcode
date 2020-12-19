/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution
{
public:
    int countSegments(string s)
    {
        int ans = 0;
        s += ' ';
        for (int i = 0; i < s.size(); i++)
        {
            if (i > 0 && s[i] == ' ' && s[i - 1] != ' ')
                ans++;
        }
        return ans;
    }
};
// @lc code=end
