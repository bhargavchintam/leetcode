import java.util.*;

class Solution {
    public int[][] restoreMatrix(int[] rowSum, int[] colSum) {
        int n = rowSum.length, m = colSum.length;
        int[][] res = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int v = Math.min(rowSum[i], colSum[j]);
                res[i][j] = v;
                rowSum[i] -= v;
                colSum[j] -= v;
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        int[][] r = s.restoreMatrix(new int[]{3, 8}, new int[]{4, 7});
        for (int[] row : r) System.out.println(Arrays.toString(row));
    }
}
