import java.util.*;

class Solution {
    public int minOperations(String s) {
        int cnt0 = 0;
        for (int i = 0; i < s.length(); i++) {
            char expect = i % 2 == 0 ? '0' : '1';
            if (s.charAt(i) != expect) cnt0++;
        }
        return Math.min(cnt0, s.length() - cnt0);
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.minOperations("0100"));
        System.out.println(s.minOperations("10"));
        System.out.println(s.minOperations("1111"));
    }
}
