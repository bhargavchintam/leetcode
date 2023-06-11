import java.util.*;

class Solution {
    public int unequalTriplets(int[] nums) {
        int n = nums.length, cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k]) cnt++;
                }
            }
        }
        return cnt;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.unequalTriplets(new int[]{4, 4, 2, 4, 3}));
    }
}
