import java.util.*;

class Solution {
    public boolean closeStrings(String word1, String word2) {
        if (word1.length() != word2.length()) return false;
        int[] c1 = new int[26], c2 = new int[26];
        for (char c : word1.toCharArray()) c1[c - 'a']++;
        for (char c : word2.toCharArray()) c2[c - 'a']++;
        for (int i = 0; i < 26; i++) {
            if ((c1[i] == 0) != (c2[i] == 0)) return false;
        }
        int[] s1 = c1.clone(), s2 = c2.clone();
        Arrays.sort(s1);
        Arrays.sort(s2);
        return Arrays.equals(s1, s2);
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.closeStrings("abc", "bca"));
        System.out.println(s.closeStrings("a", "aa"));
        System.out.println(s.closeStrings("cabbba", "abbccc"));
    }
}
