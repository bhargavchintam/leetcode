import java.util.*;

class Solution {
    public int maximumValue(String[] strs) {
        int res = 0;
        for (String s : strs) {
            boolean digit = true;
            for (char c : s.toCharArray()) {
                if (!Character.isDigit(c)) {
                    digit = false;
                    break;
                }
            }
            int v = digit ? Integer.parseInt(s) : s.length();
            res = Math.max(res, v);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.maximumValue(new String[]{"alic3", "bob", "3", "4", "00000"}));
    }
}
