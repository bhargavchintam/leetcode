import java.util.*;

class Solution {
    public int countBalls(int lowLimit, int highLimit) {
        int[] cnt = new int[50];
        int res = 0;
        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = 0, x = i;
            while (x > 0) { sum += x % 10; x /= 10; }
            cnt[sum]++;
            res = Math.max(res, cnt[sum]);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.countBalls(1, 10));
        System.out.println(s.countBalls(5, 15));
        System.out.println(s.countBalls(19, 28));
    }
}
