import java.util.*;

class Solution {
    public int distinctIntegers(int n) {
        return n == 1 ? 1 : n - 1;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.distinctIntegers(5));
    }
}
