import java.util.*;

class Solution {
    public int calculate(String s) {
        Deque<Integer> st = new ArrayDeque<>();
        int res = 0, num = 0, sign = 1;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isDigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '+') {
                res += sign * num;
                num = 0;
                sign = 1;
            } else if (c == '-') {
                res += sign * num;
                num = 0;
                sign = -1;
            } else if (c == '(') {
                st.push(res);
                st.push(sign);
                res = 0;
                sign = 1;
            } else if (c == ')') {
                res += sign * num;
                num = 0;
                res *= st.pop();
                res += st.pop();
            }
        }
        return res + sign * num;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.calculate("1 + 1"));
        System.out.println(s.calculate(" 2-1 + 2 "));
        System.out.println(s.calculate("(1+(4+5+2)-3)+(6+8)"));
    }
}
