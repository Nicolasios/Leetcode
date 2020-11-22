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

4. 有序链表的合并，链表个数大于等于2

此处以链表个数等于2个为例

算法

首先，我们设定一个哨兵节点 prehead ，这可以在最后让我们比较容易地返回合并后的链表。我们维护一个 prev 指针，我们需要做的是调整它的 next 指针。然后，我们重复以下过程，直到 l1 或者 l2 指向了 null ：如果 l1 当前节点的值小于等于 l2 ，我们就把 l1 当前的节点接在 prev 节点的后面同时将 l1 指针往后移一位。否则，我们对 l2 做同样的操作。不管我们将哪一个元素接在了后面，我们都需要把 prev 向后移一位。

在循环终止的时候， l1 和 l2 至多有一个是非空的。由于输入的两个链表都是有序的，所以不管哪个链表是非空的，它包含的所有元素都比前面已经合并链表中的所有元素都要大。这意味着我们只需要简单地将非空链表接在合并链表的后面，并返回合并链表即可。

