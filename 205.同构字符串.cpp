/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
//双向映射，只有单向不行是因为aabc，ccde，两个a都映射c，则可能是cdde而不是ccde
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> mp1, mp2;
        for (int i = 0; i < s.size(); i++)
        {
            if (!mp1[s[i]])
                mp1[s[i]] = t[i];
            else if (mp1[s[i]] != t[i])
                return false;
            if (!mp2[t[i]])
                mp2[t[i]] = s[i];
            else if (mp2[t[i]] != s[i])
                return false;
        }
        return true;
    }
};

// @lc code=end
