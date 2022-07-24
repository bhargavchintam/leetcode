import java.util.*;

class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        Set<Integer> seen = new HashSet<>();
        int lo = 0, sum = 0, res = 0;
        for (int hi = 0; hi < nums.length; hi++) {
            while (seen.contains(nums[hi])) {
                seen.remove(nums[lo]);
                sum -= nums[lo];
                lo++;
            }
            seen.add(nums[hi]);
            sum += nums[hi];
            res = Math.max(res, sum);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maximumUniqueSubarray(new int[]{4,2,4,5,6}));
        System.out.println(s.maximumUniqueSubarray(new int[]{5,2,1,2,5,2,1,2,5}));
    }
}
