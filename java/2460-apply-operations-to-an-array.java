import java.util.*;

class Solution {
    public int[] applyOperations(int[] nums) {
        int n = nums.length;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        int[] res = new int[n];
        int idx = 0;
        for (int x : nums) {
            if (x != 0) res[idx++] = x;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(Arrays.toString(sol.applyOperations(new int[]{1, 2, 2, 1, 1, 0})));
    }
}
