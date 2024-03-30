class Solution:
    def beautySum(self, s: str) -> int:
        n = len(s)
        ans = 0
        for i in range(n):
            cnt = [0] * 26
            for j in range(i, n):
                cnt[ord(s[j]) - 97] += 1
                mx = max(cnt)
                mn = min(c for c in cnt if c > 0)
                ans += mx - mn
        return ans


if __name__ == "__main__":
    print(Solution().beautySum("aabcb"))
