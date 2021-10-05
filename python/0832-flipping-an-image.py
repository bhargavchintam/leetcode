from typing import List


class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        return [[1 - x for x in row[::-1]] for row in image]


if __name__ == "__main__":
    print(Solution().flipAndInvertImage([[1, 1, 0], [1, 0, 1], [0, 0, 0]]))
