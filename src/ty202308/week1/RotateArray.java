package ty202308.week1;

import java.util.Arrays;

public class RotateArray {
    //    给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5,6,7};
        RotateArray rotateArray = new RotateArray();
        rotateArray.rotate(nums,3);
    }

    public void rotate(int[] nums, int k) {
        int length = nums.length;
        k = k % length;
        int[] copy = Arrays.copyOf(nums, length);
        for (int i = 0; i < length; i++) {
            nums[(i + k) % length] = copy[i];
        }
    }
}
