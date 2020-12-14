/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        uint32_t cal = 1;
        int counter = 0;
        for (int i = 0; i < 32; i++)
        {
            if ((n & cal) != 0)
                counter++;
            cal <<= 1;
        }
        return counter;
    }
};
// @lc code=end
