/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int length = nums.size();
        int firstZero = 0;
        for (; firstZero < length; firstZero++)
            if (nums[firstZero] == 0)
                break;
        for (int i = firstZero + 1; i < length; i++)
        {
            if (nums[i] != 0)
            {
                nums[firstZero] = nums[i];
                nums[i] = 0;
                firstZero++;
                for (; firstZero < length; firstZero++)
                    if (nums[firstZero] == 0)
                        break;
            }
        }
    }
};
// @lc code=end
/*乱序移动
    void moveZeroes(vector<int> &nums)
    {
        int tail = nums.size();
        for (; tail > 0; tail--)
        {
            if (nums[tail - 1] != 0)
                break;
        }
        for (int i = 0; i < tail; i++)
        {
            if (nums[i] == 0)
            {
                nums[i] = nums[tail - 1];
                nums[tail - 1] = 0;
                tail--;
            }
        }
    }
*/