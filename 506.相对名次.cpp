/*
 * @lc app=leetcode.cn id=506 lang=cpp
 *
 * [506] 相对名次
 */

// @lc code=start
//1 3 5 7 4 8
//1 3 4 5 7 8
class Solution
{
    static bool cmp1(const pair<int, int> a, const pair<int, int> b)
    {
        return a.first > b.first;
    }

public:
    vector<string> findRelativeRanks(vector<int> &nums)
    {
        int len = nums.size();
        vector<string> res(len);
        vector<pair<int, int>> vec;
        for (int i = 0; i < len; i++)
        {
            vec.push_back({nums[i], i});
        }
        sort(vec.begin(), vec.end(), cmp1);
        for (int i = 0; i < len; i++)
        {
            if (i > 2)
                res[vec[i].second] = to_string(i + 1);
            else if (i == 1)
                res[vec[i].second] = "Silver Medal";
            else if (i == 2)
                res[vec[i].second] = "Bronze Medal";
            else
                res[vec[i].second] = "Gold Medal";
        }

        return res;
    }
};
// @lc code=end
