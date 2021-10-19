from typing import List


class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        if not ops:
            return m * n
        minR = min(op[0] for op in ops)
        minC = min(op[1] for op in ops)
        return minR * minC


if __name__ == "__main__":
    print(Solution().maxCount(3, 3, [[2, 2], [3, 3]]))
