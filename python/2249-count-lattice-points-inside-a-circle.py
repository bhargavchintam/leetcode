from typing import List


class Solution:
    def countLatticePoints(self, circles: List[List[int]]) -> int:
        pts = set()
        for x, y, r in circles:
            for dx in range(-r, r + 1):
                for dy in range(-r, r + 1):
                    if dx * dx + dy * dy <= r * r:
                        pts.add((x + dx, y + dy))
        return len(pts)


if __name__ == "__main__":
    print(Solution().countLatticePoints([[2, 2, 1]]))
    print(Solution().countLatticePoints([[2, 2, 2], [3, 4, 1]]))
