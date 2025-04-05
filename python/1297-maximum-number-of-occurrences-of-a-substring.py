from collections import Counter


class Solution:
    def maxFreq(self, s: str, maxLetters: int, minSize: int, maxSize: int) -> int:
        cnt = Counter()
        n = len(s)
        for i in range(n - minSize + 1):
            sub = s[i:i + minSize]
            if len(set(sub)) <= maxLetters:
                cnt[sub] += 1
        return max(cnt.values()) if cnt else 0


if __name__ == "__main__":
    print(Solution().maxFreq("aababcaab", 2, 3, 4))
