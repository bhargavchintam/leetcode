import java.util.*;

class Solution {
    public int commonFactors(int a, int b) {
        int n = Math.min(a, b), cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (a % i == 0 && b % i == 0) cnt++;
        }
        return cnt;
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println(sol.commonFactors(12, 6));
    }
}
