/*
 * @lc app=leetcode.cn id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> res;
        int counter = 1;
        while (counter <= n)
        {
            if (counter % 3 == 0 && counter % 5 == 0)
                res.push_back("FizzBuzz");
            else if (counter % 3 == 0 && counter % 5 != 0)
                res.push_back("Fizz");
            else if (counter % 3 != 0 && counter % 5 == 0)
                res.push_back("Buzz");
            else
                res.push_back(to_string(counter));
            counter++;
        }
        return res;
    }
};
// @lc code=end
