import java.util.*;

class Solution {
    public int maximumWealth(int[][] accounts) {
        int res = 0;
        for (int[] acc : accounts) {
            int sum = 0;
            for (int v : acc) sum += v;
            res = Math.max(res, sum);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maximumWealth(new int[][]{{1,2,3},{3,2,1}}));
        System.out.println(s.maximumWealth(new int[][]{{1,5},{7,3},{3,5}}));
    }
}
