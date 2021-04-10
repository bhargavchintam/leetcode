import java.util.*;

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int cand1 = 0, cand2 = 1, cnt1 = 0, cnt2 = 0;
        for (int x : nums) {
            if (cnt1 > 0 && x == cand1) {
                cnt1++;
            } else if (cnt2 > 0 && x == cand2) {
                cnt2++;
            } else if (cnt1 == 0) {
                cand1 = x;
                cnt1 = 1;
            } else if (cnt2 == 0) {
                cand2 = x;
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for (int x : nums) {
            if (x == cand1) cnt1++;
            else if (x == cand2) cnt2++;
        }
        List<Integer> res = new ArrayList<>();
        int n = nums.length;
        if (cnt1 > n / 3) res.add(cand1);
        if (cnt2 > n / 3) res.add(cand2);
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        int[] nums = {3, 2, 3};
        System.out.println(sol.majorityElement(nums));
    }
}
