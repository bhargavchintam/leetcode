class Solution:
    def longestBeautifulSubstring(self, word: str) -> int:
        order = "aeiou"
        rank = {c: i for i, c in enumerate(order)}
        n = len(word)
        ans = 0
        i = 0
        while i < n:
            j = i + 1
            while j < n and rank[word[j]] - rank[word[j - 1]] in (0, 1):
                j += 1
            seg = word[i:j]
            if len(set(seg)) == 5:
                ans = max(ans, j - i)
            i = j
        return ans


if __name__ == "__main__":
    print(Solution().longestBeautifulSubstring("aeiaaioaaaaeiiiiouuuooaauuaeiu"))
