class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        parts = s.split()
        return len(parts[-1]) if parts else 0


if __name__ == "__main__":
    print(Solution().lengthOfLastWord("Hello World"))
