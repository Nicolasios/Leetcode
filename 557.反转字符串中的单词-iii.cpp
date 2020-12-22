/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
class Solution
{
public:
    string reverseWords(string s)
    {
        vector<int> place;
        place.push_back(-1);
        while (s.find(" ") != -1)
        {
            place.push_back(s.find(" "));
            s = s.replace(s.find(" "), 1, "-");
        }
        place.push_back(s.size());
        int spaceNum = place.size();
        for (int i = 0; i < spaceNum - 1; i++)
        {
            reverse(s.begin() + place[i] + 1, s.begin() + place[i + 1]);
            s = s.replace(place[i + 1], 1, " ");
        }
        return s.substr(0, s.size() - 1);
    }
};
// @lc code=end
