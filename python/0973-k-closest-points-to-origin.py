from typing import List
import heapq


class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        return heapq.nsmallest(k, points, key=lambda p: p[0] ** 2 + p[1] ** 2)


if __name__ == "__main__":
    print(Solution().kClosest([[1, 3], [-2, 2]], 1))
