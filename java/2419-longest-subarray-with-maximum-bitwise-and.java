import java.util.*;

class Solution {
    public int longestSubarray(int[] nums) {
        int mx = 0;
        for (int x : nums) mx = Math.max(mx, x);
        int res = 0, cur = 0;
        for (int x : nums) {
            if (x == mx) cur++;
            else cur = 0;
            res = Math.max(res, cur);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.longestSubarray(new int[]{1, 2, 3, 3, 2, 2}));
    }
}
