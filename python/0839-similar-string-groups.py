from typing import List


class Solution:
    def numSimilarGroups(self, strs: List[str]) -> int:
        n = len(strs)
        parent = list(range(n))

        def find(x):
            while parent[x] != x:
                parent[x] = parent[parent[x]]
                x = parent[x]
            return x

        def union(x, y):
            rx, ry = find(x), find(y)
            if rx != ry:
                parent[rx] = ry

        def similar(a, b):
            diff = 0
            for x, y in zip(a, b):
                if x != y:
                    diff += 1
                    if diff > 2:
                        return False
            return True

        for i in range(n):
            for j in range(i + 1, n):
                if similar(strs[i], strs[j]):
                    union(i, j)
        return len({find(i) for i in range(n)})


if __name__ == "__main__":
    print(Solution().numSimilarGroups(["tars", "rats", "arts", "star"]))
