/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> map; // key: 数组元素， value：元素所在下表
        for (int i = 0; i < nums.size(); i++)
        {
            // 在map里面
            if (map.find(nums[i]) != map.end())
            {
                int distance = i - map[nums[i]];
                if (distance <= k)
                {
                    return true;
                }
                map[nums[i]] = i; // 更新元素nums[i]所在的最新位置i
            }
            else
            { // 如果map里面没有，就把插入一条数据<元素，元素所在的下表>
                map[nums[i]] = i;
            }
        }
        return false;
    }
};
// @lc code=end
