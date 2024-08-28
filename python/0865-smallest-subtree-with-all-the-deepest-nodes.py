from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def subtreeWithAllDeepest(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def dfs(node):
            if not node:
                return 0, None
            ld, lnode = dfs(node.left)
            rd, rnode = dfs(node.right)
            if ld == rd:
                return ld + 1, node
            elif ld > rd:
                return ld + 1, lnode
            else:
                return rd + 1, rnode

        return dfs(root)[1]


if __name__ == "__main__":
    n7 = TreeNode(7)
    n4 = TreeNode(4)
    n0 = TreeNode(0)
    n8 = TreeNode(8)
    n6 = TreeNode(6)
    n2 = TreeNode(2, n7, n4)
    n5 = TreeNode(5, n6, n2)
    n1 = TreeNode(1, n0, n8)
    root = TreeNode(3, n5, n1)
    res = Solution().subtreeWithAllDeepest(root)
    print(res.val, res.left.val, res.right.val)
