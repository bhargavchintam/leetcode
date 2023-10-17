from typing import List


class Solution:
    def mergeSimilarItems(self, items1: List[List[int]], items2: List[List[int]]) -> List[List[int]]:
        mp = {}
        for v, w in items1 + items2:
            mp[v] = mp.get(v, 0) + w
        return [[v, w] for v, w in sorted(mp.items())]


if __name__ == "__main__":
    print(Solution().mergeSimilarItems([[1, 1], [4, 5], [3, 8]], [[3, 1], [1, 5]]))
