import java.util.*;

class Solution {
    public int countHomogenous(String s) {
        long res = 0, mod = 1_000_000_007;
        int i = 0, n = s.length();
        while (i < n) {
            int j = i;
            while (j < n && s.charAt(j) == s.charAt(i)) j++;
            long len = j - i;
            res = (res + len * (len + 1) / 2) % mod;
            i = j;
        }
        return (int) res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.countHomogenous("abbcccaa"));
    }
}
