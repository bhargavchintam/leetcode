import java.util.*;

class Solution {
    public int pivotInteger(int n) {
        int total = n * (n + 1) / 2;
        int x = (int) Math.sqrt(total);
        if (x * x == total) return x;
        return -1;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.pivotInteger(8));
    }
}
