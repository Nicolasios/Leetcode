/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
            return true;
        else if (n < 1)
            return false;
        else if (isPowerOfTwo(n / 2) && !(n % 2))
            return true;
        else
            return false;
    }
};
// @lc code=end
