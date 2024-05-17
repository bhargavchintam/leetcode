from typing import List


class Solution:
    def maximumBags(self, capacity: List[int], rocks: List[int], additionalRocks: int) -> int:
        diff = sorted(c - r for c, r in zip(capacity, rocks))
        cnt = 0
        for d in diff:
            if d == 0:
                cnt += 1
            elif d <= additionalRocks:
                additionalRocks -= d
                cnt += 1
            else:
                break
        return cnt


if __name__ == "__main__":
    print(Solution().maximumBags([2, 3, 4, 5], [1, 2, 4, 4], 2))
