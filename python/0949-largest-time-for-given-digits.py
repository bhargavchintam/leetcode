from typing import List
from itertools import permutations


class Solution:
    def largestTimeFromDigits(self, arr: List[int]) -> str:
        best = -1
        res = ""
        for p in permutations(arr):
            h = p[0] * 10 + p[1]
            m = p[2] * 10 + p[3]
            if h < 24 and m < 60:
                t = h * 60 + m
                if t > best:
                    best = t
                    res = f"{h:02d}:{m:02d}"
        return res


if __name__ == "__main__":
    print(Solution().largestTimeFromDigits([1, 2, 3, 4]))
