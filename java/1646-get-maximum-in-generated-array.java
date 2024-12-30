import java.util.*;

class Solution {
    public int getMaximumGenerated(int n) {
        if (n == 0) return 0;
        int[] nums = new int[n + 1];
        nums[1] = 1;
        int res = 1;
        for (int i = 1; 2 * i <= n; i++) {
            nums[2 * i] = nums[i];
            res = Math.max(res, nums[2 * i]);
            if (2 * i + 1 <= n) {
                nums[2 * i + 1] = nums[i] + nums[i + 1];
                res = Math.max(res, nums[2 * i + 1]);
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.getMaximumGenerated(7));
        System.out.println(s.getMaximumGenerated(2));
        System.out.println(s.getMaximumGenerated(3));
    }
}
