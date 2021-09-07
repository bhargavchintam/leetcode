import java.util.*;

class Solution {
    public long countSubarrays(int[] nums, int minK, int maxK) {
        long res = 0;
        int minPos = -1, maxPos = -1, badPos = -1;
        for (int i = 0; i < nums.length; i++) {
            int v = nums[i];
            if (v < minK || v > maxK) badPos = i;
            if (v == minK) minPos = i;
            if (v == maxK) maxPos = i;
            res += Math.max(0, Math.min(minPos, maxPos) - badPos);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.countSubarrays(new int[]{1, 3, 5, 2, 7, 5}, 1, 5));
    }
}
