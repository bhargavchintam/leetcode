from typing import List, Optional


class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children if children is not None else []


class Solution:
    def preorder(self, root: Optional[Node]) -> List[int]:
        res = []

        def dfs(node):
            if not node:
                return
            res.append(node.val)
            for child in node.children:
                dfs(child)

        dfs(root)
        return res


if __name__ == "__main__":
    n5 = Node(5)
    n6 = Node(6)
    n3 = Node(3, [n5, n6])
    n2 = Node(2)
    n4 = Node(4)
    root = Node(1, [n3, n2, n4])
    print(Solution().preorder(root))
