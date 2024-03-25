import heapq
from typing import List


class Solution:
    def maxAverageRatio(self, classes: List[List[int]], extraStudents: int) -> float:
        def gain(p, t):
            return (p + 1) / (t + 1) - p / t

        h = [(-gain(p, t), p, t) for p, t in classes]
        heapq.heapify(h)
        for _ in range(extraStudents):
            g, p, t = heapq.heappop(h)
            p += 1
            t += 1
            heapq.heappush(h, (-gain(p, t), p, t))
        return sum(p / t for _, p, t in h) / len(h)


if __name__ == "__main__":
    print(Solution().maxAverageRatio([[1, 2], [3, 5], [2, 2]], 2))
