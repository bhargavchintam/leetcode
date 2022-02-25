from typing import List


class Solution:
    def minFallingPathSum(self, grid: List[List[int]]) -> int:
        n = len(grid)
        prev = grid[0][:]
        for r in range(1, n):
            cur = [0] * n
            for c in range(n):
                best = min(prev[k] for k in range(n) if k != c)
                cur[c] = grid[r][c] + best
            prev = cur
        return min(prev)


if __name__ == "__main__":
    print(Solution().minFallingPathSum([[1, 2, 3], [4, 5, 6], [7, 8, 9]]))
