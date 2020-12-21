/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution
{
public:
    int findComplement(int num)
    {
        int count = 0;
        int andNum = 0x7fffffff;
        int num_1 = num;
        while (num_1 != 0)
        {
            count++;
            num_1 = num_1 / 2;
        }
        num = ~num;
        return num & (andNum >> (31 - count));
    }
};
// @lc code=end
