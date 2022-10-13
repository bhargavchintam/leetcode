import java.util.*;

class Solution {
    public int[] singleNumber(int[] nums) {
        int xorAll = 0;
        for (int n : nums) xorAll ^= n;
        int diff = xorAll & (-xorAll);
        int a = 0, b = 0;
        for (int n : nums) {
            if ((n & diff) != 0) a ^= n;
            else b ^= n;
        }
        return new int[]{a, b};
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(Arrays.toString(s.singleNumber(new int[]{1, 2, 1, 3, 2, 5})));
    }
}
