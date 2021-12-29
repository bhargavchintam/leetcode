class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def maxProduct(self, root: TreeNode) -> int:
        def subtree_sum(node):
            if not node:
                return 0
            return node.val + subtree_sum(node.left) + subtree_sum(node.right)

        total = subtree_sum(root)
        self.best = 0

        def dfs(node):
            if not node:
                return 0
            s = node.val + dfs(node.left) + dfs(node.right)
            self.best = max(self.best, s * (total - s))
            return s

        dfs(root)
        return self.best % (10 ** 9 + 7)


if __name__ == "__main__":
    root = TreeNode(1, TreeNode(2, TreeNode(4), TreeNode(5)), TreeNode(3, TreeNode(6), None))
    print(Solution().maxProduct(root))
