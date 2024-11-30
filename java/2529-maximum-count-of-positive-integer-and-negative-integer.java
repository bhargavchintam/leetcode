import java.util.*;

class Solution {
    public int maximumCount(int[] nums) {
        int pos = 0, neg = 0;
        for (int x : nums) {
            if (x > 0) pos++;
            if (x < 0) neg++;
        }
        return Math.max(pos, neg);
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.maximumCount(new int[]{-2, -1, -1, 1, 2, 3}));
    }
}
