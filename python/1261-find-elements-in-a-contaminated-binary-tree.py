class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class FindElements:
    def __init__(self, root: TreeNode):
        self.seen = set()

        def dfs(node, val):
            if not node:
                return
            node.val = val
            self.seen.add(val)
            dfs(node.left, 2 * val + 1)
            dfs(node.right, 2 * val + 2)

        dfs(root, 0)

    def find(self, target: int) -> bool:
        return target in self.seen


if __name__ == "__main__":
    root = TreeNode(-1, None, TreeNode(-1))
    fe = FindElements(root)
    print(fe.find(1), fe.find(2))
