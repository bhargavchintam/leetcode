import java.util.*;

class Solution {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int[] cnt = new int[n + 1];
        for (int c : citations) {
            cnt[Math.min(c, n)]++;
        }
        int total = 0;
        for (int h = n; h >= 0; h--) {
            total += cnt[h];
            if (total >= h) return h;
        }
        return 0;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.hIndex(new int[]{3, 0, 6, 1, 5}));
        System.out.println(s.hIndex(new int[]{1, 3, 1}));
    }
}
