/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;
        else
        {
            int begin = 2, end = num / 2;
            while (begin <= end)
            {
                int x = begin + (end - begin) / 2;
                if (x == 1.0 * num / x)
                    return true;
                if (x < 1.0 * num / x)
                    begin = x + 1;
                if (x > 1.0 * num / x)
                    end = x - 1;
            }
            return false;
        }
    }
};
// @lc code=end
/*
牛顿迭代法！
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num < 2:
            return True
        
        x = num // 2
        while x * x > num:
            x = (x + num // x) // 2
        return x * x == num
*/