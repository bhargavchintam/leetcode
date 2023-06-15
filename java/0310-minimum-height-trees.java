import java.util.*;

class Solution {
    public List<Integer> findMinHeightTrees(int n, int[][] edges) {
        if (n == 1) {
            List<Integer> res = new ArrayList<>();
            res.add(0);
            return res;
        }
        List<Set<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < n; i++) adj.add(new HashSet<>());
        for (int[] e : edges) {
            adj.get(e[0]).add(e[1]);
            adj.get(e[1]).add(e[0]);
        }
        List<Integer> leaves = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (adj.get(i).size() == 1) leaves.add(i);
        }
        int remaining = n;
        while (remaining > 2) {
            remaining -= leaves.size();
            List<Integer> newLeaves = new ArrayList<>();
            for (int leaf : leaves) {
                for (int nb : adj.get(leaf)) {
                    adj.get(nb).remove(leaf);
                    if (adj.get(nb).size() == 1) newLeaves.add(nb);
                }
            }
            leaves = newLeaves;
        }
        return leaves;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        int[][] edges = {{1, 0}, {1, 2}, {1, 3}};
        System.out.println(s.findMinHeightTrees(4, edges));
    }
}
