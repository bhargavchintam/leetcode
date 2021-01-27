from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def findTilt(self, root: Optional[TreeNode]) -> int:
        self.res = 0

        def total(node):
            if not node:
                return 0
            l = total(node.left)
            r = total(node.right)
            self.res += abs(l - r)
            return l + r + node.val

        total(root)
        return self.res


if __name__ == "__main__":
    root = TreeNode(1, TreeNode(2), TreeNode(3))
    print(Solution().findTilt(root))
