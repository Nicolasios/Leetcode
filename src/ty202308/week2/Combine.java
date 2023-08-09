package ty202308.week2;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class Combine {
    //结果存放
    List<Integer> temp = new ArrayList<Integer>();
    List<List<Integer>> ans = new ArrayList<List<Integer>>();


    //    给定两个整数 n 和 k，返回范围 [1, n] 中所有可能的 k 个数的组合。
    //    你可以按 任何顺序 返回答案。
    public static void main(String[] args) {
        Combine combine = new Combine();
        List<List<Integer>> res = combine.combine(4, 2);
        System.out.println(res);
    }


    public List<List<Integer>> combine(int n, int k) {
        dfs(1, n, k);
        return ans;
    }

    public void dfs(int cur, int n, int k) {
        // 剪枝：temp 长度加上区间 [cur, n] 的长度小于 k，不可能构造出长度为 k 的 temp
        if (temp.size() + (n - cur + 1) < k) {
            return;
        }
        // 记录合法的答案
        if (temp.size() == k) {
            ans.add(new ArrayList<Integer>(temp));
            return;
        }
        // 考虑选择当前位置
        temp.add(cur);
        dfs(cur + 1, n, k);
        temp.remove(temp.size() - 1);
        // 考虑不选择当前位置
        dfs(cur + 1, n, k);
    }


}
