import java.util.*;

class Solution {
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        Arrays.sort(boxTypes, (x, y) -> y[1] - x[1]);
        int res = 0;
        for (int[] b : boxTypes) {
            int take = Math.min(b[0], truckSize);
            res += take * b[1];
            truckSize -= take;
            if (truckSize == 0) break;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maximumUnits(new int[][]{{1,3},{2,2},{3,1}}, 4));
        System.out.println(s.maximumUnits(new int[][]{{5,10},{2,5},{4,7},{3,9}}, 10));
    }
}
