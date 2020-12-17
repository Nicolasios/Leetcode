/*
 * @lc app=leetcode.cn id=371 lang=cpp
 *
 * [371] 两整数之和
 */

// @lc code=start
class Solution
{
public:
    int getSum(int a, int b)
    {
        int res;
        while (b != 0)
        {
            int stay = a ^ b;
            b = (unsigned int)(a & b) << 1;
            a = stay;
        }
        return a;
    }
};
// @lc code=end
