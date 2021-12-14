import java.util.*;

class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        Map<Integer, Integer> cnt = new HashMap<>();
        long sum = 0, res = 0;
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            cnt.merge(nums[i], 1, Integer::sum);
            if (i >= k) {
                sum -= nums[i - k];
                cnt.merge(nums[i - k], -1, Integer::sum);
                if (cnt.get(nums[i - k]) == 0) cnt.remove(nums[i - k]);
            }
            if (i >= k - 1 && cnt.size() == k) res = Math.max(res, sum);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.maximumSubarraySum(new int[]{1, 5, 4, 2, 9, 9, 9}, 3));
    }
}
