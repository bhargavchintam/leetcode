from typing import List


class Solution:
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        if len(connections) < n - 1:
            return -1
        p = list(range(n))

        def find(x):
            while p[x] != x:
                p[x] = p[p[x]]
                x = p[x]
            return x

        def union(x, y):
            rx, ry = find(x), find(y)
            if rx != ry:
                p[rx] = ry
                return True
            return False

        comp = n
        for a, b in connections:
            if union(a, b):
                comp -= 1
        return comp - 1


if __name__ == "__main__":
    print(Solution().makeConnected(4, [[0, 1], [0, 2], [1, 2]]))
