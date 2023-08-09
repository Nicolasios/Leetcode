package ty202308.week2;

public class MaxAbsoluteSum {

//    给你一个整数数组 nums 。一个子数组 [numsl, numsl+1, ..., numsr-1, numsr] 的 和的绝对值 为 abs(numsl + numsl+1 + ... + numsr-1 + numsr) 。
//    请你找出 nums 中 和的绝对值 最大的任意子数组（可能为空），并返回该 最大值 。

    public static void main(String[] args) {
        int[] nums = {1, -3, 2, 3, -4};
        MaxAbsoluteSum maxAbsoluteSum = new MaxAbsoluteSum();
        int dp = maxAbsoluteSum.dp(nums);
        System.out.println(dp);
    }

    //暴力搜索 时间复杂度较高
    public int maxAbsoluteSum(int[] nums) {
        int max = 0;

        for (int i = 0; i < nums.length; i++) {
            for (int j = i; j < nums.length; j++) {
                int calculate = calculate(i, j, nums);
                int abs = Math.abs(calculate);
                max = Math.max(abs, max);
            }
        }

        return max;
    }

    int calculate(int begin, int end, int[] nums) {
        int res = 0;
        for (int i = begin; i <= end; i++) {
            res += nums[i];
        }
        return res;
    }


    //动态规划
    //
    public int dp(int[] nums) {
        int ans = 0, fmax = 0, fmin = 0;
        for (int num : nums) {
            fmax = Math.max(fmax, 0) + num;
            fmin = Math.min(fmin, 0) + num;
            ans = Math.max(ans, Math.max(fmax, Math.abs(fmin)));
        }
        return ans;
    }
}
