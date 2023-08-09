package ty202308.week2;

public class SubtractProductAndSum {
    //    给你一个整数 n，请你帮忙计算并返回该整数「各位数字之积」与「各位数字之和」的差。

    public static void main(String[] args) {
        SubtractProductAndSum subtractProductAndSum = new SubtractProductAndSum();
        subtractProductAndSum.subtractProductAndSum(123);
    }

    public int subtractProductAndSum(int n) {
        int mul = 1;
        int sum = 0;
        while (n / 10 != 0) {
            int res = n % 10;
            mul *= res;
            sum += res;
            n = (n - res) / 10;
        }
        mul *= n;
        sum += n;
        System.out.println(mul);
        System.out.println(sum);
        return mul - sum;
    }
}
