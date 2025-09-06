import java.util.*;

class Solution {
    public int partitionString(String s) {
        int res = 1;
        boolean[] seen = new boolean[26];
        for (char c : s.toCharArray()) {
            int idx = c - 'a';
            if (seen[idx]) {
                res++;
                seen = new boolean[26];
            }
            seen[idx] = true;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.partitionString("abacaba"));
    }
}
