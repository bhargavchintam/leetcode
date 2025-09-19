from typing import List
from collections import defaultdict


class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        n, m = len(mat), len(mat[0])
        d = defaultdict(list)
        for r in range(n):
            for c in range(m):
                d[r - c].append(mat[r][c])
        for k in d:
            d[k].sort(reverse=True)
        for r in range(n):
            for c in range(m):
                mat[r][c] = d[r - c].pop()
        return mat


if __name__ == "__main__":
    print(Solution().diagonalSort([[3, 3, 1, 1], [2, 2, 1, 2], [1, 1, 1, 2]]))
