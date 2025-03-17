import java.util.*;

class Solution {
    public boolean equalFrequency(String word) {
        int[] cnt = new int[26];
        for (char c : word.toCharArray()) cnt[c - 'a']++;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] == 0) continue;
            cnt[i]--;
            Set<Integer> set = new HashSet<>();
            for (int j = 0; j < 26; j++) {
                if (cnt[j] > 0) set.add(cnt[j]);
            }
            cnt[i]++;
            if (set.size() <= 1) return true;
        }
        return false;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.equalFrequency("abcc"));
        System.out.println(sol.equalFrequency("aazz"));
    }
}
