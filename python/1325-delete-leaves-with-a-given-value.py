class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def removeLeafNodes(self, root: TreeNode, target: int) -> TreeNode:
        if not root:
            return None
        root.left = self.removeLeafNodes(root.left, target)
        root.right = self.removeLeafNodes(root.right, target)
        if not root.left and not root.right and root.val == target:
            return None
        return root


if __name__ == "__main__":
    root = TreeNode(1, TreeNode(2, TreeNode(2), None), TreeNode(3, TreeNode(2), TreeNode(4)))
    res = Solution().removeLeafNodes(root, 2)
    print(res.val, res.left, res.right.val, res.right.left, res.right.right.val)
