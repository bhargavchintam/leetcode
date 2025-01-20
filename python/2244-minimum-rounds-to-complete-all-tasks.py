from typing import List
from collections import Counter


class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        cnt = Counter(tasks)
        res = 0
        for c in cnt.values():
            if c == 1:
                return -1
            res += (c + 2) // 3
        return res


if __name__ == "__main__":
    print(Solution().minimumRounds([2, 2, 3, 3, 2, 4, 4, 4, 4, 4]))
    print(Solution().minimumRounds([2, 3, 3]))
