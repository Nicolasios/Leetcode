/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int ransomNum = ransomNote.size();
        for (int i = 0; i < ransomNum; i++)
        {
            int position = magazine.find(ransomNote[i]);
            if (position == -1)
                return false;
            else
            {
                magazine = magazine.substr(0, position) + magazine.substr(position + 1);
            }
        }
        return true;
    }
};
// @lc code=end
