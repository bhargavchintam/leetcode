from typing import List
from collections import Counter


class Solution:
    def leastBricks(self, wall: List[List[int]]) -> int:
        cnt = Counter()
        for row in wall:
            s = 0
            for w in row[:-1]:
                s += w
                cnt[s] += 1
        return len(wall) - (max(cnt.values()) if cnt else 0)


if __name__ == "__main__":
    wall = [[1, 2, 2, 1], [3, 1, 2], [1, 3, 2], [2, 4], [3, 1, 2], [1, 3, 1, 1]]
    print(Solution().leastBricks(wall))
