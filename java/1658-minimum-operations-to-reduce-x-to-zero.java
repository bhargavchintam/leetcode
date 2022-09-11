import java.util.*;

class Solution {
    public int minOperations(int[] nums, int x) {
        int total = 0;
        for (int v : nums) total += v;
        int target = total - x;
        if (target < 0) return -1;
        if (target == 0) return nums.length;
        int lo = 0, sum = 0, best = -1;
        for (int hi = 0; hi < nums.length; hi++) {
            sum += nums[hi];
            while (sum > target) sum -= nums[lo++];
            if (sum == target) best = Math.max(best, hi - lo + 1);
        }
        return best == -1 ? -1 : nums.length - best;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.minOperations(new int[]{1,1,4,2,3}, 5));
        System.out.println(s.minOperations(new int[]{5,6,7,8,9}, 4));
        System.out.println(s.minOperations(new int[]{3,2,20,1,1,3}, 10));
    }
}
