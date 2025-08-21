import java.util.*;

class Solution {
    public int countSubstrings(String s, String t) {
        int n = s.length(), m = t.length(), res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int diff = 0, k = 0;
                while (i + k < n && j + k < m) {
                    if (s.charAt(i + k) != t.charAt(j + k)) diff++;
                    if (diff > 1) break;
                    if (diff == 1) res++;
                    k++;
                }
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.countSubstrings("aba", "baba"));
    }
}
