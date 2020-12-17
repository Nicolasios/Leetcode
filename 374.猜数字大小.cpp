/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int begin = 1, end = n;
        while (begin < end)
        {
            int middle = begin + (end - begin) / 2;
            if (guess(middle) == -1)
                end = middle - 1;
            if (guess(middle) == 1)
                begin = middle + 1;
            if (guess(middle) == 0)
                return middle;
        }
        return begin;
    }
};
// @lc code=end
