import java.util.*;

class Solution {
    public int countGoodStrings(int low, int high, int zero, int one) {
        int MOD = 1000000007;
        int[] dp = new int[high + 1];
        dp[0] = 1;
        long res = 0;
        for (int i = 1; i <= high; i++) {
            long cur = 0;
            if (i - zero >= 0) cur += dp[i - zero];
            if (i - one >= 0) cur += dp[i - one];
            dp[i] = (int) (cur % MOD);
            if (i >= low) res = (res + dp[i]) % MOD;
        }
        return (int) res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.countGoodStrings(3, 3, 1, 1));
    }
}
