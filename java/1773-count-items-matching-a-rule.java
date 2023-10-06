import java.util.*;

class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int idx = ruleKey.equals("type") ? 0 : ruleKey.equals("color") ? 1 : 2;
        int res = 0;
        for (List<String> item : items) if (item.get(idx).equals(ruleValue)) res++;
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        List<List<String>> items = new ArrayList<>();
        items.add(Arrays.asList("phone","blue","pixel"));
        items.add(Arrays.asList("computer","silver","lenovo"));
        items.add(Arrays.asList("phone","gold","iphone"));
        System.out.println(s.countMatches(items, "color", "silver"));
    }
}
