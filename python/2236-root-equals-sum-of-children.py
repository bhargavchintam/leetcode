from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def checkTree(self, root: Optional[TreeNode]) -> bool:
        return root.val == root.left.val + root.right.val


if __name__ == "__main__":
    root = TreeNode(10, TreeNode(4), TreeNode(6))
    print(Solution().checkTree(root))
    root2 = TreeNode(5, TreeNode(3), TreeNode(1))
    print(Solution().checkTree(root2))
