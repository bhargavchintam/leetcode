from collections import Counter
from typing import List


class Solution:
    def numRabbits(self, answers: List[int]) -> int:
        cnt = Counter(answers)
        res = 0
        for x, c in cnt.items():
            g = x + 1
            res += ((c + g - 1) // g) * g
        return res


if __name__ == "__main__":
    print(Solution().numRabbits([1, 1, 2]))
