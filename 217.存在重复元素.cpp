/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (int n : nums)
        {
            map[n]++;
            if (map[n] > 1)
                return true;
        }
        return false;
    }
};
// @lc code=end

/*
用set去重，然后若是原数组长度大于去重后的长度，则返回true，否则false
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size();
    }
};

作者：OrangeMan
链接：https://leetcode-cn.com/problems/contains-duplicate/solution/cjian-ji-dai-ma-duo-chong-fang-fa-by-orangeman-6/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
