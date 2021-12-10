from typing import Optional


class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children if children is not None else []


class Solution:
    def maxDepth(self, root: Optional[Node]) -> int:
        if not root:
            return 0
        if not root.children:
            return 1
        return 1 + max(self.maxDepth(c) for c in root.children)


if __name__ == "__main__":
    n5 = Node(5)
    n6 = Node(6)
    n3 = Node(3, [n5, n6])
    n2 = Node(2)
    n4 = Node(4)
    root = Node(1, [n3, n2, n4])
    print(Solution().maxDepth(root))
