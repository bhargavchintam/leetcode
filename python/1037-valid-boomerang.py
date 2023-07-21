from typing import List


class Solution:
    def isBoomerang(self, points: List[List[int]]) -> bool:
        (x1, y1), (x2, y2), (x3, y3) = points
        return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1) != 0


if __name__ == "__main__":
    print(Solution().isBoomerang([[1, 1], [2, 3], [3, 2]]))
