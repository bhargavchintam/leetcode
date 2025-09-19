from typing import List


class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        m, n = len(mat), len(mat[0])
        if m * n != r * c:
            return mat
        flat = [x for row in mat for x in row]
        res = []
        for i in range(r):
            res.append(flat[i * c:(i + 1) * c])
        return res


if __name__ == "__main__":
    print(Solution().matrixReshape([[1, 2], [3, 4]], 1, 4))
