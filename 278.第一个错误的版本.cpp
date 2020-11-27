/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long head = 1, tail = n;
        while (head != tail)
        {
            long middle = (head + tail) >> 1;
            if (isBadVersion(middle))
                tail = middle;
            else
            {
                head = middle + 1;
            }
        }
        return head;
    }
};
// @lc code=end
