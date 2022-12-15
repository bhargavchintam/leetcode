from typing import List


class Solution:
    def countServers(self, grid: List[List[int]]) -> int:
        n, m = len(grid), len(grid[0])
        rows = [0] * n
        cols = [0] * m
        for r in range(n):
            for c in range(m):
                if grid[r][c]:
                    rows[r] += 1
                    cols[c] += 1
        res = 0
        for r in range(n):
            for c in range(m):
                if grid[r][c] and (rows[r] > 1 or cols[c] > 1):
                    res += 1
        return res


if __name__ == "__main__":
    print(Solution().countServers([[1, 0], [0, 1]]))
