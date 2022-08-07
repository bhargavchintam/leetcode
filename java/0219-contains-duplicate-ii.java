import java.util.*;

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer, Integer> mp = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            Integer prev = mp.get(nums[i]);
            if (prev != null && i - prev <= k) return true;
            mp.put(nums[i], i);
        }
        return false;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.containsNearbyDuplicate(new int[]{1, 2, 3, 1}, 3));
        System.out.println(s.containsNearbyDuplicate(new int[]{1, 0, 1, 1}, 1));
        System.out.println(s.containsNearbyDuplicate(new int[]{1, 2, 3, 1, 2, 3}, 2));
    }
}
