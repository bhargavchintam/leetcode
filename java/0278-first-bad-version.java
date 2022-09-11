import java.util.*;

class Solution {
    static int badVersion = 4;

    boolean isBadVersion(int version) {
        return version >= badVersion;
    }

    public int firstBadVersion(int n) {
        int lo = 1, hi = n;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (isBadVersion(mid)) hi = mid;
            else lo = mid + 1;
        }
        return lo;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.firstBadVersion(5));
    }
}
