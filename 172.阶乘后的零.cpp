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
        int zeronum = 0;
        long current = 5;
        while (n >= current)
        {
            zeronum += n / current;
            current *= 5;
        }
        return zeronum;
    }
};
// @lc code=end
