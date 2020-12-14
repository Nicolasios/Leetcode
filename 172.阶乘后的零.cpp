/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution
{
public:
    int trailingZeroes(int n)
    {
        return n / 5 + 1;
    }
};
// @lc code=end
