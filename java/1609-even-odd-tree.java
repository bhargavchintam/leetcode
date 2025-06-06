import java.util.*;

class Solution {
    public boolean isEvenOddTree(TreeNode root) {
        Deque<TreeNode> q = new ArrayDeque<>();
        q.add(root);
        int level = 0;
        while (!q.isEmpty()) {
            int sz = q.size();
            int prev = level % 2 == 0 ? Integer.MIN_VALUE : Integer.MAX_VALUE;
            for (int i = 0; i < sz; i++) {
                TreeNode node = q.poll();
                if (level % 2 == 0) {
                    if (node.val % 2 == 0) return false;
                    if (node.val <= prev) return false;
                } else {
                    if (node.val % 2 != 0) return false;
                    if (node.val >= prev) return false;
                }
                prev = node.val;
                if (node.left != null) q.add(node.left);
                if (node.right != null) q.add(node.right);
            }
            level++;
        }
        return true;
    }

    public static void main(String[] a) {
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(10);
        root.right = new TreeNode(4);
        Solution s = new Solution();
        System.out.println(s.isEvenOddTree(root));
    }
}

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}
