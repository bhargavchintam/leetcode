from typing import List


class Solution:
    def isCovered(self, ranges: List[List[int]], left: int, right: int) -> bool:
        covered = set()
        for l, r in ranges:
            for x in range(l, r + 1):
                covered.add(x)
        return all(x in covered for x in range(left, right + 1))


if __name__ == "__main__":
    print(Solution().isCovered([[1, 2], [3, 4], [5, 6]], 2, 5))
