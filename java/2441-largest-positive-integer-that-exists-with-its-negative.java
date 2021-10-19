import java.util.*;

class Solution {
    public int findMaxK(int[] nums) {
        Set<Integer> set = new HashSet<>();
        for (int x : nums) set.add(x);
        int res = -1;
        for (int x : nums) {
            if (x > 0 && set.contains(-x)) res = Math.max(res, x);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.findMaxK(new int[]{-1, 2, -3, 3}));
    }
}
