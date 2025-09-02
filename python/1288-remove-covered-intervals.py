from typing import List


class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: (x[0], -x[1]))
        res = 0
        end = -1
        for s, e in intervals:
            if e > end:
                res += 1
                end = e
        return res


if __name__ == "__main__":
    print(Solution().removeCoveredIntervals([[1, 4], [3, 6], [2, 8]]))
