from typing import List


class Solution:
    def maxSatisfied(self, customers: List[int], grumpy: List[int], minutes: int) -> int:
        base = sum(c for c, g in zip(customers, grumpy) if g == 0)
        extra = cur = 0
        for i in range(len(customers)):
            if grumpy[i]:
                cur += customers[i]
            if i >= minutes and grumpy[i - minutes]:
                cur -= customers[i - minutes]
            extra = max(extra, cur)
        return base + extra


if __name__ == "__main__":
    print(Solution().maxSatisfied([1, 0, 1, 2, 1, 1, 7, 5], [0, 1, 0, 1, 0, 1, 0, 1], 3))
