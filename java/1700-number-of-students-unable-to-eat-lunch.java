import java.util.*;

class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        Deque<Integer> q = new ArrayDeque<>();
        for (int x : students) q.add(x);
        Deque<Integer> st = new ArrayDeque<>();
        for (int x : sandwiches) st.add(x);
        int rotations = 0;
        while (!q.isEmpty() && rotations < q.size()) {
            if (q.peekFirst().equals(st.peekFirst())) {
                q.pollFirst();
                st.pollFirst();
                rotations = 0;
            } else {
                q.addLast(q.pollFirst());
                rotations++;
            }
        }
        return q.size();
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.countStudents(new int[]{1,1,0,0}, new int[]{0,1,0,1}));
        System.out.println(s.countStudents(new int[]{1,1,1,0,0,1}, new int[]{1,0,0,0,1,1}));
    }
}
