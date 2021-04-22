import java.util.*;

class Solution {
    public int mostFrequentEven(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<>();
        for (int x : nums) {
            if (x % 2 == 0) mp.merge(x, 1, Integer::sum);
        }
        int res = -1, best = 0;
        for (Map.Entry<Integer, Integer> e : mp.entrySet()) {
            int v = e.getKey(), c = e.getValue();
            if (c > best || (c == best && v < res)) {
                best = c;
                res = v;
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.mostFrequentEven(new int[]{0, 1, 2, 2, 4, 4, 1}));
    }
}
