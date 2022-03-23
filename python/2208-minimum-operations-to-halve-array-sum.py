from typing import List
import heapq


class Solution:
    def halveArray(self, nums: List[int]) -> int:
        total = sum(nums)
        target = total / 2
        h = [-x for x in nums]
        heapq.heapify(h)
        reduced = 0.0
        ops = 0
        while reduced < target:
            x = -heapq.heappop(h)
            half = x / 2
            reduced += half
            heapq.heappush(h, -half)
            ops += 1
        return ops


if __name__ == "__main__":
    print(Solution().halveArray([5, 19, 8, 1]))
    print(Solution().halveArray([3, 8, 20]))
