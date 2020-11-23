/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 1, j = 0;
        if (nums.size() == 0)
        {
            return 0;
        }
        for (; i < nums.size(); i++)
        {
            if (nums[j] < nums[i])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};
// @lc code=end
