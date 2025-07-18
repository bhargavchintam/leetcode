import java.util.*;

class Solution {
    public long totalCost(int[] costs, int k, int candidates) {
        int n = costs.length;
        PriorityQueue<Integer> left = new PriorityQueue<>();
        PriorityQueue<Integer> right = new PriorityQueue<>();
        int i = 0, j = n - 1;
        while (left.size() < candidates && i <= j) left.offer(costs[i++]);
        while (right.size() < candidates && i <= j) right.offer(costs[j--]);
        long total = 0;
        for (int t = 0; t < k; t++) {
            if (right.isEmpty() || (!left.isEmpty() && left.peek() <= right.peek())) {
                total += left.poll();
                if (i <= j) left.offer(costs[i++]);
            } else {
                total += right.poll();
                if (i <= j) right.offer(costs[j--]);
            }
        }
        return total;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.totalCost(new int[]{17, 12, 10, 2, 7, 2, 11, 20, 8}, 3, 4));
    }
}
