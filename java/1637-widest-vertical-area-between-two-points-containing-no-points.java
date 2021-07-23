import java.util.*;

class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        int[] xs = new int[points.length];
        for (int i = 0; i < points.length; i++) xs[i] = points[i][0];
        Arrays.sort(xs);
        int res = 0;
        for (int i = 1; i < xs.length; i++) res = Math.max(res, xs[i] - xs[i - 1]);
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxWidthOfVerticalArea(new int[][]{{8,7},{9,9},{7,4},{9,7}}));
    }
}
