from typing import List


class Solution:
    def longestSubsequence(self, arr: List[int], difference: int) -> int:
        dp = {}
        res = 1
        for x in arr:
            dp[x] = dp.get(x - difference, 0) + 1
            res = max(res, dp[x])
        return res


if __name__ == "__main__":
    print(Solution().longestSubsequence([1, 2, 3, 4], 1))
