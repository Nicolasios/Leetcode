/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */

// @lc code=start
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int moves;
        int numSize = nums.size();
        sort(nums.begin(), nums.end());
        long sum = 0;
        for (int i = 1; i < nums.size(); i++)
            sum += nums[i];
        moves = sum - (numSize - 1) * nums[0];
        return moves;
    }
};
// @lc code=end
/*
sum(nums[1]~nums[n-1])-(n-1)*nums[0] = sum(nums[0]~nums[n-1])-n*nums[0]
*/