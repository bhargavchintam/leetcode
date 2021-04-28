from typing import List


class Solution:
    def maxDistToClosest(self, seats: List[int]) -> int:
        n = len(seats)
        prev = -1
        res = 0
        for i, s in enumerate(seats):
            if s == 1:
                res = i if prev < 0 else max(res, (i - prev) // 2)
                prev = i
        res = max(res, n - 1 - prev)
        return res


if __name__ == "__main__":
    print(Solution().maxDistToClosest([1, 0, 0, 0, 1, 0, 1]))
