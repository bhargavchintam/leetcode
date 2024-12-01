from typing import List


class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
        MOD = 10 ** 9 + 7
        arr.sort()
        dp = {}
        for i, x in enumerate(arr):
            dp[x] = 1
            for y in arr[:i]:
                if x % y == 0 and x // y in dp:
                    dp[x] += dp[y] * dp[x // y]
        return sum(dp.values()) % MOD


if __name__ == "__main__":
    print(Solution().numFactoredBinaryTrees([2, 4]))
