/*
 * @lc app=leetcode.cn id=575 lang=cpp
 *
 * [575] 分糖果
 */

// @lc code=start
class Solution
{
public:
    int distributeCandies(vector<int> &candies)
    {
        unordered_set<int> Set;
        for (auto i : candies)
            Set.insert(i);
        return min(Set.size(), candies.size() / 2);
    }
};
// @lc code=end
