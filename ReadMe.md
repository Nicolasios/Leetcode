# Some useful skills when doing algorithm problems

1. 质数的求取

    采用埃拉托色尼筛选法<br>
[Sieve of Eratosthenes](https://blog.csdn.net/qq_37653144/article/details/80470029)

2. hash表的使用

   使用 vector<type,type> map 构建hash表

```
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map; // key: 数组元素， value：元素所在下表
        for (int i = 0; i < nums.size(); i++) {
            // 找到了在索引i之前就出现过nums[i]这个元素
            if (map.find(nums[i]) != map.end()) { 
                int distance = i - map[nums[i]];
                if (distance <= k) {
                    return true;
                }
                map[nums[i]] = i; // 更新元素nums[i]所在的最新位置i
            } else { // 如果map里面没有，就把插入一条数据<元素，元素所在的下表>
                map[nums[i]] = i;
            }
        }
        return false;
    }
};
```

3. find() and rfind()

采用从前和从后双向查找，找到第一个出现的位置，如果相等则证明只出现一次。
```
s.find(s[i]) == s.rfind(s[i])
```
