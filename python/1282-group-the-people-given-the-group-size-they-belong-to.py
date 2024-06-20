from typing import List
from collections import defaultdict


class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        buckets = defaultdict(list)
        res = []
        for i, g in enumerate(groupSizes):
            buckets[g].append(i)
            if len(buckets[g]) == g:
                res.append(buckets[g])
                buckets[g] = []
        return res


if __name__ == "__main__":
    print(Solution().groupThePeople([3, 3, 3, 3, 3, 1, 3]))
