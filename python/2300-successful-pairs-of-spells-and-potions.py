from typing import List
from bisect import bisect_left


class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        potions.sort()
        m = len(potions)
        res = []
        for x in spells:
            lo = bisect_left(potions, (success + x - 1) // x)
            res.append(m - lo)
        return res


if __name__ == "__main__":
    print(Solution().successfulPairs([5, 1, 3], [1, 2, 3, 4, 5], 7))
