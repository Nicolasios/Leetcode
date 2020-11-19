/*
 * @lc app=leetcode.cn id=896 lang=cpp
 *
 * [896] 单调数列
 */

// @lc code=start
class Solution
{
public:
    bool isMonotonic(vector<int> &A)
    {
        int head = 0, tail = 1;
        int length = A.size();
        //递增则为0，递减则为1
        int inflag = 0;
        int deflag = 0;
        for (; tail < length; head++, tail++)
        {
            if (A[head] <= A[tail])
                inflag++;
            if (A[head] >= A[tail])
                deflag++;
        }
        if (inflag == (length - 1) || deflag == (length - 1))
            return true;
        else
            return false;
    }
};
// @lc code=end
