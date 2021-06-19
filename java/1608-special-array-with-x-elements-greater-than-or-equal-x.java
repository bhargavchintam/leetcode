import java.util.*;

class Solution {
    public int specialArray(int[] nums) {
        int n = nums.length;
        for (int x = 0; x <= n; x++) {
            int cnt = 0;
            for (int v : nums) if (v >= x) cnt++;
            if (cnt == x) return x;
        }
        return -1;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.specialArray(new int[]{3, 5}));
        System.out.println(s.specialArray(new int[]{0, 0}));
        System.out.println(s.specialArray(new int[]{0, 4, 3, 0, 4}));
    }
}
