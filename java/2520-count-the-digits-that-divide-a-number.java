import java.util.*;

class Solution {
    public int countDigits(int num) {
        int cnt = 0, n = num;
        while (n > 0) {
            int d = n % 10;
            if (num % d == 0) cnt++;
            n /= 10;
        }
        return cnt;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.countDigits(121));
    }
}
