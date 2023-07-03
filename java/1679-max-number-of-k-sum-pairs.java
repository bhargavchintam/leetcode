import java.util.*;

class Solution {
    public int maxOperations(int[] nums, int k) {
        Map<Integer, Integer> cnt = new HashMap<>();
        for (int x : nums) cnt.merge(x, 1, Integer::sum);
        int res = 0;
        for (int x : cnt.keySet()) {
            int y = k - x;
            if (!cnt.containsKey(y)) continue;
            if (x == y) res += cnt.get(x) / 2;
            else if (x < y) res += Math.min(cnt.get(x), cnt.get(y));
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxOperations(new int[]{1,2,3,4}, 5));
        System.out.println(s.maxOperations(new int[]{3,1,3,4,3}, 6));
    }
}
