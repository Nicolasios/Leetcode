package ty202308.week2;

import java.util.Arrays;
import java.util.Deque;
import java.util.LinkedList;

public class MaxSlidingWindow {
//    给你一个整数数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 k 个数字。滑动窗口每次只向右移动一位。
//    返回 滑动窗口中的最大值 。
//eg.1
//    输入：nums = [1,3,-1,-3,5,3,6,7], k = 3
//    输出：[3,3,5,5,6,7]
//    解释：
//    滑动窗口的位置                最大值
//---------------               -----
//        [1  3  -1] -3  5  3  6  7       3
//        1 [3  -1  -3] 5  3  6  7       3
//        1  3 [-1  -3  5] 3  6  7       5
//        1  3  -1 [-3  5  3] 6  7       5
//        1  3  -1  -3 [5  3  6] 7       6
//        1  3  -1  -3  5 [3  6  7]      7


    //维护一个队列保证最小值查询的时间复杂度为o(1)
    public int[] maxSlidingWindow(int[] nums, int k) {
        if(nums.length == 0 || k == 0) return new int[0];
        Deque<Integer> deque = new LinkedList<>();
        int[] res = new int[nums.length - k + 1];
        for(int j = 0, i = 1 - k; j < nums.length; i++, j++) {
            // 删除 deque 中对应的 nums[i-1]
            if(i > 0 && deque.peekFirst() == nums[i - 1])
                deque.removeFirst();
            // 保持 deque 递减
            while(!deque.isEmpty() && deque.peekLast() < nums[j])
                deque.removeLast();
            deque.addLast(nums[j]);
            // 记录窗口最大值
            if(i >= 0)
                res[i] = deque.peekFirst();
        }
        return res;
    }

    public int[] maxSlidingWindowTy(int[] nums, int k) {
        int max = max(nums, 0, k);
        int length = nums.length;
        int[] res = new int[nums.length - k + 1];

        res[0] = max;
        if (k == length) {
            return res;
        }
        for (int i = 1; i + k <= nums.length; i++) {
            //如果出去的不是最大值，则需要比较新加入的与最大值
            if (nums[i - 1] != max) {
                res[i] = Math.max(nums[i + k - 1], max);
            } else {
                //如果出去的是最大值，则需要重新选出最大值
                res[i] = max(nums, i, i + k);
            }
            max = res[i];
        }
        return res;
    }

    public int max(int[] nums, int begin, int end) {
        int max = -100000;
        for (int i = begin; i < end; i++) {
            max = Math.max(max, nums[i]);
        }
        return max;
    }

    public static void main(String[] args) {
        int[] nums = {1, 3, -1, -3, 5, 3, 6, 7};
        MaxSlidingWindow maxSlidingWindow = new MaxSlidingWindow();
        int[] ints = maxSlidingWindow.maxSlidingWindow(nums, 3);
        System.out.println(Arrays.toString(ints));
    }


}
