import java.util.*;

class Solution {
    public int similarPairs(String[] words) {
        Map<Integer, Integer> mp = new HashMap<>();
        int res = 0;
        for (String w : words) {
            int mask = 0;
            for (char c : w.toCharArray()) mask |= 1 << (c - 'a');
            int cur = mp.getOrDefault(mask, 0);
            res += cur;
            mp.put(mask, cur + 1);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.similarPairs(new String[]{"aba", "aabb", "abcd", "bac", "aabc"}));
    }
}
