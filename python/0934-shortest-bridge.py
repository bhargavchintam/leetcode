from typing import List
from collections import deque


class Solution:
    def shortestBridge(self, grid: List[List[int]]) -> int:
        n = len(grid)

        def neighbors(r, c):
            for dr, dc in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                nr, nc = r + dr, c + dc
                if 0 <= nr < n and 0 <= nc < n:
                    yield nr, nc

        start = None
        for r in range(n):
            for c in range(n):
                if grid[r][c] == 1:
                    start = (r, c)
                    break
            if start:
                break

        stack = [start]
        island = {start}
        grid[start[0]][start[1]] = 2
        while stack:
            r, c = stack.pop()
            for nr, nc in neighbors(r, c):
                if grid[nr][nc] == 1:
                    grid[nr][nc] = 2
                    island.add((nr, nc))
                    stack.append((nr, nc))

        q = deque(island)
        steps = 0
        while q:
            for _ in range(len(q)):
                r, c = q.popleft()
                for nr, nc in neighbors(r, c):
                    if grid[nr][nc] == 1:
                        return steps
                    if grid[nr][nc] == 0:
                        grid[nr][nc] = 2
                        q.append((nr, nc))
            steps += 1
        return -1


if __name__ == "__main__":
    print(Solution().shortestBridge([[0, 1], [1, 0]]))
