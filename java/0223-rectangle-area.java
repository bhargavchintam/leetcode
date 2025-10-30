import java.util.*;

class Solution {
    public int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        long areaA = (long) (ax2 - ax1) * (ay2 - ay1);
        long areaB = (long) (bx2 - bx1) * (by2 - by1);
        int overlapX = Math.min(ax2, bx2) - Math.max(ax1, bx1);
        int overlapY = Math.min(ay2, by2) - Math.max(ay1, by1);
        long overlap = 0;
        if (overlapX > 0 && overlapY > 0) overlap = (long) overlapX * overlapY;
        return (int) (areaA + areaB - overlap);
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.computeArea(-3, 0, 3, 4, 0, -1, 9, 2));
        System.out.println(s.computeArea(-2, -2, 2, 2, -2, -2, 2, 2));
    }
}
