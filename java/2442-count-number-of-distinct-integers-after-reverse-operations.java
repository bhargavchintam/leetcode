import java.util.*;

class Solution {
    public int countDistinctIntegers(int[] nums) {
        Set<Integer> set = new HashSet<>();
        for (int x : nums) {
            set.add(x);
            int rev = Integer.parseInt(new StringBuilder(Integer.toString(x)).reverse().toString());
            set.add(rev);
        }
        return set.size();
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.countDistinctIntegers(new int[]{1, 13, 10, 12, 31}));
    }
}
