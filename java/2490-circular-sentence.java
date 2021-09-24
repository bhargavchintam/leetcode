import java.util.*;

class Solution {
    public boolean isCircularSentence(String sentence) {
        String[] words = sentence.split(" ");
        int n = words.length;
        for (int i = 0; i < n; i++) {
            char last = words[i].charAt(words[i].length() - 1);
            char first = words[(i + 1) % n].charAt(0);
            if (last != first) return false;
        }
        return true;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.isCircularSentence("leetcode exercises sound delightful"));
    }
}
