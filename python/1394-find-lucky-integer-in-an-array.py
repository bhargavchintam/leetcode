from typing import List
from collections import Counter


class Solution:
    def findLucky(self, arr: List[int]) -> int:
        cnt = Counter(arr)
        res = -1
        for x, c in cnt.items():
            if x == c:
                res = max(res, x)
        return res


if __name__ == "__main__":
    print(Solution().findLucky([2, 2, 3, 4]))
