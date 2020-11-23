/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
//其实不用插入  我TM还以为要插进去  吓死我了
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1, ans = nums.size();
        while (left <= right)
        {
            int mid = ((right - left) >> 1) + left;
            if (target <= nums[mid])
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};
// @lc code=end
