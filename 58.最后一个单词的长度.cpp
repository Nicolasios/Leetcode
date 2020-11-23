/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int position = s.rfind(" ");
        int length = s.size();
        if (position < 0)
            return length;
        if (length - position - 1 == 0)
        {
            return lengthOfLastWord(s.substr(0, position));
        }
        return length - position - 1;
    }
};
// @lc code=end
