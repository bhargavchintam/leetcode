import java.util.*;

class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> res = new ArrayList<>();
        int n = nums.length;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j + 1 < n && nums[j + 1] == nums[j] + 1) {
                j++;
            }
            if (i == j) {
                res.add(String.valueOf(nums[i]));
            } else {
                res.add(nums[i] + "->" + nums[j]);
            }
            i = j + 1;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        int[] nums = {0, 1, 2, 4, 5, 7};
        System.out.println(sol.summaryRanges(nums));
    }
}
