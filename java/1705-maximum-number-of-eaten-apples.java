import java.util.*;

class Solution {
    public int eatenApples(int[] apples, int[] days) {
        PriorityQueue<int[]> pq = new PriorityQueue<>((x, y) -> x[0] - y[0]);
        int res = 0;
        int i = 0;
        int n = apples.length;
        while (i < n || !pq.isEmpty()) {
            if (i < n && apples[i] > 0) pq.add(new int[]{i + days[i], apples[i]});
            while (!pq.isEmpty() && pq.peek()[0] <= i) pq.poll();
            if (!pq.isEmpty()) {
                int[] top = pq.poll();
                top[1]--;
                res++;
                if (top[1] > 0) pq.add(top);
            }
            i++;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.eatenApples(new int[]{1,2,3,5,2}, new int[]{3,2,1,4,2}));
        System.out.println(s.eatenApples(new int[]{3,0,0,0,0,2}, new int[]{3,0,0,0,0,2}));
    }
}
