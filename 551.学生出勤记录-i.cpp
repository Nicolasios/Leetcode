/*
 * @lc app=leetcode.cn id=551 lang=cpp
 *
 * [551] 学生出勤记录 I
 */

// @lc code=start
class Solution
{
public:
    bool checkRecord(string s)
    {
        if (s.find_first_of("A") == s.find_last_of("A"))
        {
            if (s.find("LLL") == -1)
                return true;
        }
        return false;
    }
};
// @lc code=end
