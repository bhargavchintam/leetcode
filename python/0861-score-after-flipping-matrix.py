from typing import List


class Solution:
    def matrixScore(self, grid: List[List[int]]) -> int:
        n, m = len(grid), len(grid[0])
        for r in range(n):
            if grid[r][0] == 0:
                for c in range(m):
                    grid[r][c] ^= 1
        res = n * (1 << (m - 1))
        for c in range(1, m):
            ones = sum(grid[r][c] for r in range(n))
            ones = max(ones, n - ones)
            res += ones * (1 << (m - 1 - c))
        return res


if __name__ == "__main__":
    grid = [[0, 0, 1, 1], [1, 0, 1, 0], [1, 1, 0, 0]]
    print(Solution().matrixScore(grid))
