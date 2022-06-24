class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def sumRootToLeaf(self, root) -> int:
        def dfs(node, cur):
            cur = cur * 2 + node.val
            if not node.left and not node.right:
                return cur
            return (dfs(node.left, cur) if node.left else 0) + (dfs(node.right, cur) if node.right else 0)

        return dfs(root, 0)


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
    root = build([1, 0, 1, 0, 1, 0, 1])
    print(Solution().sumRootToLeaf(root))
