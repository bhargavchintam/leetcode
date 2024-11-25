from typing import List


class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        losses = {}
        for w, l in matches:
            losses.setdefault(w, 0)
            losses[l] = losses.get(l, 0) + 1
        zero = sorted(p for p, c in losses.items() if c == 0)
        one = sorted(p for p, c in losses.items() if c == 1)
        return [zero, one]


if __name__ == "__main__":
    print(Solution().findWinners([[1, 3], [2, 3], [3, 6], [5, 6], [5, 7], [4, 5], [4, 8], [4, 9], [10, 4], [10, 9]]))
