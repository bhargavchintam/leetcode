import java.util.*;

class Solution {
    public boolean checkPowersOfThree(int n) {
        while (n > 0) {
            if (n % 3 == 2) return false;
            n /= 3;
        }
        return true;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.checkPowersOfThree(12));
        System.out.println(s.checkPowersOfThree(91));
        System.out.println(s.checkPowersOfThree(21));
    }
}
