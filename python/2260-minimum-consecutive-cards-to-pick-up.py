from typing import List


class Solution:
    def minimumCardPickup(self, cards: List[int]) -> int:
        last = {}
        res = float("inf")
        for i, x in enumerate(cards):
            if x in last:
                res = min(res, i - last[x] + 1)
            last[x] = i
        return res if res != float("inf") else -1


if __name__ == "__main__":
    print(Solution().minimumCardPickup([3, 4, 2, 3, 4, 7]))
    print(Solution().minimumCardPickup([1, 0, 5, 3]))
