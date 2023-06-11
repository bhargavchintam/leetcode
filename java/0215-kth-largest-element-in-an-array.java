import java.util.*;

class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int x : nums) {
            pq.offer(x);
            if (pq.size() > k) pq.poll();
        }
        return pq.peek();
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.findKthLargest(new int[]{3, 2, 1, 5, 6, 4}, 2));
        System.out.println(s.findKthLargest(new int[]{3, 2, 3, 1, 2, 4, 5, 5, 6}, 4));
    }
}
