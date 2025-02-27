import java.util.*;

class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int sum = 0, maxSum = 0, minSum = 0;
        for (int v : nums) {
            sum += v;
            maxSum = Math.max(maxSum, sum);
            minSum = Math.min(minSum, sum);
        }
        return maxSum - minSum;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.maxAbsoluteSum(new int[]{1,-3,2,3,-4}));
        System.out.println(s.maxAbsoluteSum(new int[]{2,-5,1,-4,3,-2}));
    }
}
