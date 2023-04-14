class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def convertBST(self, root: TreeNode) -> TreeNode:
        self.total = 0

        def reverse_inorder(node):
            if not node:
                return
            reverse_inorder(node.right)
            self.total += node.val
            node.val = self.total
            reverse_inorder(node.left)

        reverse_inorder(root)
        return root


def to_level_order(root):
    if not root:
        return []
    res = []
    q = [root]
    while q:
        node = q.pop(0)
        if node is None:
            res.append(None)
            continue
        res.append(node.val)
        q.append(node.left)
        q.append(node.right)
    while res and res[-1] is None:
        res.pop()
    return res


if __name__ == "__main__":
    root = TreeNode(4)
    root.left = TreeNode(1)
    root.right = TreeNode(6)
    root.left.left = TreeNode(0)
    root.left.right = TreeNode(2)
    root.left.right.right = TreeNode(3)
    root.right.left = TreeNode(5)
    root.right.right = TreeNode(7)
    root.right.right.right = TreeNode(8)
    Solution().convertBST(root)
    print(to_level_order(root))
