/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int count = 0;
        int XYand = x & y;
        int XYor = x | y;
        int res = XYand > XYor ? XYand - XYor : XYor - XYand;
        while (res != 0)
        {

            if (res % 2)
                count++;
            res = res / 2;
        }
        return count;
    }
};
// @lc code=end
/*
0101 0001 1111 1011 0011 0001
0100 0100 0000 1011 0001 0100
0100 0000 0000 1011 0001 0000
0101 0101 1111 1011 0011 0101
0001 0101 1111 0000 0001 0101

01011101
01001001
01001001
01011101
00010100
*/