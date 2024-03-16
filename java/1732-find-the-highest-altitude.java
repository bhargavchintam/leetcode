import java.util.*;

class Solution {
    public int largestAltitude(int[] gain) {
        int cur = 0, res = 0;
        for (int g : gain) {
            cur += g;
            res = Math.max(res, cur);
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.largestAltitude(new int[]{-5,1,5,0,-7}));
        System.out.println(s.largestAltitude(new int[]{-4,-3,-2,-1,4,3,2}));
    }
}
