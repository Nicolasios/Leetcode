/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        //初始化容器为全一的杨辉三角
        //标号为1-numRows
        vector<vector<int>> Triangle;
        for (int i = 1; i <= numRows; i++)
        {
            Triangle.push_back(vector<int>(i, 1));
        }
        for (int i = 2; i < numRows; i++)
        {
            for (int j = 1; j < i; j++)
            {
                Triangle[i][j] = Triangle[i - 1][j - 1] + Triangle[i - 1][j];
            }
        }
        return Triangle;
    }
};
// @lc code=end
