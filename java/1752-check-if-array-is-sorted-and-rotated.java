import java.util.*;

class Solution {
    public boolean check(int[] nums) {
        int n = nums.length, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) cnt++;
        }
        return cnt <= 1;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.check(new int[]{3,4,5,1,2}));
        System.out.println(s.check(new int[]{2,1,3,4}));
        System.out.println(s.check(new int[]{1,2,3}));
    }
}
