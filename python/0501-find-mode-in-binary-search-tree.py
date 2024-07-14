from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        self.prev = None
        self.cnt = 0
        self.max_cnt = 0

        def inorder(node):
            if not node:
                return
            inorder(node.left)
            if self.prev is not None and node.val == self.prev:
                self.cnt += 1
            else:
                self.cnt = 1
            if self.cnt > self.max_cnt:
                self.max_cnt = self.cnt
                res.clear()
                res.append(node.val)
            elif self.cnt == self.max_cnt:
                res.append(node.val)
            self.prev = node.val
            inorder(node.right)

        inorder(root)
        return res


if __name__ == "__main__":
    root = TreeNode(1)
    root.right = TreeNode(2)
    root.right.left = TreeNode(2)
    print(Solution().findMode(root))
