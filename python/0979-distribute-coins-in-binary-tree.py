class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def distributeCoins(self, root) -> int:
        self.res = 0

        def dfs(node):
            if not node:
                return 0
            l = dfs(node.left)
            r = dfs(node.right)
            self.res += abs(l) + abs(r)
            return node.val - 1 + l + r

        dfs(root)
        return self.res


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
    root = build([3, 0, 0])
    print(Solution().distributeCoins(root))
