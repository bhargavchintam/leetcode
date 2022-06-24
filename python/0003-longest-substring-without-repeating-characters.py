class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = {}
        lo = 0
        ans = 0
        for i, c in enumerate(s):
            if c in seen and seen[c] >= lo:
                lo = seen[c] + 1
            seen[c] = i
            ans = max(ans, i - lo + 1)
        return ans


if __name__ == "__main__":
    print(Solution().lengthOfLongestSubstring("abcabcbb"))
