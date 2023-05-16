import heapq
from typing import List


class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        projects = sorted(zip(capital, profits))
        n = len(projects)
        heap = []
        i = 0
        for _ in range(k):
            while i < n and projects[i][0] <= w:
                heapq.heappush(heap, -projects[i][1])
                i += 1
            if not heap:
                break
            w += -heapq.heappop(heap)
        return w


if __name__ == "__main__":
    print(Solution().findMaximizedCapital(2, 0, [1, 2, 3], [0, 1, 1]))
    print(Solution().findMaximizedCapital(3, 0, [1, 2, 3], [0, 1, 2]))
