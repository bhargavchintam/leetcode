from collections import Counter


class Solution:
    def balancedString(self, s: str) -> int:
        n = len(s)
        need = n // 4
        cnt = Counter(s)
        if all(cnt[c] <= need for c in "QWER"):
            return 0
        l = 0
        res = n
        for r, c in enumerate(s):
            cnt[c] -= 1
            while l < n and all(cnt[c] <= need for c in "QWER"):
                res = min(res, r - l + 1)
                cnt[s[l]] += 1
                l += 1
        return res


if __name__ == "__main__":
    print(Solution().balancedString("QWER"))
