import java.util.*;

class Solution {
    public int countTime(String time) {
        int cnt = 0;
        for (int h = 0; h < 24; h++) {
            for (int m = 0; m < 60; m++) {
                String cur = String.format("%02d:%02d", h, m);
                boolean ok = true;
                for (int i = 0; i < 5; i++) {
                    char c = time.charAt(i);
                    if (c != '?' && c != cur.charAt(i)) {
                        ok = false;
                        break;
                    }
                }
                if (ok) cnt++;
            }
        }
        return cnt;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.countTime("?5:00"));
    }
}
