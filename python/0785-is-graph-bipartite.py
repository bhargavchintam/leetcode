from typing import List


class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        n = len(graph)
        color = [0] * n
        for i in range(n):
            if color[i] == 0:
                color[i] = 1
                stack = [i]
                while stack:
                    node = stack.pop()
                    for nei in graph[node]:
                        if color[nei] == 0:
                            color[nei] = -color[node]
                            stack.append(nei)
                        elif color[nei] == color[node]:
                            return False
        return True


if __name__ == "__main__":
    print(Solution().isBipartite([[1, 2, 3], [0, 2], [0, 1, 3], [0, 2]]))
