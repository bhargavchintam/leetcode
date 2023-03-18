import math
from typing import List


class Solution:
    def minSpeedOnTime(self, dist: List[int], hour: float) -> int:
        n = len(dist)
        if hour <= n - 1:
            return -1

        def timeNeeded(speed):
            t = 0
            for d in dist[:-1]:
                t += math.ceil(d / speed)
            t += dist[-1] / speed
            return t

        lo, hi = 1, 10 ** 7
        while lo < hi:
            mid = (lo + hi) // 2
            if timeNeeded(mid) <= hour:
                hi = mid
            else:
                lo = mid + 1
        return lo


if __name__ == "__main__":
    print(Solution().minSpeedOnTime([1, 3, 2], 6))
