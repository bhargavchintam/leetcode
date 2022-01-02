from typing import List
from collections import Counter


class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        if k < 0:
            return 0
        cnt = Counter(nums)
        res = 0
        if k == 0:
            for v in cnt.values():
                if v > 1:
                    res += 1
        else:
            for x in cnt:
                if x + k in cnt:
                    res += 1
        return res


if __name__ == "__main__":
    print(Solution().findPairs([3, 1, 4, 1, 5], 2))
