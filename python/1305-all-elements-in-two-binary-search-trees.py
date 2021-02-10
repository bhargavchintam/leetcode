from typing import List


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:
        def inorder(node, res):
            if node:
                inorder(node.left, res)
                res.append(node.val)
                inorder(node.right, res)

        a = []
        b = []
        inorder(root1, a)
        inorder(root2, b)
        res = []
        i = j = 0
        while i < len(a) and j < len(b):
            if a[i] <= b[j]:
                res.append(a[i])
                i += 1
            else:
                res.append(b[j])
                j += 1
        res.extend(a[i:])
        res.extend(b[j:])
        return res


if __name__ == "__main__":
    root1 = TreeNode(2, TreeNode(1), TreeNode(4))
    root2 = TreeNode(1, TreeNode(0), TreeNode(3))
    print(Solution().getAllElements(root1, root2))
