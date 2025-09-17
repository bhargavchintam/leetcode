import java.util.*;

class Solution {
    public int averageValue(int[] nums) {
        int sum = 0, cnt = 0;
        for (int x : nums) {
            if (x % 6 == 0) {
                sum += x;
                cnt++;
            }
        }
        return cnt == 0 ? 0 : sum / cnt;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.averageValue(new int[]{1, 3, 6, 10, 12, 15}));
    }
}
