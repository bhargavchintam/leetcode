class Solution:
    def twoEggDrop(self, n: int) -> int:
        dp = [[0] * (n + 1) for _ in range(3)]
        for f in range(1, n + 1):
            dp[1][f] = f
        for f in range(1, n + 1):
            best = float('inf')
            for k in range(1, f + 1):
                val = 1 + max(dp[1][k - 1], dp[2][f - k])
                best = min(best, val)
            dp[2][f] = best
        return dp[2][n]


if __name__ == "__main__":
    print(Solution().twoEggDrop(2))
