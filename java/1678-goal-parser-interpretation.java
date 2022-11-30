import java.util.*;

class Solution {
    public String interpret(String command) {
        StringBuilder sb = new StringBuilder();
        int i = 0;
        while (i < command.length()) {
            if (command.charAt(i) == 'G') { sb.append('G'); i++; }
            else if (command.charAt(i + 1) == ')') { sb.append('o'); i += 2; }
            else { sb.append("al"); i += 4; }
        }
        return sb.toString();
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.interpret("G()(al)"));
    }
}
