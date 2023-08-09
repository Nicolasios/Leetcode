package ty202308.week1;

public class UniquePathsIII {
    //    在二维网格 grid 上，有 4 种类型的方格：
//
//     1 表示起始方格。且只有一个起始方格。
//     2 表示结束方格，且只有一个结束方格。
//     0 表示我们可以走过的空方格。
//     -1 表示我们无法跨越的障碍。
//    返回在四个方向（上、下、左、右）上行走时，从起始方格到结束方格的不同路径的数目。
//
//    每一个无障碍方格都要通过一次，但是一条路径中不能重复通过同一个方格。
//    [1,0,0,0],
//    [0,0,0,0],
//    [0,0,2,-1]
    public static void main(String[] args) {
        int[][] source = {
                {1,0,0,0},{0,0,0,0},{0,0,2,-1}
        };
        UniquePathsIII uniquePathsIII = new UniquePathsIII();
        uniquePathsIII.uniquePathsIII(source);
    }
    static int[][] dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    public int uniquePathsIII(int[][] grid) {
        int r = grid.length, c = grid[0].length;
        int si = 0, sj = 0, n = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 0) {
                    n++;
                } else if (grid[i][j] == 1) {
                    n++;
                    si = i;
                    sj = j;
                }
            }
        }
        return dfs(grid, si, sj, n);
    }

    public int dfs(int[][] grid, int i, int j, int n) {
        if (grid[i][j] == 2) {
            return n == 0 ? 1 : 0;
        }
        int r = grid.length, c = grid[0].length;
        int t = grid[i][j];
        grid[i][j] = -1;
        int res = 0;
        for (int[] dir : dirs) {
            int ni = i + dir[0], nj = j + dir[1];
            if (ni >= 0 && ni < r && nj >= 0 && nj < c && (grid[ni][nj] == 0 || grid[ni][nj] == 2)) {
                res += dfs(grid, ni, nj, n - 1);
            }
        }
        grid[i][j] = t;
        return res;
    }

}
