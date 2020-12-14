/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution
{
public:
    int titleToNumber(string s)
    {
        int num = s.length();
        long int sequence = 0;
        int cnt = 0;
        while (cnt < num)
        {
            sequence = sequence * 26 + s[cnt] - 'A' + 1;
            cnt++;
        }
        return sequence;
    }
};
// @lc code=end
