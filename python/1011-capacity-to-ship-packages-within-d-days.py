from typing import List


class Solution:
    def shipWithinDays(self, weights: List[int], D: int) -> int:
        lo, hi = max(weights), sum(weights)

        def feasible(cap):
            days = 1
            cur = 0
            for w in weights:
                if cur + w > cap:
                    days += 1
                    cur = 0
                cur += w
            return days <= D

        while lo < hi:
            mid = (lo + hi) // 2
            if feasible(mid):
                hi = mid
            else:
                lo = mid + 1
        return lo


if __name__ == "__main__":
    print(Solution().shipWithinDays([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 5))
