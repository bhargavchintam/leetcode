import java.util.*;

class Solution {
    public int bestTeamScore(int[] scores, int[] ages) {
        int n = scores.length;
        Integer[] idx = new Integer[n];
        for (int i = 0; i < n; i++) idx[i] = i;
        Arrays.sort(idx, (x, y) -> ages[x] != ages[y] ? ages[x] - ages[y] : scores[x] - scores[y]);
        int[] dp = new int[n];
        int res = 0;
        for (int i = 0; i < n; i++) {
            dp[i] = scores[idx[i]];
            for (int j = 0; j < i; j++) {
                if (scores[idx[j]] <= scores[idx[i]]) dp[i] = Math.max(dp[i], dp[j] + scores[idx[i]]);
            }
            res = Math.max(res, dp[i]);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.bestTeamScore(new int[]{1,3,5,10,15}, new int[]{1,2,3,4,5}));
        System.out.println(s.bestTeamScore(new int[]{4,5,6,5}, new int[]{2,1,2,1}));
    }
}
