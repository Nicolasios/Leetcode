package ty202308.week2;

import java.util.Arrays;

public class TwoSum {
    public static void main(String[] args) {
        TwoSum twoSum = new TwoSum();
        int[] nums = {-3,4,3,90};
        int[] res = twoSum.twoSum(nums, 0);
        System.out.println(Arrays.toString(res));
    }

    //排序后前后指针查找

    public int[] twoSum(int[] nums, int target) {
        int[] clone = nums.clone();
        Arrays.sort(clone);
        int[] res = new int[2];
        int length = clone.length;
        for (int begin = 0, end = length - 1; begin < end; ) {
            if (clone[begin] + clone[end] > target) {
                end--;
            } else if (clone[begin] + clone[end] < target) {
                begin++;
            } else {
                res[0] = begin;
                res[1] = end;
                break;
            }
        }
        //获取下标
        for (int i = 0; i < nums.length; i++) {
            if (clone[res[0]] == nums[i]) {
                res[0] = i;
                break;
            }
        }
        for (int i = nums.length - 1; i >= 0; i--) {
            if (clone[res[1]] == nums[i]) {
                res[1] = i;
                break;
            }
        }
        Arrays.sort(res);
        return res;
    }
}
