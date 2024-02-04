from typing import List
import bisect


class Solution:
    def jobScheduling(self, startTime: List[int], endTime: List[int], profit: List[int]) -> int:
        jobs = sorted(zip(endTime, startTime, profit))
        ends = [e for e, s, p in jobs]
        n = len(jobs)
        dp = [0] * (n + 1)
        for i in range(1, n + 1):
            e, s, p = jobs[i - 1]
            j = bisect.bisect_right(ends, s, 0, i - 1)
            dp[i] = max(dp[i - 1], dp[j] + p)
        return dp[n]


if __name__ == "__main__":
    print(Solution().jobScheduling([1, 2, 3, 3], [3, 4, 5, 6], [50, 10, 40, 70]))
