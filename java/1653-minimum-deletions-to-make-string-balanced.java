import java.util.*;

class Solution {
    public int minimumDeletions(String s) {
        int countB = 0, res = 0;
        for (char c : s.toCharArray()) {
            if (c == 'b') countB++;
            else res = Math.min(countB, res + 1);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.minimumDeletions("aababbab"));
        System.out.println(s.minimumDeletions("bbaaaaabb"));
    }
}
