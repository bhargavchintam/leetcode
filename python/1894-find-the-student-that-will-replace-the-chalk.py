from typing import List


class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        k %= sum(chalk)
        for i, c in enumerate(chalk):
            if k < c:
                return i
            k -= c
        return 0


if __name__ == "__main__":
    print(Solution().chalkReplacer([5, 1, 5], 22))
