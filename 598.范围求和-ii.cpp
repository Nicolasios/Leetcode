/*
 * @lc app=leetcode.cn id=598 lang=cpp
 *
 * [598] 范围求和 II
 */

// @lc code=start
class Solution
{
public:
    int maxCount(int m, int n, vector<vector<int>> &ops)
    {
        int opsnum = ops.size();
        for (int i = 0; i < opsnum; i++)
        {
            m = min(m, ops[i][0]);
            n = min(n, ops[i][1]);
        }
        return m * n;
    }
};
// @lc code=end
