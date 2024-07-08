import java.util.*;

class Solution {
    public int hardestWorker(int n, int[][] logs) {
        int prev = 0, best = -1, bestId = -1;
        for (int[] lg : logs) {
            int id = lg[0], t = lg[1];
            int dur = t - prev;
            if (dur > best || (dur == best && id < bestId)) {
                best = dur;
                bestId = id;
            }
            prev = t;
        }
        return bestId;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.hardestWorker(10, new int[][]{{0, 3}, {2, 5}, {0, 9}, {1, 15}}));
    }
}
