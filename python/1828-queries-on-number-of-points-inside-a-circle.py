from typing import List


class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        ans = []
        for qx, qy, r in queries:
            cnt = 0
            for x, y in points:
                if (x - qx) ** 2 + (y - qy) ** 2 <= r * r:
                    cnt += 1
            ans.append(cnt)
        return ans


if __name__ == "__main__":
    print(Solution().countPoints([[1, 3], [3, 3], [5, 3], [2, 2]], [[2, 3, 1], [4, 3, 1], [1, 1, 2]]))
