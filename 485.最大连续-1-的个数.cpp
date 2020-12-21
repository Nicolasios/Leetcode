/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */

// @lc code=start
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int numSize = nums.size();
        int maxSum = 0;
        int count = 0;
        for (int i = 0; i < numSize; i++)
        {
            if (nums[i] == 1)
                count++;
            else
            {
                maxSum = max(maxSum, count);
                count = 0;
            }
        }
        return max(maxSum, count);
    }
};
// @lc code=end
