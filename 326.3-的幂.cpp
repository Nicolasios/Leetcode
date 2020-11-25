/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n == 1)
            return true;
        else if (n < 3)
            return false;
        else
        {
            while (n > 1)
            {
                if (n % 3 != 0)
                    return false;
                else
                {
                    n = n / 3;
                }
            }
            return true;
        }
    }
};
// @lc code=end
