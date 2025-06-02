from typing import List


class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        costs.sort(key=lambda c: c[0] - c[1])
        n = len(costs) // 2
        return sum(c[0] for c in costs[:n]) + sum(c[1] for c in costs[n:])


if __name__ == "__main__":
    print(Solution().twoCitySchedCost([[10, 20], [30, 200], [400, 50], [30, 20]]))
