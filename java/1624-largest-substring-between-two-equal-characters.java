import java.util.*;

class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {
        int[] first = new int[26];
        Arrays.fill(first, -1);
        int res = -1;
        for (int i = 0; i < s.length(); i++) {
            int c = s.charAt(i) - 'a';
            if (first[c] == -1) first[c] = i;
            else res = Math.max(res, i - first[c] - 1);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxLengthBetweenEqualCharacters("aa"));
        System.out.println(s.maxLengthBetweenEqualCharacters("abca"));
        System.out.println(s.maxLengthBetweenEqualCharacters("cbzxy"));
    }
}
