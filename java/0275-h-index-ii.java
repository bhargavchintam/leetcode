import java.util.*;

class Solution {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int h = n - mid;
            if (citations[mid] >= h) hi = mid - 1;
            else lo = mid + 1;
        }
        return n - lo;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.hIndex(new int[]{0, 1, 3, 5, 6}));
        System.out.println(s.hIndex(new int[]{1, 2, 100}));
    }
}
