import java.util.*;

class Solution {
    public int minimizeXor(int num1, int num2) {
        int cnt = Integer.bitCount(num2);
        int x = num1;
        int have = Integer.bitCount(x);
        if (have > cnt) {
            int need = have - cnt;
            for (int i = 0; i < 32 && need > 0; i++) {
                if (((x >> i) & 1) == 1) {
                    x &= ~(1 << i);
                    need--;
                }
            }
        } else if (have < cnt) {
            int need = cnt - have;
            for (int i = 0; i < 32 && need > 0; i++) {
                if (((x >> i) & 1) == 0) {
                    x |= (1 << i);
                    need--;
                }
            }
        }
        return x;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.minimizeXor(3, 5));
    }
}
