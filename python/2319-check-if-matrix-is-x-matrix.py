from typing import List


class Solution:
    def checkXMatrix(self, grid: List[List[int]]) -> bool:
        n = len(grid)
        for i in range(n):
            for j in range(n):
                v = grid[i][j]
                if i == j or i + j == n - 1:
                    if v == 0:
                        return False
                else:
                    if v != 0:
                        return False
        return True


if __name__ == "__main__":
    grid = [[2, 0, 0, 1], [0, 3, 1, 0], [0, 5, 2, 0], [4, 0, 0, 2]]
    print(Solution().checkXMatrix(grid))
