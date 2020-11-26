/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
//异或运算！

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int ret = 0;
        for (int e : nums)
            ret ^= e;
        return ret;
    }
};
// @lc code=end
