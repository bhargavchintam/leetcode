import java.util.*;

class Solution {
    public int concatenatedBinary(int n) {
        long res = 0;
        int mod = 1_000_000_007;
        for (int i = 1; i <= n; i++) {
            int bits = 32 - Integer.numberOfLeadingZeros(i);
            res = ((res << bits) | i) % mod;
        }
        return (int) res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.concatenatedBinary(1));
        System.out.println(s.concatenatedBinary(3));
        System.out.println(s.concatenatedBinary(12));
    }
}
