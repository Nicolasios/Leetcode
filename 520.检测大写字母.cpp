/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        if (word.size() == 1)
            return true;
        int flag0 = isCaps(word[0]);
        word = word.substr(1);
        int wordSize = word.length();
        int flag = isCaps(word[0]);
        if (flag0 == 0 && flag == 1)
            return false;
        for (int i = 1; i < wordSize; i++)
        {
            if (isCaps(word[i]) != flag)
                return false;
        }
        return true;
    }
    int isCaps(char c)
    {
        if ('a' <= c && c <= 'z')
            return 0;
        else
            return 1;
    }
};
// @lc code=end
