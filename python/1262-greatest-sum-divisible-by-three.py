from typing import List


class Solution:
    def maxSumDivThree(self, nums: List[int]) -> int:
        dp = [0, float('-inf'), float('-inf')]
        for x in nums:
            ndp = dp[:]
            for r in range(3):
                if dp[r] != float('-inf'):
                    nr = (dp[r] + x) % 3
                    ndp[nr] = max(ndp[nr], dp[r] + x)
            dp = ndp
        return dp[0]


if __name__ == "__main__":
    print(Solution().maxSumDivThree([3, 6, 5, 1, 8]))
