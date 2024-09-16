import java.util.*;

class Solution {
    public int[] decrypt(int[] code, int k) {
        int n = code.length;
        int[] res = new int[n];
        if (k == 0) return res;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) sum += code[(i + j) % n];
            } else {
                for (int j = 1; j <= -k; j++) sum += code[((i - j) % n + n) % n];
            }
            res[i] = sum;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(Arrays.toString(s.decrypt(new int[]{5,7,1,4}, 3)));
        System.out.println(Arrays.toString(s.decrypt(new int[]{1,2,3,4}, 0)));
        System.out.println(Arrays.toString(s.decrypt(new int[]{2,4,9,3}, -2)));
    }
}
