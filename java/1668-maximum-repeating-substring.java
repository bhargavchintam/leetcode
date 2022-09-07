import java.util.*;

class Solution {
    public int maxRepeating(String sequence, String word) {
        int k = 0;
        StringBuilder sb = new StringBuilder(word);
        while (sequence.contains(sb.toString())) {
            k++;
            sb.append(word);
        }
        return k;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxRepeating("ababc", "ab"));
        System.out.println(s.maxRepeating("ababc", "ba"));
        System.out.println(s.maxRepeating("ababc", "ac"));
    }
}
