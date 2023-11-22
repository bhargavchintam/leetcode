from collections import Counter


class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not s or not t:
            return ""
        need = Counter(t)
        missing = len(t)
        lo = 0
        best_lo, best_len = 0, float("inf")
        for hi, c in enumerate(s):
            if need[c] > 0:
                missing -= 1
            need[c] -= 1
            while missing == 0:
                if hi - lo + 1 < best_len:
                    best_lo, best_len = lo, hi - lo + 1
                need[s[lo]] += 1
                if need[s[lo]] > 0:
                    missing += 1
                lo += 1
        return "" if best_len == float("inf") else s[best_lo:best_lo + best_len]


if __name__ == "__main__":
    print(Solution().minWindow("ADOBECODEBANC", "ABC"))
