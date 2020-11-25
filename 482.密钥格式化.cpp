/*
 * @lc app=leetcode.cn id=482 lang=cpp
 *
 * [482] 密钥格式化
 */

// @lc code=start
class Solution
{
public:
    string licenseKeyFormatting(string S, int K)
    {
        stack<char> tStack;
        string ans;
        int cnt = 0;
        for (auto c : S)
            if (c != '-')
                tStack.push(c);
        while (!tStack.empty())
        {
            ans.push_back(toupper(tStack.top()));
            cnt++;
            tStack.pop();
            if (cnt % K == 0 && tStack.size() != 0)
                ans.push_back('-');
        }
        cout << cnt << endl;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
