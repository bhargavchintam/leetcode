import java.util.*;

class Solution {
    public int maxDepth(String s) {
        int depth = 0, res = 0;
        for (char c : s.toCharArray()) {
            if (c == '(') { depth++; res = Math.max(res, depth); }
            else if (c == ')') depth--;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxDepth("(1+(2*3)+((8)/4))+1"));
        System.out.println(s.maxDepth("(1)+((2))+(((3)))"));
    }
}
