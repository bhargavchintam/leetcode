class Solution:
    def repeatedCharacter(self, s: str) -> str:
        seen = set()
        for ch in s:
            if ch in seen:
                return ch
            seen.add(ch)
        return ""


if __name__ == "__main__":
    print(Solution().repeatedCharacter("abccbaacz"))
