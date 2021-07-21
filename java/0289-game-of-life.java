import java.util.*;

class Solution {
    public void gameOfLife(int[][] board) {
        int m = board.length;
        int n = board[0].length;
        int[][] copy = new int[m][n];
        for (int i = 0; i < m; i++) copy[i] = board[i].clone();
        int[] dx = {-1, -1, -1, 0, 0, 1, 1, 1};
        int[] dy = {-1, 0, 1, -1, 1, -1, 0, 1};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int live = 0;
                for (int d = 0; d < 8; d++) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    if (ni >= 0 && ni < m && nj >= 0 && nj < n && copy[ni][nj] == 1) live++;
                }
                if (copy[i][j] == 1) {
                    if (live < 2 || live > 3) board[i][j] = 0;
                } else {
                    if (live == 3) board[i][j] = 1;
                }
            }
        }
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        int[][] board = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
        s.gameOfLife(board);
        for (int[] row : board) System.out.println(Arrays.toString(row));
    }
}
