from typing import List


class Solution:
    def matrixBlockSum(self, mat: List[List[int]], k: int) -> List[List[int]]:
        n, m = len(mat), len(mat[0])
        pre = [[0] * (m + 1) for _ in range(n + 1)]
        for r in range(n):
            for c in range(m):
                pre[r + 1][c + 1] = pre[r][c + 1] + pre[r + 1][c] - pre[r][c] + mat[r][c]
        res = [[0] * m for _ in range(n)]
        for r in range(n):
            for c in range(m):
                r1, c1 = max(0, r - k), max(0, c - k)
                r2, c2 = min(n - 1, r + k), min(m - 1, c + k)
                res[r][c] = pre[r2 + 1][c2 + 1] - pre[r1][c2 + 1] - pre[r2 + 1][c1] + pre[r1][c1]
        return res


if __name__ == "__main__":
    print(Solution().matrixBlockSum([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 1))
