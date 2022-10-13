import java.util.*;

class Solution {
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> res = new ArrayList<>();
        if (root == null) return res;
        dfs(root, new StringBuilder(), res);
        return res;
    }

    private void dfs(TreeNode node, StringBuilder path, List<String> res) {
        int len = path.length();
        if (len > 0) path.append("->");
        path.append(node.val);
        if (node.left == null && node.right == null) {
            res.add(path.toString());
        } else {
            if (node.left != null) dfs(node.left, path, res);
            if (node.right != null) dfs(node.right, path, res);
        }
        path.setLength(len);
    }

    public static void main(String[] a) {
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        root.left.right = new TreeNode(5);
        Solution s = new Solution();
        System.out.println(s.binaryTreePaths(root));
    }
}

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
