class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def insertIntoMaxTree(self, root, val):
        if root is None or val > root.val:
            node = TreeNode(val)
            node.left = root
            return node
        root.right = self.insertIntoMaxTree(root.right, val)
        return root


def show(root):
    if not root:
        return []
    res = []
    q = [root]
    while q:
        node = q.pop(0)
        if node:
            res.append(node.val)
            q.append(node.left)
            q.append(node.right)
        else:
            res.append(None)
    while res and res[-1] is None:
        res.pop()
    return res


if __name__ == "__main__":
    root = TreeNode(4, TreeNode(1), TreeNode(3, None, TreeNode(2)))
    res = Solution().insertIntoMaxTree(root, 5)
    print(show(res))
