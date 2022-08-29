from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def distanceK(self, root: TreeNode, target: TreeNode, k: int) -> List[int]:
        graph = {}

        def build(node, parent):
            if not node:
                return
            graph.setdefault(node, [])
            if parent:
                graph[node].append(parent)
                graph.setdefault(parent, []).append(node)
            build(node.left, node)
            build(node.right, node)

        build(root, None)
        seen = {target}
        queue = [target]
        for _ in range(k):
            nxt = []
            for node in queue:
                for nei in graph.get(node, []):
                    if nei not in seen:
                        seen.add(nei)
                        nxt.append(nei)
            queue = nxt
        return [n.val for n in queue]


if __name__ == "__main__":
    n7 = TreeNode(7)
    n4 = TreeNode(4)
    n0 = TreeNode(0)
    n8 = TreeNode(8)
    n6 = TreeNode(6)
    n2 = TreeNode(2, n7, n4)
    n5 = TreeNode(5, n6, n2)
    n1 = TreeNode(1, n0, n8)
    root = TreeNode(3, n5, n1)
    print(sorted(Solution().distanceK(root, n5, 2)))
