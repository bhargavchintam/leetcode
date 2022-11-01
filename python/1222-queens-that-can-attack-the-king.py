from typing import List


class Solution:
    def queensAttacktheKing(self, queens: List[List[int]], king: List[int]) -> List[List[int]]:
        qs = set(map(tuple, queens))
        res = []
        kr, kc = king
        for dr in (-1, 0, 1):
            for dc in (-1, 0, 1):
                if dr == 0 and dc == 0:
                    continue
                r, c = kr + dr, kc + dc
                while 0 <= r < 8 and 0 <= c < 8:
                    if (r, c) in qs:
                        res.append([r, c])
                        break
                    r += dr
                    c += dc
        return res


if __name__ == "__main__":
    print(Solution().queensAttacktheKing([[0, 1], [1, 0], [4, 0], [0, 4], [3, 3], [2, 4]], [0, 0]))
