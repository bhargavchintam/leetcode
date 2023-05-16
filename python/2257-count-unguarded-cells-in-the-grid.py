from typing import List


class Solution:
    def countUnguarded(self, m: int, n: int, guards: List[List[int]], walls: List[List[int]]) -> int:
        grid = [[0] * n for _ in range(m)]
        for r, c in guards:
            grid[r][c] = 2
        for r, c in walls:
            grid[r][c] = 2
        for r, c in guards:
            for dr, dc in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                rr, cc = r + dr, c + dc
                while 0 <= rr < m and 0 <= cc < n and grid[rr][cc] != 2:
                    grid[rr][cc] = 1
                    rr += dr
                    cc += dc
        res = 0
        for r in range(m):
            for c in range(n):
                if grid[r][c] == 0:
                    res += 1
        return res


if __name__ == "__main__":
    print(Solution().countUnguarded(4, 6, [[0, 0], [1, 1], [2, 3]], [[0, 1], [2, 2], [1, 4]]))
    print(Solution().countUnguarded(3, 3, [[1, 1]], [[0, 1], [1, 0], [2, 1], [1, 2]]))
