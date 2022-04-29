from typing import List


class Solution:
    def maximumPopulation(self, logs: List[List[int]]) -> int:
        delta = [0] * 101
        for b, d in logs:
            delta[b - 1950] += 1
            delta[d - 1950] -= 1
        best = cur = year = 0
        for i in range(101):
            cur += delta[i]
            if cur > best:
                best = cur
                year = i + 1950
        return year


if __name__ == "__main__":
    print(Solution().maximumPopulation([[1993, 1999], [2000, 2010]]))
