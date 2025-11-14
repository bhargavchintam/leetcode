class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        n = len(s)
        l = 0
        cur = 0
        res = 0
        for r in range(n):
            cur += abs(ord(s[r]) - ord(t[r]))
            while cur > maxCost:
                cur -= abs(ord(s[l]) - ord(t[l]))
                l += 1
            res = max(res, r - l + 1)
        return res


if __name__ == "__main__":
    print(Solution().equalSubstring("abcd", "bcdf", 3))
