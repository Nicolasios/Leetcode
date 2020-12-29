/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        int raw = nums.size(), col = nums[0].size();
        if (raw * col != r * c)
            return nums;
        else
        {
            vector<vector<int>> new_Nums(r, vector<int>(c));
            for (int i = 0; i < r * c; i++)
            {
                new_Nums[i / c][i % c] = nums[i / col][i % col];
            }
            return new_Nums;
        }
    }
};
// @lc code=end
