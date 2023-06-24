from functools import reduce
from typing import List


class Solution:
    def getXORSum(self, arr1: List[int], arr2: List[int]) -> int:
        x1 = reduce(lambda a, b: a ^ b, arr1)
        x2 = reduce(lambda a, b: a ^ b, arr2)
        return x1 & x2


if __name__ == "__main__":
    print(Solution().getXORSum([1, 2, 3], [6, 5]))
