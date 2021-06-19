import java.util.*;

class Solution {
    public boolean sumOfNumberAndReverse(int num) {
        for (int i = 0; i <= num; i++) {
            int rev = Integer.parseInt(new StringBuilder(Integer.toString(i)).reverse().toString());
            if (i + rev == num) return true;
        }
        return false;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.sumOfNumberAndReverse(443));
    }
}
