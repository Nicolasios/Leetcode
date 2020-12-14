/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution
{
public:
    bool isHappy(int n)
    {
        int quick = gethappy(n);
        int slow = n;
        while (1)
        {
            if (quick == slow || quick == 1)
                break;
            quick = gethappy(gethappy(quick));
            slow = gethappy(slow);
        }
        return quick == 1;
    }
    int gethappy(int n)
    {
        int totalSum = 0;
        while (n > 0)
        {
            int d = n % 10;
            n = n / 10;
            totalSum += d * d;
        }
        return totalSum;
    }
};
// @lc code=end
