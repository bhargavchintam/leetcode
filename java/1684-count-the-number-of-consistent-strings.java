import java.util.*;

class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        boolean[] ok = new boolean[26];
        for (char c : allowed.toCharArray()) ok[c - 'a'] = true;
        int res = 0;
        for (String w : words) {
            boolean good = true;
            for (char c : w.toCharArray()) if (!ok[c - 'a']) { good = false; break; }
            if (good) res++;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.countConsistentStrings("ab", new String[]{"ad","bd","aaab","baa","badab"}));
    }
}
