from typing import List


class Solution:
    def minTaps(self, n: int, ranges: List[int]) -> int:
        reach = [0] * (n + 1)
        for i, r in enumerate(ranges):
            lo = max(0, i - r)
            hi = min(n, i + r)
            reach[lo] = max(reach[lo], hi)
        res = 0
        cur_end = 0
        farthest = 0
        i = 0
        while cur_end < n:
            while i <= cur_end:
                farthest = max(farthest, reach[i])
                i += 1
            if farthest <= cur_end:
                return -1
            res += 1
            cur_end = farthest
        return res


if __name__ == "__main__":
    print(Solution().minTaps(5, [3, 4, 1, 1, 0, 0]))
