import java.util.*;

class Solution {
    public int calculate(String s) {
        Deque<Integer> st = new ArrayDeque<>();
        int num = 0;
        char sign = '+';
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isDigit(c)) {
                num = num * 10 + (c - '0');
            }
            if ((!Character.isDigit(c) && c != ' ') || i == s.length() - 1) {
                if (sign == '+') {
                    st.push(num);
                } else if (sign == '-') {
                    st.push(-num);
                } else if (sign == '*') {
                    st.push(st.pop() * num);
                } else if (sign == '/') {
                    st.push(st.pop() / num);
                }
                sign = c;
                num = 0;
            }
        }
        int res = 0;
        while (!st.isEmpty()) {
            res += st.pop();
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.calculate("3+2*2"));
    }
}
