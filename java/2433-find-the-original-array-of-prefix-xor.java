import java.util.*;

class Solution {
    public int[] findArray(int[] pref) {
        int n = pref.length;
        int[] res = new int[n];
        res[0] = pref[0];
        for (int i = 1; i < n; i++) res[i] = pref[i] ^ pref[i - 1];
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(Arrays.toString(sol.findArray(new int[]{5, 2, 0, 3, 1})));
    }
}
