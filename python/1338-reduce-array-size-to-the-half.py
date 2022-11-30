from typing import List
from collections import Counter


class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        cnt = sorted(Counter(arr).values(), reverse=True)
        n = len(arr)
        removed = 0
        res = 0
        for c in cnt:
            removed += c
            res += 1
            if removed * 2 >= n:
                break
        return res


if __name__ == "__main__":
    print(Solution().minSetSize([3, 3, 3, 3, 5, 5, 5, 2, 2, 7]))
