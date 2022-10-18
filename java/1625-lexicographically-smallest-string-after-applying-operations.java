import java.util.*;

class Solution {
    public String findLexSmallestString(String s, int a, int b) {
        String best = s;
        Set<String> seen = new HashSet<>();
        Deque<String> q = new ArrayDeque<>();
        q.add(s);
        seen.add(s);
        while (!q.isEmpty()) {
            String cur = q.poll();
            if (cur.compareTo(best) < 0) best = cur;
            char[] arr = cur.toCharArray();
            for (int i = 1; i < arr.length; i += 2) arr[i] = (char) ('0' + (arr[i] - '0' + a) % 10);
            String add = new String(arr);
            String rot = cur.substring(cur.length() - b) + cur.substring(0, cur.length() - b);
            if (seen.add(add)) q.add(add);
            if (seen.add(rot)) q.add(rot);
        }
        return best;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.findLexSmallestString("5525", 9, 2));
    }
}
