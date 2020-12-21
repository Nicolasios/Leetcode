/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
 */

// @lc code=start
class Solution
{
public:
    string first = "qwertyuiopQWERTYUIOP";
    string second = "asdfghjklASDFGHJKL";
    string third = "zxcvbnmZXCVBNM";
    vector<string> findWords(vector<string> &words)
    {
        vector<string> res;
        int wordNum = words.size();
        for (int i = 0; i < wordNum; i++)
        {
            string word = words[i];
            int wordlength = word.length();
            int flag = inWhichLine(word[0]);
            int j = 1;
            for (; j < wordlength; j++)
            {
                int flags = inWhichLine(word[j]);
                if (flag != flags)
                    break;
                else
                    continue;
            }
            if (j == wordlength)
                res.push_back(word);
        }
        return res;
    }
    int inWhichLine(char c)
    {
        if (first.find(c) != -1)
            return 1;
        else if (second.find(c) != -1)
            return 2;
        else
            return 3;
    }
};
// @lc code=end
