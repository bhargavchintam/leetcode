import java.util.*;

class Solution {
    public boolean isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.isPowerOfTwo(16));
    }
}
