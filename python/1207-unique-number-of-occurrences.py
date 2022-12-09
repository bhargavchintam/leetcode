from typing import List
from collections import Counter


class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        cnt = Counter(arr)
        v = list(cnt.values())
        return len(v) == len(set(v))


if __name__ == "__main__":
    print(Solution().uniqueOccurrences([1, 2, 2, 1, 1, 3]))
