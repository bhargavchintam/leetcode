class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        return s.count(letter) * 100 // len(s)


if __name__ == "__main__":
    print(Solution().percentageLetter("foobar", "o"))
