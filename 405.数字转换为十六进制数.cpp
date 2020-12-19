/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution
{
public:
    string toHex(int num)
    {
        string Hex = "";
        vector<int> nums;
        unsigned int Unnum = num;
        while (Unnum > 15)
        {
            nums.push_back(Unnum % 16);
            Unnum = (Unnum - Unnum % 16) / 16;
        }
        nums.push_back(Unnum);
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            string temp = "";
            if (nums[i] >= 10)
                temp = nums[i] - 10 + 'a';
            else
                temp = to_string(nums[i]);
            Hex = Hex + temp;
        }
        return Hex;
    }
};
// @lc code=end
