class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def minCameraCover(self, root) -> int:
        self.res = 0

        def dfs(node):
            if not node:
                return 1
            l = dfs(node.left)
            r = dfs(node.right)
            if l == 0 or r == 0:
                self.res += 1
                return 2
            if l == 2 or r == 2:
                return 1
            return 0

        top = dfs(root)
        return self.res + (1 if top == 0 else 0)


def build(vals):
    if not vals or vals[0] is None:
        return None
    root = TreeNode(vals[0])
    q = [root]
    i = 1
    while q and i < len(vals):
        node = q.pop(0)
        if i < len(vals):
            v = vals[i]
            i += 1
            if v is not None:
                node.left = TreeNode(v)
                q.append(node.left)
        if i < len(vals):
            v = vals[i]
            i += 1
            if v is not None:
                node.right = TreeNode(v)
                q.append(node.right)
    return root


if __name__ == "__main__":
    root = build([0, 0, None, 0, 0])
    print(Solution().minCameraCover(root))
