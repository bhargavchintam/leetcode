import java.util.*;

class Solution {
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public int subarrayGCD(int[] nums, int k) {
        int n = nums.length, cnt = 0;
        for (int i = 0; i < n; i++) {
            int g = 0;
            for (int j = i; j < n; j++) {
                g = gcd(g, nums[j]);
                if (g == k) cnt++;
                if (g < k) break;
            }
        }
        return cnt;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.subarrayGCD(new int[]{9, 3, 1, 2, 6, 3}, 3));
    }
}
