import java.util.*;

class Solution {
    public int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : 2 * n;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.smallestEvenMultiple(5));
    }
}
