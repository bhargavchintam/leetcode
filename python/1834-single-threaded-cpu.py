import heapq
from typing import List


class Solution:
    def getOrder(self, tasks: List[List[int]]) -> List[int]:
        idx = sorted(range(len(tasks)), key=lambda i: tasks[i][0])
        h = []
        ans = []
        t = 0
        i = 0
        n = len(tasks)
        while i < n or h:
            if not h and t < tasks[idx[i]][0]:
                t = tasks[idx[i]][0]
            while i < n and tasks[idx[i]][0] <= t:
                heapq.heappush(h, (tasks[idx[i]][1], idx[i]))
                i += 1
            pt, j = heapq.heappop(h)
            t += pt
            ans.append(j)
        return ans


if __name__ == "__main__":
    print(Solution().getOrder([[1, 2], [2, 4], [3, 2], [4, 1]]))
