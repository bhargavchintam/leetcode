import java.util.*;

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 1) return nums[0];
        return Math.max(robLine(nums, 0, n - 2), robLine(nums, 1, n - 1));
    }

    private int robLine(int[] nums, int lo, int hi) {
        int prev = 0, cur = 0;
        for (int i = lo; i <= hi; i++) {
            int tmp = Math.max(cur, prev + nums[i]);
            prev = cur;
            cur = tmp;
        }
        return cur;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.rob(new int[]{2, 3, 2}));
        System.out.println(s.rob(new int[]{1, 2, 3, 1}));
    }
}
