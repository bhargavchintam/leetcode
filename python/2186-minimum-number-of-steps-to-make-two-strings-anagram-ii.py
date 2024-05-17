from collections import Counter


class Solution:
    def minSteps(self, s: str, t: str) -> int:
        cs = Counter(s)
        ct = Counter(t)
        res = 0
        for ch in set(cs) | set(ct):
            res += abs(cs[ch] - ct[ch])
        return res


if __name__ == "__main__":
    print(Solution().minSteps("leetcode", "coats"))
    print(Solution().minSteps("night", "thing"))
