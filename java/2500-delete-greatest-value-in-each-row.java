import java.util.*;

class Solution {
    public int deleteGreatestValue(int[][] grid) {
        for (int[] row : grid) Arrays.sort(row);
        int m = grid.length, n = grid[0].length, res = 0;
        for (int j = 0; j < n; j++) {
            int mx = 0;
            for (int i = 0; i < m; i++) mx = Math.max(mx, grid[i][j]);
            res += mx;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.deleteGreatestValue(new int[][]{{1, 2, 4}, {3, 3, 1}}));
    }
}
