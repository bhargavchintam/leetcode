import java.util.*;

class Solution {
    long digitSum(long x) {
        long s = 0;
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        return s;
    }

    public long makeIntegerBeautiful(long n, int target) {
        long p = 1;
        while (true) {
            long x = ((n + p - 1) / p) * p;
            if (digitSum(x) <= target) return x - n;
            p *= 10;
        }
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.makeIntegerBeautiful(16, 6));
    }
}
