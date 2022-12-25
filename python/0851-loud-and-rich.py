from typing import List


class Solution:
    def loudAndRich(self, richer: List[List[int]], quiet: List[int]) -> List[int]:
        n = len(quiet)
        graph = [[] for _ in range(n)]
        for a, b in richer:
            graph[b].append(a)
        ans = [-1] * n

        def dfs(i):
            if ans[i] != -1:
                return ans[i]
            ans[i] = i
            for j in graph[i]:
                cand = dfs(j)
                if quiet[cand] < quiet[ans[i]]:
                    ans[i] = cand
            return ans[i]

        for i in range(n):
            dfs(i)
        return ans


if __name__ == "__main__":
    richer = [[1, 0], [2, 1], [3, 1], [3, 7], [4, 3], [5, 3], [6, 3]]
    quiet = [3, 2, 5, 4, 6, 1, 7, 0]
    print(Solution().loudAndRich(richer, quiet))
