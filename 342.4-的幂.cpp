/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 1)
            return true;
        else if (n < 4)
            return false;
        else
        {
            while (n > 1)
            {
                if (n % 4 != 0)
                    return false;
                else
                {
                    n = n / 4;
                }
            }
            return true;
        }
    }
};
// @lc code=end
