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

    首先，我们设定一个哨兵节点 prehead ，这可以在最后让我们比较容易地返回合并后的链表。我们维护一个 prev 指针，我们需要做的是调整它的 next 指针。然后，我们重复以下过程，直到 l1 或者 l2 指  向了 null ：如果 l1 当前节点的值小于等于 l2 ，我们就把 l1 当前的节点接在 prev 节点的后面同时将 l1 指针往后移一位。否则，我们对 l2 做同样的操作。不管我们将哪一个元素接在了后面，我们都需要把 prev 向后移一位。

    在循环终止的时候， l1 和 l2 至多有一个是非空的。由于输入的两个链表都是有序的，所以不管哪个链表是非空的，它包含的所有元素都比前面已经合并链表中的所有元素都要大。这意味着我们只需要简单地将非空链表接在合并链表的后面，并返回合并链表即可。

5. 双指针的使用(优雅)

    [双指针技巧汇总](https://www.cnblogs.com/kyoner/p/11087755.html)

    举例：

    数组完成排序后，我们可以放置两个指针 i 和 j，其中 i 是慢指针，而 j 是快指针。只要 nums[i] = nums[j] nums[i] = nums[j]，我们就增加 j 以跳过重复项。

    当我们遇到 nums[j] != nums[i]  nums[j] = nums[i] 时，跳过重复项的运行已经结束，因此我们必须把它（nums[j]nums[j]）的值复制到 nums[i + 1]nums[i+1]。然后递增 i，接着我们将再次重复相同的过程，直到 j 到达数组的末尾为止。

6. 动态规划

    以leetcode [122.买卖股票的最佳时机](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/)为例<br>
    定义状态 dp[i][0] 表示第 ii 天交易完后手里没有股票的最大利润，dp[i][1] 表示第 ii 天交易完后手里持有一支股票的最大利润（i 从 0 开始）。

    考虑 dp[i][0] 的转移方程，如果这一天交易完后手里没有股票，那么可能的转移状态为前一天已经没有股票，即 dp[i−1][0]，或者前一天结束的时候手里持有一支股票，即 dp[i−1][1]，这时候我们要将其卖出，并获得 \textit{prices}[i]prices[i] 的收益。因此为了收益最大化，我们列出如下的转移方程：
    
    ```
    dp[i][0]=max{dp[i−1][0],dp[i−1][1]+prices[i]}
    ```

    再来考虑 dp[i][1]，按照同样的方式考虑转移状态，那么可能的转移状态为前一天已经持有一支股票，即 dp[i−1][1]，或者前一天结束时还没有股票，即 dp[i−1][0]，这时候我们要将其买入，并减少 prices[i] 的收益。可以列出如下的转移方程：

    ```
    dp[i][1]=max{dp[i−1][1],dp[i−1][0]−prices[i]}   
    ```

    对于初始状态，根据状态定义我们可以知道第 0 天交易结束的时候 dp[0][0]=0，dp[0][1]=−prices[0]。

    因此，我们只要从前往后依次计算状态即可。由于全部交易结束后，持有股票的收益一定低于不持有股票的收益，因此这时候 dp[n−1][0] 的收益必然是大于 dp[n−1][1] 的，最后的答案即为 dp[n−1][0]。