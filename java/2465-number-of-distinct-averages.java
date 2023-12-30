import java.util.*;

class Solution {
    public int distinctAverages(int[] nums) {
        Arrays.sort(nums);
        Set<Double> set = new HashSet<>();
        int i = 0, j = nums.length - 1;
        while (i < j) {
            set.add((nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }
        return set.size();
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.distinctAverages(new int[]{4, 1, 4, 0, 3, 5}));
    }
}
