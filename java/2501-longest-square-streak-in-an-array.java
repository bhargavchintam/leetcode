import java.util.*;

class Solution {
    public int longestSquareStreak(int[] nums) {
        Set<Integer> set = new HashSet<>();
        for (int x : nums) set.add(x);
        int res = -1;
        for (int x : set) {
            long cur = x;
            int len = 1;
            while (cur * cur <= 100000 && set.contains((int) (cur * cur))) {
                cur = cur * cur;
                len++;
            }
            if (len >= 2) res = Math.max(res, len);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.longestSquareStreak(new int[]{4, 3, 6, 16, 8, 2}));
    }
}
