/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        assert(!nums.empty());
        // If use set<int> mp, the time complexity will be O(NlgN) if all inserted
        unordered_set<int> st;
        for (const auto &num : nums)
        {
            st.insert(num);
        }

        if (st.size() < 3)
        {
            return *max_element(nums.begin(), nums.end());
        }

        int firstLargest = INT_MIN;
        int secondLargest = INT_MIN;
        int thirdLargest = INT_MIN;
        for (const auto &num : st)
        {
            if (num > firstLargest)
            {
                thirdLargest = secondLargest;
                secondLargest = firstLargest;
                firstLargest = num;
            }
            else if (num > secondLargest)
            {
                thirdLargest = secondLargest;
                secondLargest = firstLargest;
                secondLargest = num;
            }
            else if (num > thirdLargest)
            {
                thirdLargest = num;
            }
        }

        return thirdLargest;
    }
};
/*
class Solution2
{
public:
    int thirdMax(vector<int> &nums)
    {
        assert(!nums.empty());
        long firstLargest = LONG_MIN;
        long secondLargest = LONG_MIN;
        long thirdLargest = LONG_MIN;
        for (const auto &num : nums)
        {
            if (num == firstLargest || num == secondLargest || num == thirdLargest)
            {
                continue;
            }

            if (num > firstLargest)
            {
                thirdLargest = secondLargest;
                secondLargest = firstLargest;
                firstLargest = num;
            }
            else if (num > secondLargest)
            {
                thirdLargest = secondLargest;
                secondLargest = firstLargest;
                secondLargest = num;
            }
            else if (num > thirdLargest)
            {
                thirdLargest = num;
            }
        }

        return thirdLargest == LONG_MIN ? firstLargest : thirdLargest;
    }
};
*/
// @lc code=end
