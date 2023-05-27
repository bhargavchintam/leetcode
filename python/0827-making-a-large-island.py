from typing import List


class Solution:
    def largestIsland(self, grid: List[List[int]]) -> int:
        n = len(grid)

        def neighbors(r, c):
            for dr, dc in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                nr, nc = r + dr, c + dc
                if 0 <= nr < n and 0 <= nc < n:
                    yield nr, nc

        island_id = 2
        sizes = {0: 0}
        for r in range(n):
            for c in range(n):
                if grid[r][c] == 1:
                    stack = [(r, c)]
                    grid[r][c] = island_id
                    size = 0
                    while stack:
                        cr, cc = stack.pop()
                        size += 1
                        for nr, nc in neighbors(cr, cc):
                            if grid[nr][nc] == 1:
                                grid[nr][nc] = island_id
                                stack.append((nr, nc))
                    sizes[island_id] = size
                    island_id += 1
        res = max(sizes.values()) if sizes else 0
        for r in range(n):
            for c in range(n):
                if grid[r][c] == 0:
                    seen = set()
                    for nr, nc in neighbors(r, c):
                        seen.add(grid[nr][nc])
                    total = 1 + sum(sizes.get(i, 0) for i in seen if i != 0)
                    res = max(res, total)
        return res


if __name__ == "__main__":
    print(Solution().largestIsland([[1, 0], [0, 1]]))
