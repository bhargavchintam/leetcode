import java.util.*;

class Solution {
    public boolean canWinNim(int n) {
        return n % 4 != 0;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.canWinNim(4));
    }
}
