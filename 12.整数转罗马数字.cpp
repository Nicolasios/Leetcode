/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
class Solution
{
public:
    string intToRoman(int num)
    {
        string res;
        while (num)
        {
            if (num / 1000 != 0)
            {
                res += string(num / 1000, 'M');
                num -= num / 1000 * 1000;
            }
            else if (num >= 900 && num < 1000)
            {
                res += "CM";
                num -= 900;
            }
            else if (num / 500 != 0)
            {
                res += string(num / 500, 'D');
                num -= num / 500 * 500;
            }
            else if (num >= 400 && num < 500)
            {
                res += "CD";
                num -= 400;
            }
            else if (num / 100 != 0)
            {
                res += string(num / 100, 'C');
                num -= num / 100 * 100;
            }
            else if (num >= 90 && num < 100)
            {
                res += "XC";
                num -= 90;
            }
            else if (num / 50 != 0)
            {
                res += string(num / 50, 'L');
                num -= num / 50 * 50;
            }
            else if (num >= 40 && num < 50)
            {
                res += "XL";
                num -= 40;
            }
            else if (num / 10 != 0)
            {
                res += string(num / 10, 'X');
                num -= num / 10 * 10;
            }
            else if (num == 9)
            {
                res += "IX";
                break;
            }
            else if (num / 5 != 0)
            {
                res += string(num / 5, 'V');
                num -= num / 5 * 5;
            }
            else if (num == 4)
            {
                res += "IV";
                break;
            }
            else if (num / 1 != 0)
            {
                res += string(num / 1, 'I');
                num = 0;
            }
        }
        return res;
    }
};

// @lc code=end
