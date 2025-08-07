import java.util.*;

class Solution {
    public int[] frequencySort(int[] nums) {
        Map<Integer, Integer> cnt = new HashMap<>();
        for (int x : nums) cnt.merge(x, 1, Integer::sum);
        Integer[] arr = new Integer[nums.length];
        for (int i = 0; i < nums.length; i++) arr[i] = nums[i];
        Arrays.sort(arr, (x, y) -> {
            int fx = cnt.get(x), fy = cnt.get(y);
            if (fx != fy) return fx - fy;
            return y - x;
        });
        int[] res = new int[nums.length];
        for (int i = 0; i < nums.length; i++) res[i] = arr[i];
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(Arrays.toString(s.frequencySort(new int[]{1,1,2,2,2,3})));
    }
}
