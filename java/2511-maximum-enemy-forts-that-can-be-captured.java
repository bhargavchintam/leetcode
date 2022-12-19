import java.util.*;

class Solution {
    public int captureForts(int[] forts) {
        int n = forts.length, res = 0;
        int i = 0;
        while (i < n) {
            if (forts[i] != 0) {
                int j = i + 1;
                while (j < n && forts[j] == 0) j++;
                if (j < n && forts[j] != forts[i]) res = Math.max(res, j - i - 1);
                i = j;
            } else {
                i++;
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.captureForts(new int[]{1, 0, 0, -1, 0, 0, 0, 0, 1}));
    }
}
