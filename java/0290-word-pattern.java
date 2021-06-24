import java.util.*;

class Solution {
    public boolean wordPattern(String pattern, String s) {
        String[] words = s.split(" ");
        if (pattern.length() != words.length) return false;
        Map<Character, String> p2w = new HashMap<>();
        Map<String, Character> w2p = new HashMap<>();
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern.charAt(i);
            String w = words[i];
            if (p2w.containsKey(c)) {
                if (!p2w.get(c).equals(w)) return false;
            } else {
                p2w.put(c, w);
            }
            if (w2p.containsKey(w)) {
                if (w2p.get(w) != c) return false;
            } else {
                w2p.put(w, c);
            }
        }
        return true;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.wordPattern("abba", "dog cat cat dog"));
    }
}
