from typing import List


class Solution:
    def getMaximumGold(self, grid: List[List[int]]) -> int:
        n, m = len(grid), len(grid[0])

        def dfs(r, c):
            if r < 0 or r >= n or c < 0 or c >= m or grid[r][c] == 0:
                return 0
            val = grid[r][c]
            grid[r][c] = 0
            best = 0
            for dr, dc in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                best = max(best, dfs(r + dr, c + dc))
            grid[r][c] = val
            return val + best

        res = 0
        for r in range(n):
            for c in range(m):
                if grid[r][c]:
                    res = max(res, dfs(r, c))
        return res


if __name__ == "__main__":
    print(Solution().getMaximumGold([[0, 6, 0], [5, 8, 7], [0, 9, 0]]))
