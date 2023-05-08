import java.util.*;

class Solution {
    int[] days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int toDay(String d) {
        int m = Integer.parseInt(d.substring(0, 2));
        int day = Integer.parseInt(d.substring(3));
        int res = day;
        for (int i = 0; i < m - 1; i++) res += days[i];
        return res;
    }

    public int countDaysTogether(String arriveAlice, String leaveAlice, String arriveBob, String leaveBob) {
        int a1 = toDay(arriveAlice), a2 = toDay(leaveAlice);
        int b1 = toDay(arriveBob), b2 = toDay(leaveBob);
        int lo = Math.max(a1, b1), hi = Math.min(a2, b2);
        return Math.max(0, hi - lo + 1);
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.countDaysTogether("08-15", "08-18", "08-16", "08-19"));
    }
}
