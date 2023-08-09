package ty202308.week1;

public class CardFlip {
//    在桌子上有 n 张卡片，每张卡片的正面和背面都写着一个正数（正面与背面上的数有可能不一样）。
//    我们可以先翻转任意张卡片，然后选择其中一张卡片。
//    如果选中的那张卡片背面的数字 x 与任意一张卡片的正面的数字都不同，那么这个数字是我们想要的数字。
//    哪个数是这些想要的数字中最小的数（找到这些数中的最小值）呢？如果没有一个数字符合要求的，输出 0 。
//    其中, fronts[i] 和 backs[i] 分别代表第 i 张卡片的正面和背面的数字。
//    如果我们通过翻转卡片来交换正面与背面上的数，那么当初在正面的数就变成背面的数，背面的数就变成正面的数。
//    fronts = [1,2,4,4,7], backs = [1,3,4,1,3]

    public static void main(String[] args) {
        int[] fronts = {1, 2, 4, 4, 7};
        int[] backs = {1, 3, 4, 1, 3};
        flipgame(fronts, backs);
    }

    public static int flipgame(int[] fronts, int[] backs) {
        int res = Integer.MAX_VALUE;
        int length = fronts.length;
        for (int i = 0; i < length; i++) {
            int front = fronts[i];
            int back = backs[i];
            if (front == back) {
                continue;
            }
            boolean flag1 = true;
            for (int j = 0; j < length; j++) {
                if (fronts[j] == front && backs[j] == front) {
                    flag1 = false;
                }
            }
            if (flag1) {
                if (front < res) {
                    res = front;
                }
            }
            boolean flag2 = true;
            for (int j = 0; j < length; j++) {
                if (fronts[j] == back && backs[j] == back) {
                    flag2 = false;
                }
            }
            if (flag2) {
                if (back < res) {
                    res = back;
                }
            }
        }
        if(res == Integer.MAX_VALUE){
            return 0;
        }else {
            return res;
        }
    }
}
