import java.util.*;

class Solution {
    public int nearestValidPoint(int x, int y, int[][] points) {
        int best = -1, bestDist = Integer.MAX_VALUE;
        for (int i = 0; i < points.length; i++) {
            int px = points[i][0], py = points[i][1];
            if (px == x || py == y) {
                int d = Math.abs(px - x) + Math.abs(py - y);
                if (d < bestDist) { bestDist = d; best = i; }
            }
        }
        return best;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.nearestValidPoint(3, 4, new int[][]{{1,2},{3,1},{2,4},{2,3},{3,4}}));
    }
}
