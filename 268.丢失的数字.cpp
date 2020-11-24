/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        int sum = 0;
        for (; i < n; i++)
        {
            sum += nums[i];
        }
        return n * (1 + n) / 2 - sum;
    }
};
// @lc code=end
