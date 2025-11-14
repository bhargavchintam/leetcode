from typing import List


class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        n = len(grid)
        rows = {}
        for row in grid:
            t = tuple(row)
            rows[t] = rows.get(t, 0) + 1
        res = 0
        for j in range(n):
            col = tuple(grid[i][j] for i in range(n))
            res += rows.get(col, 0)
        return res


if __name__ == "__main__":
    print(Solution().equalPairs([[3, 2, 1], [1, 7, 6], [2, 7, 7]]))
