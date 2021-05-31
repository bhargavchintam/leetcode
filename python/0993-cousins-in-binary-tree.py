class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isCousins(self, root, x, y) -> bool:
        def find(node, val, depth, parent):
            if not node:
                return None
            if node.val == val:
                return depth, parent
            return find(node.left, val, depth + 1, node) or find(node.right, val, depth + 1, node)

        dx = find(root, x, 0, None)
        dy = find(root, y, 0, None)
        return dx[0] == dy[0] and dx[1] != dy[1]


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
    root = build([1, 2, 3, 4])
    print(Solution().isCousins(root, 4, 3))
