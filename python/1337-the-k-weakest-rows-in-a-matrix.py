from typing import List


class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        strength = [(sum(row), i) for i, row in enumerate(mat)]
        strength.sort()
        return [i for s, i in strength[:k]]


if __name__ == "__main__":
    mat = [[1, 1, 0, 0, 0], [1, 1, 1, 1, 0], [1, 0, 0, 0, 0], [1, 1, 0, 0, 0], [1, 1, 1, 1, 1]]
    print(Solution().kWeakestRows(mat, 3))
