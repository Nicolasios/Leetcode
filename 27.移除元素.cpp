/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int p = 0, q = 0;
        for (; p < nums.size(); p++)
        {
            if (nums[p] != val)
            {
                nums[q] = nums[p];
                q++;
            }
        }
        return q;
    }
};
// @lc code=end
