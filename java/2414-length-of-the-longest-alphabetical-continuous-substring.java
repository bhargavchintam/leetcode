import java.util.*;

class Solution {
    public int longestContinuousSubstring(String s) {
        int res = 1, cur = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == s.charAt(i - 1) + 1) cur++;
            else cur = 1;
            res = Math.max(res, cur);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.longestContinuousSubstring("abacaba"));
    }
}
