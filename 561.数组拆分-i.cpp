/*
 * @lc app=leetcode.cn id=561 lang=cpp
 *
 * [561] 数组拆分 I
 */

// @lc code=start
class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int numSize = nums.size();
        int sum = 0;
        for (int i = 0; i < numSize; i = i + 2)
        {
            sum += nums[i];
        }
        return sum;
    }
};
// @lc code=end
