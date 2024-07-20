import java.util.*;

class Solution {
    public int sumOfUnique(int[] nums) {
        Map<Integer, Integer> cnt = new HashMap<>();
        for (int x : nums) cnt.merge(x, 1, Integer::sum);
        int res = 0;
        for (Map.Entry<Integer, Integer> e : cnt.entrySet()) if (e.getValue() == 1) res += e.getKey();
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.sumOfUnique(new int[]{1,2,3,2}));
        System.out.println(s.sumOfUnique(new int[]{1,1,1,1,1}));
        System.out.println(s.sumOfUnique(new int[]{1,2,3,4,5}));
    }
}
