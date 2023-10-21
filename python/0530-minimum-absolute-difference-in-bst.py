class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def getMinimumDifference(self, root: TreeNode) -> int:
        res = float("inf")
        prev = None

        def inorder(node):
            nonlocal res, prev
            if not node:
                return
            inorder(node.left)
            if prev is not None:
                res = min(res, node.val - prev)
            prev = node.val
            inorder(node.right)

        inorder(root)
        return res


if __name__ == "__main__":
    root = TreeNode(4)
    root.left = TreeNode(2)
    root.right = TreeNode(6)
    root.left.left = TreeNode(1)
    root.left.right = TreeNode(3)
    print(Solution().getMinimumDifference(root))
