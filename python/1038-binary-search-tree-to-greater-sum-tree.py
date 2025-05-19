class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def bstToGst(self, root):
        self.s = 0

        def dfs(node):
            if not node:
                return
            dfs(node.right)
            self.s += node.val
            node.val = self.s
            dfs(node.left)

        dfs(root)
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
    root = TreeNode(1, TreeNode(0), TreeNode(2))
    res = Solution().bstToGst(root)
    print(show(res))
