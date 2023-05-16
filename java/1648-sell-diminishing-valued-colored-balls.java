import java.util.*;

class Solution {
    public int maxProfit(int[] inventory, int orders) {
        int mod = 1_000_000_007;
        int[] inv = inventory.clone();
        Arrays.sort(inv);
        int n = inv.length;
        int[] rev = new int[n];
        for (int i = 0; i < n; i++) rev[i] = inv[n - 1 - i];
        long res = 0;
        int i = 0;
        long width = 1;
        long ordersLeft = orders;
        while (ordersLeft > 0) {
            long cur = rev[i];
            long nxt = i + 1 < n ? rev[i + 1] : 0;
            long canRemove = (cur - nxt) * width;
            if (canRemove <= ordersLeft) {
                res += (cur + nxt + 1) * (cur - nxt) / 2 % mod * width % mod;
                ordersLeft -= canRemove;
                i++;
                width++;
            } else {
                long q = ordersLeft / width;
                res += (cur + cur - q + 1) * q / 2 % mod * width % mod;
                long rem = ordersLeft % width;
                res += rem * (cur - q) % mod;
                ordersLeft = 0;
            }
            res %= mod;
        }
        return (int) res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxProfit(new int[]{2,5}, 4));
        System.out.println(s.maxProfit(new int[]{3,5}, 6));
    }
}
