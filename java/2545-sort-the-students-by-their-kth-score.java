import java.util.*;

class Solution {
    public int[][] sortTheStudents(int[][] score, int k) {
        Arrays.sort(score, (a, b) -> b[k] - a[k]);
        return score;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(Arrays.deepToString(sol.sortTheStudents(new int[][]{{10, 6, 9, 1}, {7, 5, 11, 2}, {4, 8, 3, 15}}, 2)));
    }
}
