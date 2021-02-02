from typing import List


class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        dist = [float("inf")] * n
        dist[src] = 0
        for _ in range(k + 1):
            tmp = dist[:]
            for u, v, w in flights:
                if dist[u] + w < tmp[v]:
                    tmp[v] = dist[u] + w
            dist = tmp
        return dist[dst] if dist[dst] != float("inf") else -1


if __name__ == "__main__":
    flights = [[0, 1, 100], [1, 2, 100], [2, 0, 100], [1, 3, 600], [2, 3, 200]]
    print(Solution().findCheapestPrice(4, flights, 0, 3, 1))
