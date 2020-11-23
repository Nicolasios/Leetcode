/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution
{
public:
    string countAndSay(int n)
    {
        int a = 1;
        if (n == 1)
            return "1";
        string lastcountAndSay = countAndSay(n - 1);
        return Discribe(lastcountAndSay);
    }
    string Discribe(string &s)
    {
        string discribe;
        int length = s.size();
        for (int i = 0; i < length;)
        {
            int j = 0;
            int count = 0;
            for (j = i; j < length; j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            i = j;
            string countstr = to_string(count);
            discribe = discribe + countstr + s[i - 1];
        }
        return discribe;
    }
};
// @lc code=end
