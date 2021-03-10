import java.util.*;

class Solution {
    public int waysToMakeFair(int[] nums) {
        int n = nums.length;
        long[] evenPre = new long[n + 1], oddPre = new long[n + 1];
        for (int i = 0; i < n; i++) {
            evenPre[i + 1] = evenPre[i] + (i % 2 == 0 ? nums[i] : 0);
            oddPre[i + 1] = oddPre[i] + (i % 2 == 1 ? nums[i] : 0);
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            long leftEven = evenPre[i], leftOdd = oddPre[i];
            long rightEvenTotal = evenPre[n] - evenPre[i + 1];
            long rightOddTotal = oddPre[n] - oddPre[i + 1];
            long newEven = leftEven + rightOddTotal;
            long newOdd = leftOdd + rightEvenTotal;
            if (newEven == newOdd) res++;
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.waysToMakeFair(new int[]{2,1,6,4}));
        System.out.println(s.waysToMakeFair(new int[]{1,1,1}));
        System.out.println(s.waysToMakeFair(new int[]{1,2,3}));
    }
}
