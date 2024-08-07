from collections import Counter
from typing import List


class Solution:
    def largestOverlap(self, img1: List[List[int]], img2: List[List[int]]) -> int:
        n = len(img1)
        A = [(r, c) for r in range(n) for c in range(n) if img1[r][c]]
        B = [(r, c) for r in range(n) for c in range(n) if img2[r][c]]
        cnt = Counter()
        for ar, ac in A:
            for br, bc in B:
                cnt[(ar - br, ac - bc)] += 1
        return max(cnt.values()) if cnt else 0


if __name__ == "__main__":
    img1 = [[1, 1, 0], [0, 1, 0], [0, 1, 0]]
    img2 = [[0, 0, 0], [0, 1, 1], [0, 0, 1]]
    print(Solution().largestOverlap(img1, img2))
