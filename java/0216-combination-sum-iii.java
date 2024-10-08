import java.util.*;

class Solution {
    List<List<Integer>> res = new ArrayList<>();
    List<Integer> cur = new ArrayList<>();

    public List<List<Integer>> combinationSum3(int k, int n) {
        res = new ArrayList<>();
        cur = new ArrayList<>();
        backtrack(1, k, n);
        return res;
    }

    private void backtrack(int start, int k, int remain) {
        if (cur.size() == k) {
            if (remain == 0) res.add(new ArrayList<>(cur));
            return;
        }
        for (int i = start; i <= 9; i++) {
            if (i > remain) break;
            cur.add(i);
            backtrack(i + 1, k, remain - i);
            cur.remove(cur.size() - 1);
        }
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.combinationSum3(3, 7));
        System.out.println(s.combinationSum3(3, 9));
    }
}
