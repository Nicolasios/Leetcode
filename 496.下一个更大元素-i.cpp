/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int num1Size = nums1.size();
        int num2Size = nums2.size();
        vector<int> res;
        for (int i = 0; i < num1Size; i++)
        {
            for (int j = i + 1; j < num2Size; j++)
            {
                if (nums1[i] < nums2[j])
                {
                    res.push_back(nums2[j]);
                    break;
                }
                if (j == num2Size)
                    res.push_back(-1);
            }
        }
        return res;
    }
};
// @lc code=end
