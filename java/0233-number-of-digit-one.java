import java.util.*;

class Solution {
    public int countDigitOne(int n) {
        long cnt = 0;
        for (long place = 1; place <= n; place *= 10) {
            long higher = n / (place * 10);
            long cur = (n / place) % 10;
            long lower = n % place;
            if (cur == 0) {
                cnt += higher * place;
            } else if (cur == 1) {
                cnt += higher * place + lower + 1;
            } else {
                cnt += (higher + 1) * place;
            }
        }
        return (int) cnt;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.countDigitOne(13));
    }
}
