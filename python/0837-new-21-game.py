class Solution:
    def new21Game(self, n: int, k: int, maxPts: int) -> float:
        if k == 0 or n >= k + maxPts - 1:
            return 1.0
        dp = [0.0] * (n + 1)
        dp[0] = 1.0
        wsum = 1.0
        res = 0.0
        for i in range(1, n + 1):
            dp[i] = wsum / maxPts
            if i < k:
                wsum += dp[i]
            else:
                res += dp[i]
            if i - maxPts >= 0 and i - maxPts < k:
                wsum -= dp[i - maxPts]
        return res


if __name__ == "__main__":
    print(Solution().new21Game(6, 1, 10))
