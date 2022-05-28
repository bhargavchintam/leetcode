import java.util.*;

class Solution {
    String[] below20 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
        "Eighteen", "Nineteen"};
    String[] tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    String[] thousands = {"", "Thousand", "Million", "Billion"};

    public String numberToWords(int num) {
        if (num == 0) return "Zero";
        List<String> parts = new ArrayList<>();
        int i = 0;
        while (num > 0) {
            if (num % 1000 != 0) {
                String chunk = helper(num % 1000).trim();
                if (thousands[i].length() > 0) chunk = chunk + " " + thousands[i];
                parts.add(0, chunk);
            }
            num /= 1000;
            i++;
        }
        return String.join(" ", parts);
    }

    private String helper(int num) {
        if (num == 0) return "";
        if (num < 20) return below20[num] + " ";
        if (num < 100) return tens[num / 10] + " " + helper(num % 10);
        return below20[num / 100] + " Hundred " + helper(num % 100);
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.numberToWords(123));
        System.out.println(s.numberToWords(12345));
        System.out.println(s.numberToWords(1234567));
        System.out.println(s.numberToWords(0));
    }
}
