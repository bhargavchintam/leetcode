import java.util.*;

class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int n = nums.length;
        long total = 0;
        for (int v : nums) total += v;
        int[] res = new int[n];
        long prefix = 0;
        for (int i = 0; i < n; i++) {
            long leftCount = i, rightCount = n - i - 1;
            long leftSum = prefix, rightSum = total - prefix - nums[i];
            res[i] = (int) (nums[i] * leftCount - leftSum + rightSum - nums[i] * rightCount);
            prefix += nums[i];
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(Arrays.toString(s.getSumAbsoluteDifferences(new int[]{2,3,5})));
        System.out.println(Arrays.toString(s.getSumAbsoluteDifferences(new int[]{1,4,6,8,10})));
    }
}
