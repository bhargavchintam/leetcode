import java.util.*;

class Solution {
    public int minGroups(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int[] iv : intervals) {
            if (!pq.isEmpty() && pq.peek() < iv[0]) pq.poll();
            pq.offer(iv[1]);
        }
        return pq.size();
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.minGroups(new int[][]{{5, 10}, {6, 8}, {1, 5}, {2, 3}, {1, 10}}));
    }
}
