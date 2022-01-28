from typing import List


class Solution:
    def closedIsland(self, grid: List[List[int]]) -> int:
        n, m = len(grid), len(grid[0])

        def dfs(r, c):
            if r < 0 or r >= n or c < 0 or c >= m:
                return
            if grid[r][c] != 0:
                return
            grid[r][c] = 1
            dfs(r + 1, c)
            dfs(r - 1, c)
            dfs(r, c + 1)
            dfs(r, c - 1)

        for r in range(n):
            for c in range(m):
                if (r == 0 or r == n - 1 or c == 0 or c == m - 1) and grid[r][c] == 0:
                    dfs(r, c)
        res = 0
        for r in range(1, n - 1):
            for c in range(1, m - 1):
                if grid[r][c] == 0:
                    dfs(r, c)
                    res += 1
        return res


if __name__ == "__main__":
    grid = [[1, 1, 1, 1, 1, 1, 1, 0], [1, 0, 0, 0, 0, 1, 1, 0], [1, 0, 1, 0, 1, 1, 1, 0],
            [1, 0, 0, 0, 0, 1, 0, 1], [1, 1, 1, 1, 1, 1, 1, 0]]
    print(Solution().closedIsland(grid))
