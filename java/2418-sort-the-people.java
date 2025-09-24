import java.util.*;

class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        int n = names.length;
        Integer[] idx = new Integer[n];
        for (int i = 0; i < n; i++) idx[i] = i;
        Arrays.sort(idx, (x, y) -> heights[y] - heights[x]);
        String[] res = new String[n];
        for (int i = 0; i < n; i++) res[i] = names[idx[i]];
        return res;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(Arrays.toString(sol.sortPeople(new String[]{"Mary", "John", "Emma"}, new int[]{180, 165, 170})));
    }
}
