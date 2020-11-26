/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int length = prices.size();
        int i = 0;
        int max = 0;
        int lowest = 0x3f3f3f3f;
        for (; i < length; i++)
        {
            if (prices[i] < lowest)
                lowest = prices[i];
            if (prices[i] - lowest > max)
                max = prices[i] - lowest;
        }
        return max;
    }
};
// @lc code=end

/*
超时的
    int maxProfit(vector<int> &prices)
    {
        int length = prices.size();
        int i = 0, j;
        int max = 0;
        for (; i < length - 1; i++)
        {
            for (j = i + 1; j < length; j++)
            {
                if (max < prices[j] - prices[i])
                    max = prices[j] - prices[i];
            }
        }
        return max;
    }
*/