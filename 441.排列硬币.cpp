/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution
{
public:
    int arrangeCoins(int n)
    {

        int i;
        for (i = 1; i <= n; i++)
        {
            n -= i;
        }

        return i - 1;
    }
};

// @lc code=end
/*
x^2 +x-2n<0
x^2+3x+2-2n>0
*/