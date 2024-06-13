class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        return word.isupper() or word.islower() or word.istitle()


if __name__ == "__main__":
    print(Solution().detectCapitalUse("USA"))
    print(Solution().detectCapitalUse("FlaG"))
