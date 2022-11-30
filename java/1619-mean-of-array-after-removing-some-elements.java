import java.util.*;

class Solution {
    public double trimMean(int[] arr) {
        int n = arr.length;
        int[] sorted = arr.clone();
        Arrays.sort(sorted);
        int k = n / 20;
        long sum = 0;
        for (int i = k; i < n - k; i++) sum += sorted[i];
        return (double) sum / (n - 2 * k);
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        int[] arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        System.out.println(s.trimMean(arr));
    }
}
