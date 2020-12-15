/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start

// two pointers
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        int N = nums.size();
        vector<string> res;
        for (int left = 0, right = 0; right < N; right++)
        {
            while (right < N - 1 && nums[right] + 1 == nums[right + 1])
            {
                right++;
            }

            string str;
            if (left != right)
            {
                str = to_string(nums[left]) + "->" + to_string(nums[right]);
            }
            else
            {
                str = to_string(nums[left]);
            }
            left = right + 1;
            res.push_back(str);
        }

        return res;
    }
};
// class Solution
// {
// public:
//     vector<string> summaryRanges(vector<int> &nums)
//     {
//         vector<string> field;
//         int numSize = nums.size();
//         if (numSize == 0)
//             return field;
//         int low = nums[0], high = nums[0];
//         for (int i = 0, j = 0; j < numSize; ++j)
//         {
//             if (nums[j] == nums[j + 1] - 1 && j + 1 < numSize)
//                 continue;
//             if (i == j)
//                 field.push_back(to_string(nums[i]) + "");
//             else
//                 field.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
//             i = j + 1;
//         }
//         return field;
//     }
// };
// @lc code=end
