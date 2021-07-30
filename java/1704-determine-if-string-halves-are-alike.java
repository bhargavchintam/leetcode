import java.util.*;

class Solution {
    public boolean halvesAreAlike(String s) {
        String vowels = "aeiouAEIOU";
        int n = s.length(), cnt = 0;
        for (int i = 0; i < n / 2; i++) if (vowels.indexOf(s.charAt(i)) >= 0) cnt++;
        for (int i = n / 2; i < n; i++) if (vowels.indexOf(s.charAt(i)) >= 0) cnt--;
        return cnt == 0;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.halvesAreAlike("book"));
        System.out.println(s.halvesAreAlike("textbook"));
    }
}
