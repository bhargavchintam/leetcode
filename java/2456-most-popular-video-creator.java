import java.util.*;

class Solution {
    public List<List<String>> mostPopularCreator(String[] creators, String[] ids, int[] views) {
        Map<String, Long> sum = new HashMap<>();
        Map<String, Integer> bestIdx = new HashMap<>();
        int n = creators.length;
        for (int i = 0; i < n; i++) {
            String c = creators[i];
            sum.merge(c, (long) views[i], Long::sum);
            if (!bestIdx.containsKey(c)) {
                bestIdx.put(c, i);
            } else {
                int cur = bestIdx.get(c);
                if (views[i] > views[cur] || (views[i] == views[cur] && ids[i].compareTo(ids[cur]) < 0)) bestIdx.put(c, i);
            }
        }
        long mx = 0;
        for (long v : sum.values()) mx = Math.max(mx, v);
        List<List<String>> res = new ArrayList<>();
        for (Map.Entry<String, Long> e : sum.entrySet()) {
            if (e.getValue() == mx) {
                int idx = bestIdx.get(e.getKey());
                res.add(Arrays.asList(e.getKey(), ids[idx]));
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.mostPopularCreator(new String[]{"alice", "bob", "alice", "chris"}, new String[]{"one", "two", "three", "four"}, new int[]{5, 10, 5, 4}));
    }
}
