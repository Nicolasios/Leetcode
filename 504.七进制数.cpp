/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
class Solution
{
public:
    string convertToBase7(int num)
    {
        if (num == 0)
        {
            return "0";
        }
        string res = "";
        int nums = 0;
        if (num < 0)
            nums = -num;
        else
            nums = num;
        while (nums != 0)
        {
            int temp = nums % 7;
            res = to_string(temp) + res;
            nums = nums / 7;
        }
        if (num < 0)
            res = "-" + res;
        return res;
    }
};
// @lc code=end
/*
101
14---3
2 ---0
0 ---2
*/