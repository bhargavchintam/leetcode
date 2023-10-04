import java.util.*;

class Solution {
    int toMin(String s) {
        int h = Integer.parseInt(s.substring(0, 2));
        int m = Integer.parseInt(s.substring(3));
        return h * 60 + m;
    }

    public boolean haveConflict(String[] event1, String[] event2) {
        int s1 = toMin(event1[0]), e1 = toMin(event1[1]);
        int s2 = toMin(event2[0]), e2 = toMin(event2[1]);
        return s1 <= e2 && s2 <= e1;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.haveConflict(new String[]{"01:15", "02:00"}, new String[]{"02:00", "03:00"}));
    }
}
