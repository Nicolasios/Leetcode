/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution
{
public:
    int fib(int N)
    {
        if (N == 0)
            return 0;
        else if (N == 1)
            return 1;
        else
            return fib(N - 1) + fib(N - 2);
    }
};
// @lc code=end
