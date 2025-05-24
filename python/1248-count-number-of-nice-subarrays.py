from typing import List
from collections import defaultdict


class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        cnt = defaultdict(int)
        cnt[0] = 1
        odd = 0
        res = 0
        for x in nums:
            if x % 2:
                odd += 1
            res += cnt[odd - k]
            cnt[odd] += 1
        return res


if __name__ == "__main__":
    print(Solution().numberOfSubarrays([1, 1, 2, 1, 1], 3))
