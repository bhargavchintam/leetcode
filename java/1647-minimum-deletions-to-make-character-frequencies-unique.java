import java.util.*;

class Solution {
    public int minDeletions(String s) {
        int[] cnt = new int[26];
        for (char c : s.toCharArray()) cnt[c - 'a']++;
        Set<Integer> used = new HashSet<>();
        int res = 0;
        for (int c : cnt) {
            while (c > 0 && used.contains(c)) { c--; res++; }
            if (c > 0) used.add(c);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.minDeletions("aab"));
        System.out.println(s.minDeletions("aaabbbcc"));
        System.out.println(s.minDeletions("ceabaacb"));
    }
}
