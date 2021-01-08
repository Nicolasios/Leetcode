/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int num = height.size();
        int i = 0, j = num - 1;
        int maxarea = min(height[i], height[j]) * (j - i);
        while (i != j)
        {
            int temparea = 0;
            if (height[i] >= height[j])
                j--;
            else
                i++;
            temparea = min(height[i], height[j]) * (j - i);
            if (maxarea < temparea)
                maxarea = temparea;
        }
        return maxarea;
    }
};
// @lc code=end
