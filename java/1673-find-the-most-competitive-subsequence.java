import java.util.*;

class Solution {
    public int[] mostCompetitive(int[] nums, int k) {
        Deque<Integer> st = new ArrayDeque<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            while (!st.isEmpty() && st.peekLast() > nums[i] && st.size() + n - i > k) st.pollLast();
            if (st.size() < k) st.addLast(nums[i]);
        }
        int[] res = new int[k];
        for (int i = 0; i < k; i++) res[i] = st.pollFirst();
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(Arrays.toString(s.mostCompetitive(new int[]{3,5,2,6}, 2)));
        System.out.println(Arrays.toString(s.mostCompetitive(new int[]{2,4,3,3,5,4,9,6}, 4)));
    }
}
