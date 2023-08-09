package ty202308.week2;

import java.util.Arrays;

public class SubarraySum {
    //    给你一个整数数组 nums 和一个整数 k ，请你统计并返回 该数组中和为 k 的连续子数组的个数 。
    public static void main(String[] args) {
        int[] nums = {1,-1,0};
        SubarraySum subarraySum = new SubarraySum();

        int i = subarraySum.subarraySum(nums, 0);
        System.out.println(i);
    }

    public int subarraySum(int[] nums, int k) {
        int res = 0;

        int length = nums.length;
        for (int i = 0; i < length; i++) {
            int sum = 0;
            for (int j = i; j < length; j++) {
                sum += nums[j];
                if (sum == k) {
                    res++;
                }
            }
        }

        return res;
    }
}
