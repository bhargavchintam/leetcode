from typing import List
from collections import Counter


class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        n = len(nums)
        even = Counter(nums[0::2])
        odd = Counter(nums[1::2])
        e = even.most_common(2)
        o = odd.most_common(2)
        while len(e) < 2:
            e.append((-1, 0))
        while len(o) < 2:
            o.append((-1, 0))
        best = 0
        for ev, ec in e:
            for ov, oc in o:
                if ev != ov:
                    best = max(best, ec + oc)
        return n - best


if __name__ == "__main__":
    print(Solution().minimumOperations([3, 1, 3, 2, 4, 3]))
    print(Solution().minimumOperations([1, 2, 2, 2, 2]))
