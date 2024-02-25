from typing import List


class Solution:
    def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
        n = len(mat)

        def rotate(m):
            return [[m[n - 1 - c][r] for c in range(n)] for r in range(n)]

        cur = mat
        for _ in range(4):
            if cur == target:
                return True
            cur = rotate(cur)
        return False


if __name__ == "__main__":
    print(Solution().findRotation([[0, 1], [1, 0]], [[1, 0], [0, 1]]))
