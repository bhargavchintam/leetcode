from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.best = 0

        def height(node):
            if not node:
                return 0
            l = height(node.left)
            r = height(node.right)
            self.best = max(self.best, l + r)
            return 1 + max(l, r)

        height(root)
        return self.best


if __name__ == "__main__":
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    print(Solution().diameterOfBinaryTree(root))
