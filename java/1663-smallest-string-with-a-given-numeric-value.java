import java.util.*;

class Solution {
    public String getSmallestString(int n, int k) {
        char[] res = new char[n];
        Arrays.fill(res, 'a');
        int remain = k - n;
        int i = n - 1;
        while (remain > 0) {
            int add = Math.min(remain, 25);
            res[i] = (char) ('a' + add);
            remain -= add;
            i--;
        }
        return new String(res);
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.getSmallestString(3, 27));
        System.out.println(s.getSmallestString(5, 73));
    }
}
