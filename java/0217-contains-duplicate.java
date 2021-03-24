import java.util.*;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> seen = new HashSet<>();
        for (int x : nums) {
            if (!seen.add(x)) return true;
        }
        return false;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.containsDuplicate(new int[]{1, 2, 3, 1}));
        System.out.println(s.containsDuplicate(new int[]{1, 2, 3, 4}));
    }
}
