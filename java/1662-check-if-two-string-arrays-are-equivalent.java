import java.util.*;

class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuilder s1 = new StringBuilder(), s2 = new StringBuilder();
        for (String w : word1) s1.append(w);
        for (String w : word2) s2.append(w);
        return s1.toString().equals(s2.toString());
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.arrayStringsAreEqual(new String[]{"ab","c"}, new String[]{"a","bc"}));
    }
}
