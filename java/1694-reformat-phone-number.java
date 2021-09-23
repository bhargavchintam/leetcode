import java.util.*;

class Solution {
    public String reformatNumber(String number) {
        String digits = number.replaceAll("[ -]", "");
        List<String> groups = new ArrayList<>();
        int i = 0, n = digits.length();
        while (n - i > 4) {
            groups.add(digits.substring(i, i + 3));
            i += 3;
        }
        if (n - i == 4) {
            groups.add(digits.substring(i, i + 2));
            groups.add(digits.substring(i + 2, i + 4));
        } else {
            groups.add(digits.substring(i));
        }
        return String.join("-", groups);
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.reformatNumber("1-23-45 6"));
        System.out.println(s.reformatNumber("123 4-567"));
        System.out.println(s.reformatNumber("123 4-5678"));
    }
}
