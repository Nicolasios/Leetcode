/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> rowValues = vector<int>(1, 1);
        for (int i = 0; i < rowIndex + 1; i++)
        {
            if (i == 0)
                continue;
            if (i == 1)
                rowValues.push_back(1);
            else
            {
                //从后向前更新每一行的值，实现空间复杂度为n（rowIndex）
                for (int j = i - 1; j >= 1; j--)
                {
                    rowValues[j] = rowValues[j - 1] + rowValues[j];
                }
                rowValues.push_back(1);
            }
        }
        return rowValues;
    }
};
// @lc code=end
