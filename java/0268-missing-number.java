import java.util.*;

class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = n * (n + 1) / 2;
        for (int x : nums) sum -= x;
        return sum;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.missingNumber(new int[]{3, 0, 1}));
        System.out.println(s.missingNumber(new int[]{9, 6, 4, 2, 3, 5, 7, 0, 1}));
    }
}
