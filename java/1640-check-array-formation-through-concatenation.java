import java.util.*;

class Solution {
    public boolean canFormArray(int[] arr, int[][] pieces) {
        Map<Integer, int[]> map = new HashMap<>();
        for (int[] p : pieces) map.put(p[0], p);
        int i = 0;
        while (i < arr.length) {
            int[] p = map.get(arr[i]);
            if (p == null) return false;
            for (int v : p) {
                if (i >= arr.length || arr[i] != v) return false;
                i++;
            }
        }
        return true;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.canFormArray(new int[]{85,63,51,14}, new int[][]{{63,51},{85},{14}}));
    }
}
