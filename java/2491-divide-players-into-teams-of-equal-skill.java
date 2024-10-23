import java.util.*;

class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill);
        int n = skill.length;
        int target = skill[0] + skill[n - 1];
        long res = 0;
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (skill[i] + skill[j] != target) return -1;
            res += (long) skill[i] * skill[j];
        }
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.dividePlayers(new int[]{3, 2, 5, 1, 3, 4}));
    }
}
