from typing import List


class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        n = len(graph)
        res = []

        def dfs(node, path):
            if node == n - 1:
                res.append(path[:])
                return
            for nxt in graph[node]:
                path.append(nxt)
                dfs(nxt, path)
                path.pop()

        dfs(0, [0])
        return res


if __name__ == "__main__":
    print(Solution().allPathsSourceTarget([[1, 2], [3], [3], []]))
