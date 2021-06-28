import java.util.*;

class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int indexDiff, int valueDiff) {
        TreeSet<Long> window = new TreeSet<>();
        for (int i = 0; i < nums.length; i++) {
            long x = nums[i];
            Long floor = window.floor(x + valueDiff);
            if (floor != null && floor >= x - (long) valueDiff) return true;
            window.add(x);
            if (window.size() > indexDiff) window.remove((long) nums[i - indexDiff]);
        }
        return false;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.containsNearbyAlmostDuplicate(new int[]{1, 2, 3, 1}, 3, 0));
        System.out.println(s.containsNearbyAlmostDuplicate(new int[]{1, 5, 9, 1, 5, 9}, 2, 3));
    }
}
