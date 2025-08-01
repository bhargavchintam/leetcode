from typing import List


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x: x[0])
        res = [intervals[0]]
        for s, e in intervals[1:]:
            if s <= res[-1][1]:
                res[-1][1] = max(res[-1][1], e)
            else:
                res.append([s, e])
        return res


if __name__ == "__main__":
    print(Solution().merge([[1, 3], [2, 6], [8, 10], [15, 18]]))
