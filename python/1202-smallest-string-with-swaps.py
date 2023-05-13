from typing import List


class Solution:
    def smallestStringWithSwaps(self, s: str, pairs: List[List[int]]) -> str:
        n = len(s)
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

        for a, b in pairs:
            union(a, b)
        groups = {}
        for i in range(n):
            groups.setdefault(find(i), []).append(i)
        res = list(s)
        for idxs in groups.values():
            idxs.sort()
            chars = sorted(res[i] for i in idxs)
            for i, ch in zip(idxs, chars):
                res[i] = ch
        return ''.join(res)


if __name__ == "__main__":
    print(Solution().smallestStringWithSwaps("dcab", [[0, 3], [1, 2]]))
