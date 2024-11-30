from typing import List


class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        return [list(row) for row in zip(*matrix)]


if __name__ == "__main__":
    print(Solution().transpose([[1, 2, 3], [4, 5, 6], [7, 8, 9]]))
