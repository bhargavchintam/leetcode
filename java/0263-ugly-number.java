import java.util.*;

class Solution {
    public boolean isUgly(int n) {
        if (n <= 0) return false;
        for (int p : new int[]{2, 3, 5}) {
            while (n % p == 0) n /= p;
        }
        return n == 1;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.isUgly(6));
        System.out.println(s.isUgly(1));
        System.out.println(s.isUgly(14));
    }
}
