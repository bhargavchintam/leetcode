from typing import List
from collections import Counter


class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        cnt = Counter()
        for arr in nums:
            for x in arr:
                cnt[x] += 1
        n = len(nums)
        return sorted(x for x, c in cnt.items() if c == n)


if __name__ == "__main__":
    print(Solution().intersection([[3, 1, 2, 4, 5], [1, 2, 3, 4], [3, 4, 5, 6]]))
    print(Solution().intersection([[1, 2, 3], [4, 5, 6]]))
