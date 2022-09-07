from typing import List


class Solution:
    def findPeakGrid(self, mat: List[List[int]]) -> List[int]:
        rows = len(mat)
        cols = len(mat[0])
        lo, hi = 0, cols - 1
        while lo <= hi:
            mid = (lo + hi) // 2
            maxRow = 0
            for r in range(rows):
                if mat[r][mid] > mat[maxRow][mid]:
                    maxRow = r
            left = mat[maxRow][mid - 1] if mid > 0 else -1
            right = mat[maxRow][mid + 1] if mid < cols - 1 else -1
            if mat[maxRow][mid] >= left and mat[maxRow][mid] >= right:
                return [maxRow, mid]
            if left > mat[maxRow][mid]:
                hi = mid - 1
            else:
                lo = mid + 1
        return [-1, -1]


if __name__ == "__main__":
    print(Solution().findPeakGrid([[1, 4], [3, 2]]))
