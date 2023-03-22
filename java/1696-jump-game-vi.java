import java.util.*;

class Solution {
    public int maxResult(int[] nums, int k) {
        int n = nums.length;
        int[] dp = new int[n];
        dp[0] = nums[0];
        Deque<Integer> dq = new ArrayDeque<>();
        dq.add(0);
        for (int i = 1; i < n; i++) {
            while (!dq.isEmpty() && dq.peekFirst() < i - k) dq.pollFirst();
            dp[i] = dp[dq.peekFirst()] + nums[i];
            while (!dq.isEmpty() && dp[dq.peekLast()] <= dp[i]) dq.pollLast();
            dq.addLast(i);
        }
        return dp[n - 1];
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxResult(new int[]{1,-1,-2,4,-7,3}, 2));
        System.out.println(s.maxResult(new int[]{10,-5,-2,4,0,3}, 3));
        System.out.println(s.maxResult(new int[]{1,-5,-20,4,-1,3,-6,-3}, 2));
    }
}
