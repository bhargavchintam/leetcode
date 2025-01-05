class Solution:
    def checkRecord(self, n: int) -> int:
        mod = 1_000_000_007
        dp = [[[0] * 3 for _ in range(2)] for _ in range(n + 1)]
        dp[0][0][0] = 1
        for i in range(1, n + 1):
            for a in range(2):
                for l in range(3):
                    cur = dp[i - 1][a][l]
                    if cur == 0:
                        continue
                    dp[i][a][0] = (dp[i][a][0] + cur) % mod
                    if a == 0:
                        dp[i][1][0] = (dp[i][1][0] + cur) % mod
                    if l < 2:
                        dp[i][a][l + 1] = (dp[i][a][l + 1] + cur) % mod
        return sum(dp[n][a][l] for a in range(2) for l in range(3)) % mod


if __name__ == "__main__":
    print(Solution().checkRecord(2))
