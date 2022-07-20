from typing import List


class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        return sum(1 for row in grid for x in row if x < 0)


if __name__ == "__main__":
    grid = [[4, 3, 2, -1], [3, 2, 1, -1], [1, 1, -1, -2], [-1, -1, -2, -3]]
    print(Solution().countNegatives(grid))
