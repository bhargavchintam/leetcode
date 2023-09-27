class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        res = ""
        for i, c in enumerate(number):
            if c == digit:
                cand = number[:i] + number[i + 1:]
                if cand > res:
                    res = cand
        return res


if __name__ == "__main__":
    print(Solution().removeDigit("123", "3"))
    print(Solution().removeDigit("1231", "1"))
    print(Solution().removeDigit("551", "5"))
