import java.util.*;

class Solution {
    public int[] findBall(int[][] grid) {
        int rows = grid.length, cols = grid[0].length;
        int[] res = new int[cols];
        for (int c = 0; c < cols; c++) {
            int col = c, row = 0;
            while (row < rows) {
                int dir = grid[row][col];
                int nc = col + dir;
                if (nc < 0 || nc >= cols || grid[row][nc] != dir) { col = -1; break; }
                col = nc;
                row++;
            }
            res[c] = col;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        int[][] grid = {{1,1,1,-1,-1},{1,1,1,-1,-1},{-1,-1,-1,1,1},{1,1,1,1,-1},{-1,-1,-1,-1,-1}};
        System.out.println(Arrays.toString(s.findBall(grid)));
    }
}
