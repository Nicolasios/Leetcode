/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return nums[0];
        int housenum = nums.size();
        vector<int> money = vector<int>(housenum, 0);
        money[0] = nums[0];
        money[1] = max(nums[0], nums[1]);
        for (int i = 2; i < housenum; i++)
        {
            money[i] = max(money[i - 2] + nums[i], money[i - 1]);
        }
        return money[housenum - 1];
    }
};
// @lc code=end
