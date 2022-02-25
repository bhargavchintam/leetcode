import java.util.*;

class Solution {
    public int alternateDigitSum(int n) {
        String s = Integer.toString(n);
        int res = 0, sign = 1;
        for (char c : s.toCharArray()) {
            res += sign * (c - '0');
            sign = -sign;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.alternateDigitSum(521));
    }
}
