/*
 * @lc app=leetcode.cn id=492 lang=cpp
 *
 * [492] 构造矩形
 */

// @lc code=start
class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int W = sqrt(area);
        while (area % W != 0)
            --W;
        return {area / W, W};
    }
};
// @lc code=end
