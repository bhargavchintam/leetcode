import java.util.*;

class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || root == p || root == q) return root;
        TreeNode left = lowestCommonAncestor(root.left, p, q);
        TreeNode right = lowestCommonAncestor(root.right, p, q);
        if (left != null && right != null) return root;
        return left != null ? left : right;
    }

    public static void main(String[] a) {
        TreeNode n6 = new TreeNode(6);
        TreeNode n2n = new TreeNode(2);
        TreeNode n0 = new TreeNode(0);
        TreeNode n8n = new TreeNode(8);
        TreeNode n7 = new TreeNode(7);
        TreeNode n4 = new TreeNode(4);
        TreeNode n5 = new TreeNode(5, n6, n2n);
        n2n.left = n7;
        n2n.right = n4;
        TreeNode n1 = new TreeNode(1, n0, n8n);
        TreeNode root = new TreeNode(3, n5, n1);
        Solution sol = new Solution();
        TreeNode res = sol.lowestCommonAncestor(root, n5, n1);
        System.out.println(res.val);
    }
}

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
