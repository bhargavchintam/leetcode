from typing import List


class Solution:
    def eventualSafeNodes(self, graph: List[List[int]]) -> List[int]:
        n = len(graph)
        color = [0] * n

        def dfs(node):
            if color[node] != 0:
                return color[node] == 2
            color[node] = 1
            for nxt in graph[node]:
                if not dfs(nxt):
                    return False
            color[node] = 2
            return True

        return [i for i in range(n) if dfs(i)]


if __name__ == "__main__":
    graph = [[1, 2], [2, 3], [5], [0], [5], [], []]
    print(Solution().eventualSafeNodes(graph))
