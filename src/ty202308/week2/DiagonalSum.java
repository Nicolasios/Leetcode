package ty202308.week2;

public class DiagonalSum {

//    给你一个正方形矩阵 mat，请你返回矩阵对角线元素的和。
//    请你返回在矩阵主对角线上的元素和副对角线上且不在主对角线上元素的和

    public int diagonalSum(int[][] mat) {
        int n = mat.length;
        int res = 0;

        for (int i = 0; i < n; i++) {
            res += mat[i][i];
        }
        for (int i = 0; i < n; i++) {
            res += mat[i][n - i - 1];
        }
        if (n % 2 == 1) {
            res = res - mat[(n - 1) / 2][(n - 1) / 2];
        }
        return res;

    }
}
