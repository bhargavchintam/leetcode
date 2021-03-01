import java.util.*;

class Solution {
    public String oddString(String[] words) {
        Map<String, List<String>> mp = new HashMap<>();
        for (String w : words) {
            StringBuilder sb = new StringBuilder();
            for (int i = 1; i < w.length(); i++) sb.append(w.charAt(i) - w.charAt(i - 1)).append(',');
            mp.computeIfAbsent(sb.toString(), x -> new ArrayList<>()).add(w);
        }
        for (List<String> lst : mp.values()) {
            if (lst.size() == 1) return lst.get(0);
        }
        return "";
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.oddString(new String[]{"adc", "wzy", "abc"}));
    }
}
