/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        flowerbed.push_back(0);
        int res = 0;
        int len = flowerbed.size() - 1;
        if (n == 0)
            return true;
        for (int i = 0; i < len; i += 2)
        {
            if (flowerbed[i])
                continue;
            if (flowerbed[i + 1])
                i++;
            else
                res++;
            if (res >= n)
                return true;
        }
        return false;
    }
};

// @lc code=end
