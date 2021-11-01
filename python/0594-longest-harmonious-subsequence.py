from typing import List
from collections import Counter


class Solution:
    def findLHS(self, nums: List[int]) -> int:
        cnt = Counter(nums)
        res = 0
        for x in cnt:
            if x + 1 in cnt:
                res = max(res, cnt[x] + cnt[x + 1])
        return res


if __name__ == "__main__":
    print(Solution().findLHS([1, 3, 2, 2, 5, 2, 3, 7]))
