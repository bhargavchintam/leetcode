from typing import List


class Solution:
    def largestSumOfAverages(self, nums: List[int], k: int) -> float:
        n = len(nums)
        prefix = [0] * (n + 1)
        for i, x in enumerate(nums):
            prefix[i + 1] = prefix[i] + x

        def avg(i, j):
            return (prefix[j] - prefix[i]) / (j - i)

        dp = [avg(i, n) for i in range(n)]
        for _ in range(k - 1):
            ndp = dp[:]
            for i in range(n):
                for j in range(i + 1, n):
                    ndp[i] = max(ndp[i], avg(i, j) + dp[j])
            dp = ndp
        return dp[0]


if __name__ == "__main__":
    print(Solution().largestSumOfAverages([9, 1, 2, 3, 9], 3))
