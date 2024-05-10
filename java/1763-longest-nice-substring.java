import java.util.*;

class Solution {
    public String longestNiceSubstring(String s) {
        String res = "";
        int n = s.length();
        for (int i = 0; i < n; i++) {
            Set<Character> set = new HashSet<>();
            for (int j = i; j < n; j++) {
                set.add(s.charAt(j));
                boolean nice = true;
                for (char c : set) {
                    if (Character.isUpperCase(c) && !set.contains(Character.toLowerCase(c))) nice = false;
                    if (Character.isLowerCase(c) && !set.contains(Character.toUpperCase(c))) nice = false;
                }
                if (nice && j - i + 1 > res.length()) res = s.substring(i, j + 1);
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.longestNiceSubstring("YazaAay"));
        System.out.println(s.longestNiceSubstring("Bb"));
        System.out.println(s.longestNiceSubstring("c"));
    }
}
