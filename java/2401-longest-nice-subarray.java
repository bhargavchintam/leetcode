import java.util.*;

class Solution {
    public int longestNiceSubarray(int[] nums) {
        int n = nums.length, l = 0, mask = 0, res = 1;
        for (int r = 0; r < n; r++) {
            while ((mask & nums[r]) != 0) {
                mask ^= nums[l];
                l++;
            }
            mask |= nums[r];
            res = Math.max(res, r - l + 1);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.longestNiceSubarray(new int[]{1, 3, 8, 48, 10}));
    }
}
