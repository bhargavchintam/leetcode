from collections import defaultdict


class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        cnt = defaultdict(int)
        l = 0
        res = 0
        for r, c in enumerate(s):
            cnt[c] += 1
            while len(cnt) == 3:
                res += len(s) - r
                cnt[s[l]] -= 1
                if cnt[s[l]] == 0:
                    del cnt[s[l]]
                l += 1
        return res


if __name__ == "__main__":
    print(Solution().numberOfSubstrings("abcabc"))
